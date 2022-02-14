
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mon; int tm_wday; scalar_t__ tm_mday; } ;


 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct rtc_time * VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;
 int VAR_4[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

 VAR_2 = VAR_0->tm_year - 1;




 VAR_1 = VAR_2 / 4 - VAR_2 / 100 + VAR_2 / 400;







 VAR_3 = VAR_0->tm_mon > 2 && FUNC_0(VAR_0->tm_year);

 VAR_3 += VAR_2*365 + VAR_1 + VAR_4[VAR_0->tm_mon-1] +
     VAR_0->tm_mday;

 VAR_0->tm_wday = VAR_3 % 7;
}
