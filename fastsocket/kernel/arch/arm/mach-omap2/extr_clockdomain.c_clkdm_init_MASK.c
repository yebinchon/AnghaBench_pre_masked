
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int dummy; } ;
struct TYPE_2__ {scalar_t__ ptr; } ;
struct clkdm_pwrdm_autodep {TYPE_1__ pwrdm; } ;


 int FUNC_0 (struct clkdm_pwrdm_autodep*) ;
 struct clkdm_pwrdm_autodep* VAR_0 ;
 int FUNC_1 (struct clockdomain*) ;

void FUNC_2(struct clockdomain **VAR_1,
  struct clkdm_pwrdm_autodep *VAR_2)
{
 struct clockdomain **VAR_3 = ((void*)0);
 struct clkdm_pwrdm_autodep *VAR_4 = ((void*)0);

 if (VAR_1)
  for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
   FUNC_1(*VAR_3);

 VAR_0 = VAR_2;
 if (VAR_0)
  for (VAR_4 = VAR_0; VAR_4->pwrdm.ptr; VAR_4++)
   FUNC_0(VAR_4);
}
