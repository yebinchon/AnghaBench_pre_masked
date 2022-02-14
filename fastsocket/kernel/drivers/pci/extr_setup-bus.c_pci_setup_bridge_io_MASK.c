
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; } ;
struct pci_dev {int dev; } ;
struct pci_bus_region {int start; int end; } ;
struct pci_bus {struct resource** resource; int subordinate; int secondary; struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,struct pci_bus_region*,struct resource*) ;

__attribute__((used)) static void FUNC_5(struct pci_bus *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->self;
 struct resource *VAR_5;
 struct pci_bus_region VAR_6;
 u32 VAR_7, VAR_8;

 if (FUNC_1(VAR_4))
  return;

 FUNC_0(&VAR_4->dev, "PCI bridge to [bus %02x-%02x]\n",
   VAR_3->secondary, VAR_3->subordinate);


 VAR_5 = VAR_3->resource[0];
 FUNC_4(VAR_4, &VAR_6, VAR_5);
 if (VAR_5->flags & VAR_0) {
  FUNC_2(VAR_4, VAR_1, &VAR_7);
  VAR_7 &= 0xffff0000;
  VAR_7 |= (VAR_6.start >> 8) & 0x00f0;
  VAR_7 |= VAR_6.end & 0xf000;

  VAR_8 = (VAR_6.end & 0xffff0000) | (VAR_6.start >> 16);
  FUNC_0(&VAR_4->dev, "  bridge window %pR\n", VAR_5);
 } else {

  VAR_8 = 0;
  VAR_7 = 0x00f0;
  FUNC_0(&VAR_4->dev, "  bridge window [io  disabled]\n");
 }

 FUNC_3(VAR_4, VAR_2, 0x0000ffff);

 FUNC_3(VAR_4, VAR_1, VAR_7);

 FUNC_3(VAR_4, VAR_2, VAR_8);
}
