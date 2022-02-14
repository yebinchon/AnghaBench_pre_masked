
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sam9_rtc {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,char*,scalar_t__,int ,int ,int ,int ,int ) ;
 struct sam9_rtc* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct sam9_rtc*) ;
 int FUNC_3 (scalar_t__,struct rtc_time*) ;
 scalar_t__ FUNC_4 (struct sam9_rtc*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct sam9_rtc *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5, VAR_6;
 u32 VAR_7;


 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 == 0)
  return -VAR_0;


 VAR_5 = FUNC_4(VAR_4, VAR_1);
 VAR_6 = FUNC_4(VAR_4, VAR_1);
 if (VAR_5 != VAR_6)
  VAR_5 = FUNC_4(VAR_4, VAR_1);

 FUNC_3(VAR_7 + VAR_5, VAR_3);

 FUNC_0(VAR_2, "%s: %4d-%02d-%02d %02d:%02d:%02d\n", "readtime",
  1900 + VAR_3->tm_year, VAR_3->tm_mon, VAR_3->tm_mday,
  VAR_3->tm_hour, VAR_3->tm_min, VAR_3->tm_sec);

 return 0;
}
