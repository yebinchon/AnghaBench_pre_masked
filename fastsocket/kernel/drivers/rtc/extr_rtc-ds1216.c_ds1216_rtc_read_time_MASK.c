
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_hour; int tm_wday; int tm_year; void* tm_mon; void* tm_mday; void* tm_min; void* tm_sec; } ;
struct platform_device {int dummy; } ;
struct ds1216_regs {int sec; int min; int hour; int wday; int mday; int month; int year; } ;
struct ds1216_priv {int ioaddr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 struct ds1216_priv* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct rtc_time*) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_5(VAR_2);
 struct ds1216_priv *VAR_5 = FUNC_3(VAR_4);
 struct ds1216_regs VAR_6;

 FUNC_2(VAR_5->ioaddr);
 FUNC_1(VAR_5->ioaddr, (u8 *)&VAR_6);

 VAR_3->tm_sec = FUNC_0(VAR_6.sec);
 VAR_3->tm_min = FUNC_0(VAR_6.min);
 if (VAR_6.hour & VAR_0) {

  VAR_3->tm_hour = FUNC_0(VAR_6.hour & 0x1f);
  if (VAR_6.hour & VAR_1)
   VAR_3->tm_hour += 12;
 } else
  VAR_3->tm_hour = FUNC_0(VAR_6.hour & 0x3f);
 VAR_3->tm_wday = (VAR_6.wday & 7) - 1;
 VAR_3->tm_mday = FUNC_0(VAR_6.mday & 0x3f);
 VAR_3->tm_mon = FUNC_0(VAR_6.month & 0x1f);
 VAR_3->tm_year = FUNC_0(VAR_6.year);
 if (VAR_3->tm_year < 70)
  VAR_3->tm_year += 100;

 return FUNC_4(VAR_3);
}
