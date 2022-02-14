
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct _diva_dma_map_entry {int dummy; } ;
struct TYPE_16__ {int * object; } ;
struct TYPE_11__ {scalar_t__ registered; int irq_nr; } ;
struct TYPE_14__ {int * dma_map; scalar_t__ e_max; scalar_t__ Channels; int * e_tbl; int data_spin_lock; int isr_spin_lock; TYPE_8__ isr_soft_isr; TYPE_8__ req_soft_isr; TYPE_1__ irq_info; scalar_t__ Initialized; } ;
struct TYPE_12__ {int hdev; int ** addr; scalar_t__* bar; } ;
struct TYPE_13__ {TYPE_2__ pci; } ;
struct TYPE_15__ {TYPE_4__ xdi_adapter; TYPE_3__ resources; } ;
typedef TYPE_5__ diva_os_xdi_adapter_t ;


 int FUNC_0 (int ,struct _diva_dma_map_entry*) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(diva_os_xdi_adapter_t * VAR_0)
{
 int VAR_1 = 0;




 if (VAR_0->xdi_adapter.Initialized) {
  FUNC_6(VAR_0);
 }




 if (VAR_0->xdi_adapter.irq_info.registered) {
  FUNC_4(VAR_0, VAR_0->xdi_adapter.irq_info.irq_nr);
 }
 VAR_0->xdi_adapter.irq_info.registered = 0;




 for (VAR_1 = 0; VAR_1 < 5; VAR_1++) {
  if (VAR_0->resources.pci.bar[VAR_1]
      && VAR_0->resources.pci.addr[VAR_1]) {
   FUNC_7(VAR_0->resources.pci.addr[VAR_1]);
   VAR_0->resources.pci.bar[VAR_1] = 0;
   VAR_0->resources.pci.addr[VAR_1] = ((void*)0);
  }
 }




 FUNC_1(&VAR_0->xdi_adapter.isr_soft_isr);
 FUNC_1(&VAR_0->xdi_adapter.req_soft_isr);

 FUNC_5(&VAR_0->xdi_adapter.req_soft_isr);
 VAR_0->xdi_adapter.isr_soft_isr.object = ((void*)0);

 FUNC_2(&VAR_0->xdi_adapter.isr_spin_lock, "rm");
 FUNC_2(&VAR_0->xdi_adapter.data_spin_lock, "rm");




 if (VAR_0->xdi_adapter.e_tbl) {
  FUNC_3(0, VAR_0->xdi_adapter.e_tbl);
  VAR_0->xdi_adapter.e_tbl = ((void*)0);
 }
 VAR_0->xdi_adapter.Channels = 0;
 VAR_0->xdi_adapter.e_max = 0;





 FUNC_0(VAR_0->resources.pci.hdev,
     (struct _diva_dma_map_entry *) VAR_0->xdi_adapter.
     dma_map);
 VAR_0->xdi_adapter.dma_map = ((void*)0);






 return (0);
}
