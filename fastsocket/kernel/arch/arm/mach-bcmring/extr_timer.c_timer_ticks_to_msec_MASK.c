
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_tick_count_t ;
typedef int timer_msec_t ;


 int FUNC_0 () ;

timer_msec_t FUNC_1(timer_tick_count_t VAR_0)
{
 static int VAR_1;

 if (VAR_1 == 0) {
  VAR_1 = FUNC_0() / 1000;
 }

 return VAR_0 / VAR_1;
}
