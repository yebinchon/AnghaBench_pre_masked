
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_pbm_info {int numa_node; int stc; int iommu; } ;
struct dev_archdata {struct of_device* op; int numa_node; int * stc; int iommu; struct device_node* prom_node; struct pci_pbm_info* host_controller; } ;
struct TYPE_4__ {int * bus; int parent; struct dev_archdata archdata; } ;
struct pci_dev {int devfn; int class; int revision; int current_state; int irq; int rom_base_reg; int hdr_type; int error_state; struct pci_bus* bus; TYPE_2__ dev; int cfg_size; void* subsystem_device; void* subsystem_vendor; void* device; void* vendor; scalar_t__ multifunction; struct device_node* sysdata; } ;
struct pci_bus {int number; int bridge; } ;
struct TYPE_3__ {struct dev_archdata archdata; } ;
struct of_device {int* irqs; TYPE_1__ dev; } ;
struct device_node {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 struct pci_dev* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 struct of_device* FUNC_4 (struct device_node*) ;
 char* FUNC_5 (struct device_node*,char*,int *) ;
 void* FUNC_6 (struct device_node*,char*,int) ;
 int FUNC_7 (struct of_device*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct pci_dev*) ;
 int VAR_10 ;
 int FUNC_9 (struct pci_dev*,struct pci_bus*) ;
 int FUNC_10 (struct pci_bus*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct of_device*,struct device_node*,struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ,int*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char const*,char*) ;

__attribute__((used)) static struct pci_dev *FUNC_17(struct pci_pbm_info *VAR_11,
      struct device_node *VAR_12,
      struct pci_bus *VAR_13, int VAR_14)
{
 struct dev_archdata *VAR_15;
 struct of_device *VAR_16;
 struct pci_dev *VAR_17;
 const char *VAR_18;
 u32 VAR_19;

 VAR_17 = FUNC_2();
 if (!VAR_17)
  return ((void*)0);

 VAR_15 = &VAR_17->dev.archdata;
 VAR_15->iommu = VAR_11->iommu;
 VAR_15->stc = &VAR_11->stc;
 VAR_15->host_controller = VAR_11;
 VAR_15->prom_node = VAR_12;
 VAR_15->op = VAR_16 = FUNC_4(VAR_12);
 VAR_15->numa_node = VAR_11->numa_node;

 VAR_15 = &VAR_16->dev.archdata;
 VAR_15->iommu = VAR_11->iommu;
 VAR_15->stc = &VAR_11->stc;
 VAR_15->numa_node = VAR_11->numa_node;

 if (!FUNC_16(VAR_12->name, "ebus"))
  FUNC_7(VAR_16);

 VAR_18 = FUNC_5(VAR_12, "device_type", ((void*)0));
 if (VAR_18 == ((void*)0))
  VAR_18 = "";

 if (VAR_8)
  FUNC_15("    create device, devfn: %x, type: %s\n",
         VAR_14, VAR_18);

 VAR_17->bus = VAR_13;
 VAR_17->sysdata = VAR_12;
 VAR_17->dev.parent = VAR_13->bridge;
 VAR_17->dev.bus = &VAR_9;
 VAR_17->devfn = VAR_14;
 VAR_17->multifunction = 0;

 VAR_17->vendor = FUNC_6(VAR_12, "vendor-id", 0xffff);
 VAR_17->device = FUNC_6(VAR_12, "device-id", 0xffff);
 VAR_17->subsystem_vendor =
  FUNC_6(VAR_12, "subsystem-vendor-id", 0);
 VAR_17->subsystem_device =
  FUNC_6(VAR_12, "subsystem-id", 0);

 VAR_17->cfg_size = FUNC_8(VAR_17);







 FUNC_13(VAR_17, VAR_0, &VAR_19);
 VAR_17->class = VAR_19 >> 8;
 VAR_17->revision = VAR_19 & 0xff;

 FUNC_3(&VAR_17->dev, "%04x:%02x:%02x.%d", FUNC_10(VAR_13),
  VAR_17->bus->number, FUNC_1(VAR_14), FUNC_0(VAR_14));

 if (VAR_8)
  FUNC_15("    class: 0x%x device name: %s\n",
         VAR_17->class, FUNC_11(VAR_17));





 if ((VAR_17->class >> 8) == VAR_1)
  FUNC_14(VAR_17);

 VAR_17->current_state = 4;
 VAR_17->error_state = VAR_10;

 if (!FUNC_16(VAR_12->name, "pci")) {

  VAR_17->hdr_type = VAR_2;
  VAR_17->rom_base_reg = VAR_7;
 } else if (!FUNC_16(VAR_18, "cardbus")) {
  VAR_17->hdr_type = VAR_3;
 } else {
  VAR_17->hdr_type = VAR_4;
  VAR_17->rom_base_reg = VAR_6;

  VAR_17->irq = VAR_15->op->irqs[0];
  if (VAR_17->irq == 0xffffffff)
   VAR_17->irq = VAR_5;
 }

 FUNC_12(VAR_15->op, VAR_12, VAR_17);

 if (VAR_8)
  FUNC_15("    adding to system ...\n");

 FUNC_9(VAR_17, VAR_13);

 return VAR_17;
}
