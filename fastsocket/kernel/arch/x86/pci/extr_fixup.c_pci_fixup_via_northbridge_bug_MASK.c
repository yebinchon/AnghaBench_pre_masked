
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ device; scalar_t__ revision; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_5)
{
 u8 VAR_6;
 int VAR_7 = 0x55;
 int VAR_8 = 0x1f;

 if (VAR_5->device == VAR_1) {



  FUNC_2(VAR_5, VAR_2, 0);

  VAR_7 = 0x95;

 } else if (VAR_5->device == VAR_0 &&
   (VAR_5->revision == VAR_3 ||
   VAR_5->revision == VAR_4)) {
   VAR_8 = 0x3f;

 }

 FUNC_1(VAR_5, VAR_7, &VAR_6);
 if (VAR_6 & ~VAR_8) {
  FUNC_0(&VAR_5->dev, "Disabling VIA memory write queue (PCI ID %04x, rev %02x): [%02x] %02x & %02x -> %02x\n", VAR_5->device, VAR_5->revision, VAR_7, VAR_6, VAR_8, VAR_6 & VAR_8);

  VAR_6 &= VAR_8;
  FUNC_2(VAR_5, VAR_7, VAR_6);
 }
}
