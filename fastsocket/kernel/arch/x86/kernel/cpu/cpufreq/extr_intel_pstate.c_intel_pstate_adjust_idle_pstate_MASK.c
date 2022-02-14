
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_pstate; scalar_t__ min_pstate; } ;
struct _pid {int dummy; } ;
struct cpudata {TYPE_1__ pstate; struct _pid idle_pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cpudata*) ;
 int FUNC_2 (struct cpudata*) ;
 int FUNC_3 (struct cpudata*,int) ;
 int FUNC_4 (struct cpudata*,int) ;
 int FUNC_5 (struct _pid*,int) ;

__attribute__((used)) static inline void FUNC_6(struct cpudata *VAR_0)
{
 int VAR_1;
 struct _pid *VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 VAR_2 = &VAR_0->idle_pid;

 VAR_1 = FUNC_1(VAR_0);

 VAR_3 = FUNC_5(VAR_2, 100 - VAR_1);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_3 < 0)
  FUNC_3(VAR_0, VAR_4);
 else
  FUNC_4(VAR_0, VAR_4);

 if (VAR_0->pstate.current_pstate == VAR_0->pstate.min_pstate)
  FUNC_2(VAR_0);
}
