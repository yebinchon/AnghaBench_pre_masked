
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kauai_timing {int cycle_time; int timing_reg; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline u32
FUNC_1(struct kauai_timing* VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_0[VAR_2].cycle_time; VAR_2++)
  if (VAR_1 > VAR_0[VAR_2+1].cycle_time)
   return VAR_0[VAR_2].timing_reg;
 FUNC_0();
 return 0;
}
