//
//  WMRequestManager.h
//  WechatMomentDemo
//
//  Created by zhaoxin on 2018/4/16.
//  Copyright © 2018年 zhaoxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMRequest.h"

@interface WMRequestManager : NSObject

@property(copy, nonatomic)NSString *strURL;

+ (instancetype)sharedManager;

- (void)getMomentInfoWithKey:(NSString *)key delegate:(id<WMRequestDelegate>)delegate;

@end