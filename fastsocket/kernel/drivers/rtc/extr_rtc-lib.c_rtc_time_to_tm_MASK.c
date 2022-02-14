
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_wday; unsigned int tm_year; int tm_yday; unsigned int tm_mon; int tm_mday; unsigned long tm_hour; unsigned long tm_min; unsigned long tm_sec; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

void FUNC_3(unsigned long VAR_0, struct rtc_time *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = VAR_0 / 86400;
 VAR_0 -= (unsigned int) VAR_4 * 86400;


 VAR_1->tm_wday = (VAR_4 + 4) % 7;

 VAR_3 = 1970 + VAR_4 / 365;
 VAR_4 -= (VAR_3 - 1970) * 365
  + FUNC_0(VAR_3 - 1)
  - FUNC_0(1970 - 1);
 if (VAR_4 < 0) {
  VAR_3 -= 1;
  VAR_4 += 365 + FUNC_1(VAR_3);
 }
 VAR_1->tm_year = VAR_3 - 1900;
 VAR_1->tm_yday = VAR_4 + 1;

 for (VAR_2 = 0; VAR_2 < 11; VAR_2++) {
  int VAR_5;

  VAR_5 = VAR_4 - FUNC_2(VAR_2, VAR_3);
  if (VAR_5 < 0)
   break;
  VAR_4 = VAR_5;
 }
 VAR_1->tm_mon = VAR_2;
 VAR_1->tm_mday = VAR_4 + 1;

 VAR_1->tm_hour = VAR_0 / 3600;
 VAR_0 -= VAR_1->tm_hour * 3600;
 VAR_1->tm_min = VAR_0 / 60;
 VAR_1->tm_sec = VAR_0 - VAR_1->tm_min * 60;
}
