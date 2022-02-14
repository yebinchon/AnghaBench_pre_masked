
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct et131x_adapter {TYPE_2__* regs; int CachedMaskValue; } ;
struct TYPE_3__ {int int_mask; } ;
struct TYPE_4__ {TYPE_1__ global; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct et131x_adapter *VAR_1)
{

 VAR_1->CachedMaskValue = VAR_0;
 FUNC_0(VAR_0, &VAR_1->regs->global.int_mask);
}
