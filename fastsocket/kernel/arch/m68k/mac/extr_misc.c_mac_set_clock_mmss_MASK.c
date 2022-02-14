
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned long tm_sec; unsigned long tm_min; } ;


 int FUNC_0 (int,struct rtc_time*) ;

int FUNC_1 (unsigned long VAR_0)
{
 struct rtc_time VAR_1;

 FUNC_0(0, &VAR_1);
 VAR_1.tm_sec = VAR_0 % 60;
 VAR_1.tm_min = (VAR_0 / 60) % 60;
 FUNC_0(1, &VAR_1);

 return 0;
}
