
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* u16 ;
struct pci_dev {char* vendor; char* device; char* subsystem_device; char* subsystem_vendor; int * resource; int irq; } ;
struct controller {char* slot_cap; TYPE_1__* pcie; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 scalar_t__ FUNC_1 (struct controller*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct controller*) ;
 scalar_t__ FUNC_3 (struct controller*) ;
 scalar_t__ FUNC_4 (struct controller*) ;
 scalar_t__ FUNC_5 (struct controller*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct controller*) ;
 char* FUNC_7 (struct controller*) ;
 scalar_t__ FUNC_8 (struct controller*) ;
 int FUNC_9 (struct controller*,char*,...) ;
 int FUNC_10 (struct pci_dev*) ;
 char* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int) ;
 int VAR_3 ;
 int FUNC_13 (struct controller*,int ,char**) ;

__attribute__((used)) static inline void FUNC_14(struct controller *VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 struct pci_dev *VAR_7 = VAR_4->pcie->port;

 if (!VAR_3)
  return;

 FUNC_9(VAR_4, "Hotplug Controller:\n");
 FUNC_9(VAR_4, "  Seg/Bus/Dev/Func/IRQ : %s IRQ %d\n",
    FUNC_10(VAR_7), VAR_7->irq);
 FUNC_9(VAR_4, "  Vendor ID            : 0x%04x\n", VAR_7->vendor);
 FUNC_9(VAR_4, "  Device ID            : 0x%04x\n", VAR_7->device);
 FUNC_9(VAR_4, "  Subsystem ID         : 0x%04x\n",
    VAR_7->subsystem_device);
 FUNC_9(VAR_4, "  Subsystem Vendor ID  : 0x%04x\n",
    VAR_7->subsystem_vendor);
 FUNC_9(VAR_4, "  PCIe Cap offset      : 0x%02x\n",
    FUNC_11(VAR_7));
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!FUNC_12(VAR_7, VAR_5))
   continue;
  FUNC_9(VAR_4, "  PCI resource [%d]     : %pR\n",
     VAR_5, &VAR_7->resource[VAR_5]);
 }
 FUNC_9(VAR_4, "Slot Capabilities      : 0x%08x\n", VAR_4->slot_cap);
 FUNC_9(VAR_4, "  Physical Slot Number : %d\n", FUNC_7(VAR_4));
 FUNC_9(VAR_4, "  Attention Button     : %3s\n",
    FUNC_0(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  Power Controller     : %3s\n",
    FUNC_6(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  MRL Sensor           : %3s\n",
    FUNC_4(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  Attention Indicator  : %3s\n",
    FUNC_1(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  Power Indicator      : %3s\n",
    FUNC_8(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  Hot-Plug Surprise    : %3s\n",
    FUNC_3(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  EMI Present          : %3s\n",
    FUNC_2(VAR_4) ? "yes" : "no");
 FUNC_9(VAR_4, "  Command Completed    : %3s\n",
    FUNC_5(VAR_4) ? "no" : "yes");
 FUNC_13(VAR_4, VAR_2, &VAR_6);
 FUNC_9(VAR_4, "Slot Status            : 0x%04x\n", VAR_6);
 FUNC_13(VAR_4, VAR_1, &VAR_6);
 FUNC_9(VAR_4, "Slot Control           : 0x%04x\n", VAR_6);
}
