
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void
FUNC_4(struct rtc_time *VAR_6)
{
 unsigned long VAR_7;

 FUNC_3(VAR_7);

 VAR_6->tm_sec = FUNC_0(VAR_4);
 VAR_6->tm_min = FUNC_0(VAR_2);
 VAR_6->tm_hour = FUNC_0(VAR_1);
 VAR_6->tm_mday = FUNC_0(VAR_0);
 VAR_6->tm_mon = FUNC_0(VAR_3);
 VAR_6->tm_year = FUNC_0(VAR_5);

 FUNC_2(VAR_7);

 VAR_6->tm_sec = FUNC_1(VAR_6->tm_sec);
 VAR_6->tm_min = FUNC_1(VAR_6->tm_min);
 VAR_6->tm_hour = FUNC_1(VAR_6->tm_hour);
 VAR_6->tm_mday = FUNC_1(VAR_6->tm_mday);
 VAR_6->tm_mon = FUNC_1(VAR_6->tm_mon);
 VAR_6->tm_year = FUNC_1(VAR_6->tm_year);






 if (VAR_6->tm_year <= 69)
  VAR_6->tm_year += 100;

 VAR_6->tm_mon--;
}
