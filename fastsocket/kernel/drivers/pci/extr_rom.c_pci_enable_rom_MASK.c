
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; } ;
struct pci_dev {int rom_base_reg; struct resource* resource; } ;
struct pci_bus_region {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*,struct pci_bus_region*,struct resource*) ;

int FUNC_3(struct pci_dev *VAR_3)
{
 struct resource *VAR_4 = VAR_3->resource + VAR_2;
 struct pci_bus_region VAR_5;
 u32 VAR_6;

 if (!VAR_4->flags)
  return -1;

 FUNC_2(VAR_3, &VAR_5, VAR_4);
 FUNC_0(VAR_3, VAR_3->rom_base_reg, &VAR_6);
 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_5.start | VAR_0;
 FUNC_1(VAR_3, VAR_3->rom_base_reg, VAR_6);
 return 0;
}
