
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct resource {int flags; } ;
struct pci_dev {scalar_t__ vendor; int device; struct resource* resource; } ;
struct pci_bus {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pci_bus *VAR_11)
{
 u16 VAR_12;
 u32 VAR_13;
 struct pci_dev *VAR_14 = VAR_11->self;
 struct resource *VAR_15;

 VAR_15 = &VAR_14->resource[VAR_4];
 VAR_15[1].flags |= VAR_1;

 FUNC_1(VAR_14, VAR_5, &VAR_12);
 if (!VAR_12) {
  FUNC_3(VAR_14, VAR_5, 0xf0f0);
  FUNC_1(VAR_14, VAR_5, &VAR_12);
   FUNC_3(VAR_14, VAR_5, 0x0);
  }
  if (VAR_12)
  VAR_15[0].flags |= VAR_0;



 if (VAR_14->vendor == VAR_10 && VAR_14->device == 0x0001)
  return;
 FUNC_0(VAR_14, VAR_7, &VAR_13);
 if (!VAR_13) {
  FUNC_2(VAR_14, VAR_7,
            0xfff0fff0);
  FUNC_0(VAR_14, VAR_7, &VAR_13);
  FUNC_2(VAR_14, VAR_7, 0x0);
 }
 if (VAR_13) {
  VAR_15[2].flags |= VAR_1 | VAR_3;
  if ((VAR_13 & VAR_9) == VAR_8)
   VAR_15[2].flags |= VAR_2;
 }


 if (VAR_15[2].flags & VAR_2) {
  u32 VAR_16, VAR_17;
  FUNC_0(VAR_14, VAR_6,
      &VAR_16);
  FUNC_2(VAR_14, VAR_6,
            0xffffffff);
  FUNC_0(VAR_14, VAR_6, &VAR_17);
  if (!VAR_17)
   VAR_15[2].flags &= ~VAR_2;
  FUNC_2(VAR_14, VAR_6,
           VAR_16);
 }
}
