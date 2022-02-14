
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_perf_counter {scalar_t__ call_cnt; scalar_t__ total; } ;



__attribute__((used)) static int FUNC_0(struct retro_perf_counter **VAR_0,
      unsigned VAR_1, unsigned VAR_2, const char *VAR_3)
{
   if (VAR_0[VAR_1])
   {
      VAR_0[VAR_1]->total = 0;
      VAR_0[VAR_1]->call_cnt = 0;
   }

   return 0;
}
