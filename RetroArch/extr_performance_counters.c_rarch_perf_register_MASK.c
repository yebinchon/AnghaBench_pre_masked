
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_perf_counter {int registered; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct retro_perf_counter** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct retro_perf_counter *VAR_4)
{
   if (
            !FUNC_0(VAR_1, ((void*)0))
         || VAR_4->registered
         || VAR_3 >= VAR_0
      )
      return;

   VAR_2[VAR_3++] = VAR_4;
   VAR_4->registered = 1;
}
