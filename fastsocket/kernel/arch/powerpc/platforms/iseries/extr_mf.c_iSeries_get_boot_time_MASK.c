
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;


 int FUNC_0 (struct rtc_time*) ;
 unsigned long FUNC_1 (scalar_t__,int ,int ,int ,int ,int ) ;

unsigned long FUNC_2(void)
{
 struct rtc_time VAR_0;

 FUNC_0(&VAR_0);
 return FUNC_1(VAR_0.tm_year + 1900, VAR_0.tm_mon, VAR_0.tm_mday,
        VAR_0.tm_hour, VAR_0.tm_min, VAR_0.tm_sec);
}
