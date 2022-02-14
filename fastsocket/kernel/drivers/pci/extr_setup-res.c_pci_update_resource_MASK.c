
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct resource {int flags; } ;
struct pci_dev_rh1 {int mmio_always_on; } ;
struct pci_dev {int dev; scalar_t__ rh_reserved1; struct resource* resource; } ;
struct pci_bus_region {int start; scalar_t__ end; } ;
typedef enum pci_bar_type { ____Placeholder_pci_bar_type } pci_bar_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*,int,struct resource*,unsigned long long,unsigned long long) ;
 int VAR_11 ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct pci_dev*,struct pci_bus_region*,struct resource*) ;

void FUNC_8(struct pci_dev *VAR_12, int VAR_13)
{
 struct pci_bus_region VAR_14;
 bool VAR_15;
 u16 VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 int VAR_20;
 enum pci_bar_type VAR_21;
 struct resource *VAR_22 = VAR_12->resource + VAR_13;





 if (!VAR_22->flags)
  return;






 if (VAR_22->flags & VAR_2)
  return;

 FUNC_7(VAR_12, &VAR_14, VAR_22);

 VAR_17 = VAR_14.start | (VAR_22->flags & VAR_9);
 if (VAR_22->flags & VAR_0)
  VAR_19 = (u32)VAR_5;
 else
  VAR_19 = (u32)VAR_6;

 VAR_20 = FUNC_4(VAR_12, VAR_13, &VAR_21);
 if (!VAR_20)
  return;
 if (VAR_21 != VAR_11) {
  if (!(VAR_22->flags & VAR_3))
   return;
  VAR_17 |= VAR_10;
 }






 VAR_15 = (VAR_22->flags & VAR_1) &&
    !((struct pci_dev_rh1 *)VAR_12->rh_reserved1)->mmio_always_on;
 if (VAR_15) {
  FUNC_3(VAR_12, VAR_7, &VAR_16);
  FUNC_6(VAR_12, VAR_7,
          VAR_16 & ~VAR_8);
 }

 FUNC_5(VAR_12, VAR_20, VAR_17);
 FUNC_2(VAR_12, VAR_20, &VAR_18);

 if ((VAR_17 ^ VAR_18) & VAR_19) {
  FUNC_0(&VAR_12->dev, "BAR %d: error updating (%#08x != %#08x)\n",
   VAR_13, VAR_17, VAR_18);
 }

 if (VAR_22->flags & VAR_1) {
  VAR_17 = VAR_14.start >> 16 >> 16;
  FUNC_5(VAR_12, VAR_20 + 4, VAR_17);
  FUNC_2(VAR_12, VAR_20 + 4, &VAR_18);
  if (VAR_18 != VAR_17) {
   FUNC_0(&VAR_12->dev, "BAR %d: error updating "
          "(high %#08x != %#08x)\n", VAR_13, VAR_17, VAR_18);
  }
 }

 if (VAR_15)
  FUNC_6(VAR_12, VAR_7, VAR_16);

 VAR_22->flags &= ~VAR_4;
 FUNC_1(&VAR_12->dev, "BAR %d: set to %pR (PCI address [%#llx-%#llx]\n",
   VAR_13, VAR_22, (unsigned long long)VAR_14.start,
   (unsigned long long)VAR_14.end);
}
