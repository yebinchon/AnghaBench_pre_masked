
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpudata {int timer; TYPE_1__* pstate_policy; } ;
struct TYPE_2__ {int sample_rate_ms; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct cpudata *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_1->pstate_policy->sample_rate_ms;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(&VAR_1->timer, VAR_0 + VAR_3);
}
