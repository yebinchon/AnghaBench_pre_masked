
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpudata {TYPE_1__* pstate_policy; int pid; } ;
struct TYPE_2__ {int deadband; int setpoint; int i_gain_pct; int d_gain_pct; int p_gain_pct; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct cpudata *VAR_0)
{
 FUNC_2(&VAR_0->pid, VAR_0->pstate_policy->p_gain_pct);
 FUNC_0(&VAR_0->pid, VAR_0->pstate_policy->d_gain_pct);
 FUNC_1(&VAR_0->pid, VAR_0->pstate_policy->i_gain_pct);

 FUNC_3(&VAR_0->pid,
  VAR_0->pstate_policy->setpoint,
  100,
  VAR_0->pstate_policy->deadband,
  0);
}
