
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int capabilities; int lock; scalar_t__ regbase; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_0 (int) ;
 struct sh_rtc* FUNC_1 (struct platform_device*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct platform_device *VAR_14 = FUNC_5(VAR_12);
 struct sh_rtc *VAR_15 = FUNC_1(VAR_14);
 unsigned int VAR_16;
 int VAR_17;

 FUNC_3(&VAR_15->lock);


 VAR_16 = FUNC_2(VAR_15->regbase + VAR_0);
 VAR_16 |= VAR_1;
 VAR_16 &= ~VAR_3;
 FUNC_6(VAR_16, VAR_15->regbase + VAR_0);

 FUNC_6(FUNC_0(VAR_13->tm_sec), VAR_15->regbase + VAR_8);
 FUNC_6(FUNC_0(VAR_13->tm_min), VAR_15->regbase + VAR_6);
 FUNC_6(FUNC_0(VAR_13->tm_hour), VAR_15->regbase + VAR_5);
 FUNC_6(FUNC_0(VAR_13->tm_wday), VAR_15->regbase + VAR_10);
 FUNC_6(FUNC_0(VAR_13->tm_mday), VAR_15->regbase + VAR_4);
 FUNC_6(FUNC_0(VAR_13->tm_mon + 1), VAR_15->regbase + VAR_7);

 if (VAR_15->capabilities & VAR_9) {
  VAR_17 = (FUNC_0((VAR_13->tm_year + 1900) / 100) << 8) |
   FUNC_0(VAR_13->tm_year % 100);
  FUNC_7(VAR_17, VAR_15->regbase + VAR_11);
 } else {
  VAR_17 = VAR_13->tm_year % 100;
  FUNC_6(FUNC_0(VAR_17), VAR_15->regbase + VAR_11);
 }


 VAR_16 = FUNC_2(VAR_15->regbase + VAR_0);
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_2 | VAR_3;
 FUNC_6(VAR_16, VAR_15->regbase + VAR_0);

 FUNC_4(&VAR_15->lock);

 return 0;
}
