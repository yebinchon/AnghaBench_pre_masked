
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int irqreturn_t ;
typedef int (* diva_xdi_clear_interrupts_proc_t ) (TYPE_1__*) ;
struct TYPE_6__ {int (* diva_isr_handler ) (TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_3__ xdi_adapter; int (* clear_interrupts_proc ) (TYPE_1__*) ;} ;
typedef TYPE_1__ diva_os_xdi_adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 diva_os_xdi_adapter_t *VAR_4 = VAR_3;
 diva_xdi_clear_interrupts_proc_t VAR_5;

 if (!VAR_4 || !VAR_4->xdi_adapter.diva_isr_handler)
  return VAR_1;

 if ((VAR_5 = VAR_4->clear_interrupts_proc)) {
  (*VAR_5) (VAR_4);
  VAR_4->clear_interrupts_proc = ((void*)0);
  return VAR_0;
 }

 (*(VAR_4->xdi_adapter.diva_isr_handler)) (&VAR_4->xdi_adapter);
 return VAR_0;
}
