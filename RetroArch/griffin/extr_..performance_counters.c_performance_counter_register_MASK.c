
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_perf_counter {int registered; } ;


 scalar_t__ VAR_0 ;
 struct retro_perf_counter** VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(struct retro_perf_counter *VAR_3)
{
   if (VAR_3->registered || VAR_2 >= VAR_0)
      return;

   VAR_1[VAR_2++] = VAR_3;
   VAR_3->registered = 1;
}
