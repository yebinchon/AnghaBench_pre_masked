
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; int status; } ;
struct TYPE_4__ {TYPE_1__ xdi_mbox; } ;
typedef TYPE_2__ diva_os_xdi_adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(void *VAR_1, void *VAR_2)
{
 diva_os_xdi_adapter_t *VAR_3 = (diva_os_xdi_adapter_t *) VAR_1;

 VAR_3->xdi_mbox.status &= ~VAR_0;
 if (VAR_3->xdi_mbox.data) {
  FUNC_0(0, VAR_3->xdi_mbox.data);
  VAR_3->xdi_mbox.data = ((void*)0);
 }
}
