
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pstate; int turbo_pstate; int min_pstate; } ;
struct cpudata {TYPE_1__ pstate; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct cpudata*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct cpudata *VAR_0)
{
 FUNC_4(VAR_0->name, "Intel 2nd generation core");

 VAR_0->pstate.min_pstate = FUNC_1();
 VAR_0->pstate.max_pstate = FUNC_0();
 VAR_0->pstate.turbo_pstate = FUNC_3();





 FUNC_2(VAR_0, VAR_0->pstate.max_pstate);
}
