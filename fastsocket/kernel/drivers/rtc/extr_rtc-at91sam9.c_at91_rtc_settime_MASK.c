
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct sam9_rtc {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,char*,scalar_t__,int ,int ,int ,int ,int ) ;
 struct sam9_rtc* FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (struct sam9_rtc*) ;
 int FUNC_3 (struct sam9_rtc*,unsigned long) ;
 int FUNC_4 (struct rtc_time*,unsigned long*) ;
 unsigned long FUNC_5 (struct sam9_rtc*,int ) ;
 int FUNC_6 (struct sam9_rtc*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct sam9_rtc *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;

 FUNC_0(VAR_6, "%s: %4d-%02d-%02d %02d:%02d:%02d\n", "settime",
  1900 + VAR_7->tm_year, VAR_7->tm_mon, VAR_7->tm_mday,
  VAR_7->tm_hour, VAR_7->tm_min, VAR_7->tm_sec);

 VAR_9 = FUNC_4(VAR_7, &VAR_13);
 if (VAR_9 != 0)
  return VAR_9;

 VAR_12 = FUNC_5(VAR_8, VAR_5);


 FUNC_6(VAR_8, VAR_5, VAR_12 & ~(VAR_2 | VAR_3));


 VAR_10 = FUNC_2(VAR_8);


 VAR_13 += 1;
 FUNC_3(VAR_8, VAR_13);


 VAR_11 = FUNC_5(VAR_8, VAR_1);
 if (VAR_11 != VAR_0) {
  if (VAR_10 > VAR_13) {

   VAR_11 += (VAR_10 - VAR_13);
  } else if ((VAR_11 + VAR_10) > VAR_13) {

   VAR_11 -= (VAR_13 - VAR_10);
  } else {

   VAR_11 = VAR_0;
   VAR_12 &= ~VAR_2;
  }
  FUNC_6(VAR_8, VAR_1, VAR_11);
 }


 FUNC_6(VAR_8, VAR_5, VAR_12 | VAR_4);

 return 0;
}
