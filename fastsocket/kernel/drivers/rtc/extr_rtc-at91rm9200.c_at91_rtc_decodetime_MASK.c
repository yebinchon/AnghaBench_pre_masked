
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_year; int tm_wday; int tm_mon; int tm_mday; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_8, unsigned int VAR_9,
    struct rtc_time *VAR_10)
{
 unsigned int VAR_11, VAR_12;


 do {
  VAR_11 = FUNC_0(VAR_8);
  VAR_12 = FUNC_0(VAR_9);
 } while ((VAR_11 != FUNC_0(VAR_8)) ||
   (VAR_12 != FUNC_0(VAR_9)));

 VAR_10->tm_sec = FUNC_1((VAR_11 & VAR_6) >> 0);
 VAR_10->tm_min = FUNC_1((VAR_11 & VAR_4) >> 8);
 VAR_10->tm_hour = FUNC_1((VAR_11 & VAR_3) >> 16);






 VAR_10->tm_year = FUNC_1(VAR_12 & VAR_0) * 100;
 VAR_10->tm_year += FUNC_1((VAR_12 & VAR_7) >> 8);

 VAR_10->tm_wday = FUNC_1((VAR_12 & VAR_2) >> 21) - 1;
 VAR_10->tm_mon = FUNC_1((VAR_12 & VAR_5) >> 16) - 1;
 VAR_10->tm_mday = FUNC_1((VAR_12 & VAR_1) >> 24);
}
