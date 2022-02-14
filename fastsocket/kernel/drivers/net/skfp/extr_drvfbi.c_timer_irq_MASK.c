
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t_start; int t_stop; } ;
struct s_smc {TYPE_1__ hw; } ;


 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct s_smc*) ;

void FUNC_2(struct s_smc *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->hw.t_stop = VAR_0->hw.t_start;
 FUNC_1(VAR_0) ;
}
