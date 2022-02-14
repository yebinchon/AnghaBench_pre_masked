
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu_idle_pop; int rtcPop; } ;
typedef TYPE_1__ cpu_data_t ;
typedef scalar_t__ boolean_t ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;

void
FUNC_3(
             boolean_t VAR_0)
{

#pragma unused(wfi)

 cpu_data_t * VAR_1;

 VAR_1 = FUNC_0();
 VAR_1->cpu_idle_pop = 0x0ULL;
 {
  FUNC_2(VAR_1->rtcPop);
 }
}
