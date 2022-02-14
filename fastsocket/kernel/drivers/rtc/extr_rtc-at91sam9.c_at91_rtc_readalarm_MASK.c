
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sam9_rtc {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;
typedef int alrm ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,char*,scalar_t__,int ,int ,int ,int ,int ) ;
 struct sam9_rtc* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct sam9_rtc*) ;
 int FUNC_3 (struct rtc_wkalrm*,int ,int) ;
 int FUNC_4 (scalar_t__,struct rtc_time*) ;
 int FUNC_5 (struct sam9_rtc*,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct sam9_rtc *VAR_7 = FUNC_1(VAR_5);
 struct rtc_time *VAR_8 = &VAR_6->time;
 u32 VAR_9 = FUNC_5(VAR_7, VAR_1);
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 == 0)
  return -VAR_3;

 FUNC_3(VAR_6, 0, sizeof(VAR_6));
 if (VAR_9 != VAR_0 && VAR_10 != 0) {
  FUNC_4(VAR_10 + VAR_9, VAR_8);

  FUNC_0(VAR_5, "%s: %4d-%02d-%02d %02d:%02d:%02d\n", "readalarm",
   1900 + VAR_8->tm_year, VAR_8->tm_mon, VAR_8->tm_mday,
   VAR_8->tm_hour, VAR_8->tm_min, VAR_8->tm_sec);

  if (FUNC_5(VAR_7, VAR_4) & VAR_2)
   VAR_6->enabled = 1;
 }

 return 0;
}
