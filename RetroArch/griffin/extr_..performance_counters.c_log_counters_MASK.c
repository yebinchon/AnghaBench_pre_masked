
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct retro_perf_counter {scalar_t__ call_cnt; scalar_t__ total; int ident; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct retro_perf_counter **VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      if (VAR_1[VAR_3]->call_cnt)
      {
         FUNC_0(VAR_0,
               VAR_1[VAR_3]->ident,
               (uint64_t)VAR_1[VAR_3]->total /
               (uint64_t)VAR_1[VAR_3]->call_cnt,
               (uint64_t)VAR_1[VAR_3]->call_cnt);
      }
   }
}
