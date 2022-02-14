
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct sam9_rtc {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,char*,int ,int ,int ,int ,int ,int ) ;
 struct sam9_rtc* FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (struct sam9_rtc*) ;
 int FUNC_3 (struct rtc_time*,unsigned long*) ;
 unsigned long FUNC_4 (struct sam9_rtc*,int ) ;
 int FUNC_5 (struct sam9_rtc*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct sam9_rtc *VAR_7 = FUNC_1(VAR_5);
 struct rtc_time *VAR_8 = &VAR_6->time;
 unsigned long VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_8, &VAR_9);
 if (VAR_12 != 0)
  return VAR_12;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 == 0) {

  return -VAR_3;
 }
 VAR_11 = FUNC_4(VAR_7, VAR_4);
 FUNC_5(VAR_7, VAR_4, VAR_11 & ~VAR_2);


 if (VAR_9 <= VAR_10) {
  FUNC_5(VAR_7, VAR_1, VAR_0);
  return 0;
 }


 FUNC_5(VAR_7, VAR_1, VAR_9 - VAR_10);
 if (VAR_6->enabled)
  FUNC_5(VAR_7, VAR_4, VAR_11 | VAR_2);

 FUNC_0(VAR_5, "%s: %4d-%02d-%02d %02d:%02d:%02d\n", "setalarm",
  VAR_8->tm_year, VAR_8->tm_mon, VAR_8->tm_mday, VAR_8->tm_hour,
  VAR_8->tm_min, VAR_8->tm_sec);

 return 0;
}
