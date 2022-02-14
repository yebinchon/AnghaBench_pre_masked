
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int current_pstate; int turbo_pstate; } ;
struct cpudata {size_t sample_ptr; TYPE_2__ pstate; TYPE_1__* samples; } ;
typedef int int32_t ;
struct TYPE_3__ {int core_pct_busy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct cpudata *VAR_0)
{
 int32_t VAR_1;
 int32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_0->samples[VAR_0->sample_ptr].core_pct_busy);
 VAR_3 = FUNC_2(VAR_0->pstate.turbo_pstate);
 VAR_4 = FUNC_2(VAR_0->pstate.current_pstate);
 VAR_1 = FUNC_3(VAR_2, FUNC_0(VAR_3, VAR_4));

 return FUNC_1(VAR_1);
}
