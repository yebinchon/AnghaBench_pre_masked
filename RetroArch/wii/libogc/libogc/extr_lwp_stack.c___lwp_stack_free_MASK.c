
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack; int stack_allocated; } ;
typedef TYPE_1__ lwp_cntrl ;


 int FUNC_0 (int ) ;

void FUNC_1(lwp_cntrl *VAR_0)
{
 if(!VAR_0->stack_allocated)
  return;

 FUNC_0(VAR_0->stack);
}
