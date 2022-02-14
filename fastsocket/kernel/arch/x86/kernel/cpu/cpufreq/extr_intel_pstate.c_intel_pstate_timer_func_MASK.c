
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_pstate; scalar_t__ min_pstate; int max_pstate; } ;
struct cpudata {int min_pstate_count; TYPE_1__ pstate; int idle_mode; } ;


 int FUNC_0 (struct cpudata*) ;
 int FUNC_1 (struct cpudata*) ;
 int FUNC_2 (struct cpudata*) ;
 int FUNC_3 (struct cpudata*) ;
 int FUNC_4 (struct cpudata*,int ) ;
 int FUNC_5 (struct cpudata*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct cpudata *VAR_1 = (struct cpudata *) VAR_0;

 FUNC_3(VAR_1);

 if (!VAR_1->idle_mode)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
 FUNC_5(VAR_1);
}
