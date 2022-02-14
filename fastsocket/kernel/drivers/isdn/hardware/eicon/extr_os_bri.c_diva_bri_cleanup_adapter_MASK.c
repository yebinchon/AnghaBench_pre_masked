
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int * object; } ;
struct TYPE_12__ {scalar_t__ registered; int irq_nr; } ;
struct TYPE_15__ {int * e_tbl; int data_spin_lock; int isr_spin_lock; TYPE_6__ isr_soft_isr; TYPE_6__ req_soft_isr; TYPE_1__ irq_info; scalar_t__ Initialized; } ;
struct TYPE_13__ {scalar_t__* bar; int ** addr; int * length; } ;
struct TYPE_14__ {TYPE_2__ pci; } ;
struct TYPE_16__ {TYPE_4__ xdi_adapter; TYPE_3__ resources; int * port_name; } ;
typedef TYPE_5__ diva_os_xdi_adapter_t ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_5__*,int ,scalar_t__,int ,int *,int) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(diva_os_xdi_adapter_t * VAR_0)
{
 int VAR_1;

 if (VAR_0->xdi_adapter.Initialized) {
  FUNC_0(VAR_0);
 }




 if (VAR_0->xdi_adapter.irq_info.registered) {
  FUNC_5(VAR_0, VAR_0->xdi_adapter.irq_info.irq_nr);
 }
 VAR_0->xdi_adapter.irq_info.registered = 0;

 if (VAR_0->resources.pci.addr[0] && VAR_0->resources.pci.bar[0]) {
  FUNC_7(VAR_0->resources.pci.addr[0]);
  VAR_0->resources.pci.addr[0] = ((void*)0);
  VAR_0->resources.pci.bar[0] = 0;
 }

 for (VAR_1 = 1; VAR_1 < 3; VAR_1++) {
  if (VAR_0->resources.pci.addr[VAR_1] && VAR_0->resources.pci.bar[VAR_1]) {
   FUNC_4(VAR_0, 0,
       VAR_0->resources.pci.bar[VAR_1],
       VAR_0->resources.pci.
       length[VAR_1],
       &VAR_0->port_name[0], VAR_1);
   VAR_0->resources.pci.addr[VAR_1] = ((void*)0);
   VAR_0->resources.pci.bar[VAR_1] = 0;
  }
 }




 FUNC_1(&VAR_0->xdi_adapter.req_soft_isr);
 FUNC_1(&VAR_0->xdi_adapter.isr_soft_isr);

 FUNC_6(&VAR_0->xdi_adapter.req_soft_isr);
 VAR_0->xdi_adapter.isr_soft_isr.object = ((void*)0);

 FUNC_2(&VAR_0->xdi_adapter.isr_spin_lock, "rm");
 FUNC_2(&VAR_0->xdi_adapter.data_spin_lock, "rm");




 if (VAR_0->xdi_adapter.e_tbl) {
  FUNC_3(0, VAR_0->xdi_adapter.e_tbl);
  VAR_0->xdi_adapter.e_tbl = ((void*)0);
 }

 return (0);
}
