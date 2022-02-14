
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unique_id; int pci_slot; int pci_vendor_id; int pci_device_id; int pci_dev_fn; int pci_bus; int num_ldrv; int irq; int baseport; } ;
typedef TYPE_1__ mraid_hba_info_t ;
struct TYPE_6__ {int uid; int pcislot; int pcivendor; int pciid; int pcifun; int pcidev; int pcibus; int numldrv; int irq; int base; } ;
typedef TYPE_2__ mcontroller_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(mraid_hba_info_t *VAR_0, mcontroller_t *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 VAR_1->base = VAR_0->baseport;
 VAR_1->irq = VAR_0->irq;
 VAR_1->numldrv = VAR_0->num_ldrv;
 VAR_1->pcibus = VAR_0->pci_bus;
 VAR_1->pcidev = VAR_0->pci_slot;
 VAR_1->pcifun = FUNC_0(VAR_0->pci_dev_fn);
 VAR_1->pciid = VAR_0->pci_device_id;
 VAR_1->pcivendor = VAR_0->pci_vendor_id;
 VAR_1->pcislot = VAR_0->pci_slot;
 VAR_1->uid = VAR_0->unique_id;
}
