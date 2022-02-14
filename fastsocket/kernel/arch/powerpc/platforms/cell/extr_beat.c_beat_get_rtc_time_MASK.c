
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rtc_time {int tm_year; int tm_mon; } ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,struct rtc_time*) ;

void FUNC_2(struct rtc_time *VAR_0)
{
 u64 VAR_1;

 if (FUNC_0(&VAR_1))
  VAR_1 = 0;
 FUNC_1(VAR_1, VAR_0);
 VAR_0->tm_year -= 1900;
 VAR_0->tm_mon -= 1;
}
