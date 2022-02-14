
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct resource {int flags; int name; } ;
struct pci_dev_rh1 {int mmio_always_on; } ;
struct pci_dev {scalar_t__ rh_reserved1; int dev; } ;
struct pci_bus_region {int start; int end; } ;
typedef int resource_size_t ;
typedef enum pci_bar_type { ____Placeholder_pci_bar_type } pci_bar_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int ,int *,char*,unsigned int,struct resource*) ;
 int VAR_13 ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (struct pci_dev*,unsigned int,int) ;
 int FUNC_8 (struct pci_dev*,int ,int) ;
 int FUNC_9 (struct pci_dev*,struct resource*,struct pci_bus_region*) ;

int FUNC_10(struct pci_dev *VAR_14, enum pci_bar_type VAR_15,
   struct resource *VAR_16, unsigned int VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20;
 u16 VAR_21;
 struct pci_bus_region VAR_22;

 VAR_20 = VAR_15 ? ~VAR_11 : ~0;

 if (!((struct pci_dev_rh1 *)VAR_14->rh_reserved1)->mmio_always_on) {
  FUNC_5(VAR_14, VAR_8, &VAR_21);
  FUNC_8(VAR_14, VAR_8,
   VAR_21 & ~(VAR_10 | VAR_9));
 }

 VAR_16->name = FUNC_3(VAR_14);

 FUNC_4(VAR_14, VAR_17, &VAR_18);
 FUNC_7(VAR_14, VAR_17, VAR_20);
 FUNC_4(VAR_14, VAR_17, &VAR_19);
 FUNC_7(VAR_14, VAR_17, VAR_18);







 if (!VAR_19 || VAR_19 == 0xffffffff)
  goto fail;





 if (VAR_18 == 0xffffffff)
  VAR_18 = 0;

 if (VAR_15 == VAR_13) {
  VAR_16->flags = FUNC_0(VAR_14, VAR_18);
  VAR_16->flags |= VAR_3;
  if (VAR_16->flags & VAR_0) {
   VAR_18 &= VAR_6;
   VAR_20 = VAR_6 & VAR_4;
  } else {
   VAR_18 &= VAR_7;
   VAR_20 = (u32)VAR_7;
  }
 } else {
  VAR_16->flags |= (VAR_18 & VAR_2);
  VAR_18 &= VAR_12;
  VAR_20 = (u32)VAR_12;
 }

 if (VAR_16->flags & VAR_1) {
  u64 VAR_23 = VAR_18;
  u64 VAR_24 = VAR_19;
  u64 VAR_25 = VAR_20 | (u64)~0 << 32;

  FUNC_4(VAR_14, VAR_17 + 4, &VAR_18);
  FUNC_7(VAR_14, VAR_17 + 4, ~0);
  FUNC_4(VAR_14, VAR_17 + 4, &VAR_19);
  FUNC_7(VAR_14, VAR_17 + 4, VAR_18);

  VAR_23 |= ((u64)VAR_18 << 32);
  VAR_24 |= ((u64)VAR_19 << 32);

  VAR_24 = FUNC_6(VAR_23, VAR_24, VAR_25);

  if (!VAR_24)
   goto fail;

  if ((sizeof(resource_size_t) < 8) && (VAR_24 > 0x100000000ULL)) {
   FUNC_1(&VAR_14->dev, "reg %x: can't handle 64-bit BAR\n",
    VAR_17);
   goto fail;
  }

  if ((sizeof(resource_size_t) < 8) && VAR_18) {

   FUNC_7(VAR_14, VAR_17, 0);
   FUNC_7(VAR_14, VAR_17 + 4, 0);
   VAR_22.start = 0;
   VAR_22.end = VAR_24;
   FUNC_9(VAR_14, VAR_16, &VAR_22);
  } else {
   VAR_22.start = VAR_23;
   VAR_22.end = VAR_23 + VAR_24;
   FUNC_9(VAR_14, VAR_16, &VAR_22);
   FUNC_2(VAR_5, &VAR_14->dev, "reg %x: %pR\n",
       VAR_17, VAR_16);
  }
 } else {
  VAR_19 = FUNC_6(VAR_18, VAR_19, VAR_20);

  if (!VAR_19)
   goto fail;

  VAR_22.start = VAR_18;
  VAR_22.end = VAR_18 + VAR_19;
  FUNC_9(VAR_14, VAR_16, &VAR_22);

  FUNC_2(VAR_5, &VAR_14->dev, "reg %x: %pR\n", VAR_17, VAR_16);
 }

 out:
 if (!((struct pci_dev_rh1 *)VAR_14->rh_reserved1)->mmio_always_on)
  FUNC_8(VAR_14, VAR_8, VAR_21);

 return (VAR_16->flags & VAR_1) ? 1 : 0;
 fail:
 VAR_16->flags = 0;
 goto out;
}
