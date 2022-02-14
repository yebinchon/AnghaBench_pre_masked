
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(u32 VAR_10, u32 VAR_11, struct rtc_time *VAR_12)
{
 VAR_12->tm_year = ((VAR_10 & VAR_8) >> VAR_9) - 1900;
 VAR_12->tm_mon = (((VAR_10 & VAR_6) >> VAR_7)) - 1;
 VAR_12->tm_mday = (VAR_10 & VAR_5);
 VAR_12->tm_hour = (VAR_11 & VAR_0) >> VAR_1;
 VAR_12->tm_min = (VAR_11 & VAR_2) >> VAR_3;
 VAR_12->tm_sec = VAR_11 & VAR_4;
}
