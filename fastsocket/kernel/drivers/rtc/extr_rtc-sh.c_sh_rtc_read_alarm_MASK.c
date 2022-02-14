
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int lock; scalar_t__ regbase; } ;
struct rtc_time {scalar_t__ tm_mon; int tm_year; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sh_rtc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (struct sh_rtc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct platform_device *VAR_10 = FUNC_5(VAR_8);
 struct sh_rtc *VAR_11 = FUNC_0(VAR_10);
 struct rtc_time *VAR_12 = &VAR_9->time;

 FUNC_3(&VAR_11->lock);

 VAR_12->tm_sec = FUNC_2(VAR_11, VAR_6);
 VAR_12->tm_min = FUNC_2(VAR_11, VAR_4);
 VAR_12->tm_hour = FUNC_2(VAR_11, VAR_3);
 VAR_12->tm_wday = FUNC_2(VAR_11, VAR_7);
 VAR_12->tm_mday = FUNC_2(VAR_11, VAR_2);
 VAR_12->tm_mon = FUNC_2(VAR_11, VAR_5);
 if (VAR_12->tm_mon > 0)
  VAR_12->tm_mon -= 1;
 VAR_12->tm_year = 0xffff;

 VAR_9->enabled = (FUNC_1(VAR_11->regbase + VAR_0) & VAR_1) ? 1 : 0;

 FUNC_4(&VAR_11->lock);

 return 0;
}
