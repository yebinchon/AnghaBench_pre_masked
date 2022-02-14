
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; scalar_t__ tm_isdst; scalar_t__ tm_yday; scalar_t__ tm_wday; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, u8 *VAR_1, struct rtc_time *VAR_2)
{
 VAR_2->tm_wday = 0;
 VAR_2->tm_yday = 0;
 VAR_2->tm_isdst = 0;
 if (VAR_0) {
  VAR_2->tm_sec = 0;
  VAR_2->tm_min = 0;
  VAR_2->tm_hour = 0;
  VAR_2->tm_mday = 15;
  VAR_2->tm_mon = 5;
  VAR_2->tm_year = 52;
  return VAR_0;
 }

 if ((VAR_1[2] == 0xa9) ||
     (VAR_1[2] == 0xaf)) {

  VAR_2->tm_sec = 1;
  VAR_2->tm_min = 1;
  VAR_2->tm_hour = 1;
  VAR_2->tm_mday = 10;
  VAR_2->tm_mon = 8;
  VAR_2->tm_year = 71;
  FUNC_1(VAR_2);
 }
 {
  u8 VAR_3 = VAR_1[5];
  u8 VAR_4 = VAR_1[6];
  u8 VAR_5 = VAR_1[7];
  u8 VAR_6 = VAR_1[8];
  u8 VAR_7 = VAR_1[10];
  u8 VAR_8 = VAR_1[11];

  VAR_4 = FUNC_0(VAR_4);
  VAR_5 = FUNC_0(VAR_5);
  VAR_6 = FUNC_0(VAR_6);
  VAR_7 = FUNC_0(VAR_7);
  VAR_8 = FUNC_0(VAR_8);
  VAR_3 = FUNC_0(VAR_3);

  if (VAR_3 <= 69)
   VAR_3 += 100;

  VAR_2->tm_sec = VAR_4;
  VAR_2->tm_min = VAR_5;
  VAR_2->tm_hour = VAR_6;
  VAR_2->tm_mday = VAR_7;
  VAR_2->tm_mon = VAR_8;
  VAR_2->tm_year = VAR_3;
 }

 return 0;
}
