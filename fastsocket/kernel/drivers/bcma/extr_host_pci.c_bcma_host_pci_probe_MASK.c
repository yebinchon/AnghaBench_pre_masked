
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int subsystem_device; int subsystem_vendor; TYPE_1__* driver; int dev; } ;
struct TYPE_4__ {int type; int vendor; } ;
struct bcma_bus {int mmio; struct pci_dev* host_pci; TYPE_2__ boardinfo; int * ops; int hosttype; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcma_bus*) ;
 int FUNC_1 (struct bcma_bus*,char*) ;
 int VAR_3 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (struct bcma_bus*) ;
 struct bcma_bus* FUNC_4 (int,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,unsigned long) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int,int*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,char const*) ;
 int FUNC_13 (struct pci_dev*,struct bcma_bus*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_4,
          const struct pci_device_id *VAR_5)
{
 struct bcma_bus *VAR_6;
 int VAR_7 = -VAR_1;
 const char *VAR_8;
 u32 VAR_9;


 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;


 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7)
  goto err_kfree_bus;

 VAR_8 = FUNC_2(&VAR_4->dev);
 if (VAR_4->driver && VAR_4->driver->name)
  VAR_8 = VAR_4->driver->name;
 VAR_7 = FUNC_12(VAR_4, VAR_8);
 if (VAR_7)
  goto err_pci_disable;
 FUNC_14(VAR_4);



 FUNC_10(VAR_4, 0x40, &VAR_9);
 if ((VAR_9 & 0x0000ff00) != 0)
  FUNC_15(VAR_4, 0x40, VAR_9 & 0xffff00ff);


 if (!FUNC_9(VAR_4))
  FUNC_1(VAR_6, "PCI card detected, report problems.\n");


 VAR_7 = -VAR_1;
 VAR_6->mmio = FUNC_7(VAR_4, 0, ~0UL);
 if (!VAR_6->mmio)
  goto err_pci_release_regions;


 VAR_6->host_pci = VAR_4;
 VAR_6->hosttype = VAR_0;
 VAR_6->ops = &VAR_3;

 VAR_6->boardinfo.vendor = VAR_6->host_pci->subsystem_vendor;
 VAR_6->boardinfo.type = VAR_6->host_pci->subsystem_device;


 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  goto err_pci_unmap_mmio;

 FUNC_13(VAR_4, VAR_6);

out:
 return VAR_7;

err_pci_unmap_mmio:
 FUNC_8(VAR_4, VAR_6->mmio);
err_pci_release_regions:
 FUNC_11(VAR_4);
err_pci_disable:
 FUNC_5(VAR_4);
err_kfree_bus:
 FUNC_3(VAR_6);
 return VAR_7;
}
