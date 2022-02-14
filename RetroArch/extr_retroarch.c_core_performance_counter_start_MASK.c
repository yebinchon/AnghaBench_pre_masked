
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_perf_counter {int start; int call_cnt; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct retro_perf_counter *VAR_1)
{
   if (VAR_0)
   {
      VAR_1->call_cnt++;
      VAR_1->start = FUNC_0();
   }
}
