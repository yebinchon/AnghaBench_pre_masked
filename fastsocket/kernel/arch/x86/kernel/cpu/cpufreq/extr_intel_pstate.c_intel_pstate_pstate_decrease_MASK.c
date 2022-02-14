
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;


 int FUNC_0 (struct cpudata*,int) ;

__attribute__((used)) static inline void FUNC_1(struct cpudata *VAR_0, int VAR_1)
{
 int VAR_2;
 VAR_2 = VAR_0->pstate.current_pstate - VAR_1;
 FUNC_0(VAR_0, VAR_2);
}
