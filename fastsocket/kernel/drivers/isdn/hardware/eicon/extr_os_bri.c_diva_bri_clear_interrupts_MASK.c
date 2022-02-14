
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int isr_soft_isr; int req_soft_isr; int a; int (* tst_irq ) (int *) ;int (* clr_irq ) (int *) ;int (* disIrq ) (TYPE_2__*) ;} ;
struct TYPE_5__ {TYPE_2__ xdi_adapter; } ;
typedef TYPE_1__ diva_os_xdi_adapter_t ;
typedef TYPE_2__* PISDN_ADAPTER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(diva_os_xdi_adapter_t * VAR_0)
{
 PISDN_ADAPTER VAR_1 = &VAR_0->xdi_adapter;




 VAR_1->disIrq(VAR_1);

 VAR_1->tst_irq(&VAR_1->a);
 VAR_1->clr_irq(&VAR_1->a);
 VAR_1->tst_irq(&VAR_1->a);




 FUNC_0(&VAR_1->req_soft_isr);
 FUNC_0(&VAR_1->isr_soft_isr);
}
