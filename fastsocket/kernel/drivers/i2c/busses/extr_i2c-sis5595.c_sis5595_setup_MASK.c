
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int ) ;
 int* VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_8 ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int,int *) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int,int ) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_11)
{
 u16 VAR_12;
 u8 VAR_13;
 int *VAR_14;
 int VAR_15 = -VAR_1;


 for (VAR_14 = VAR_7; *VAR_14 != 0; VAR_14++) {
  struct pci_dev *VAR_16;
  VAR_16 = FUNC_5(VAR_3, *VAR_14, ((void*)0));
  if (VAR_16) {
   FUNC_2(&VAR_11->dev, "Looked for SIS5595 but found unsupported device %.4x\n", *VAR_14);
   FUNC_4(VAR_16);
   return -VAR_1;
  }
 }


 FUNC_7(VAR_11, VAR_0, &VAR_9);
 if (VAR_9 == 0 && VAR_8 == 0) {
  FUNC_2(&VAR_11->dev, "ACPI base address uninitialized - upgrade BIOS or use force_addr=0xaddr\n");
  return -VAR_1;
 }

 if (VAR_8)
  VAR_9 = VAR_8 & ~(VAR_5 - 1);
 FUNC_1(&VAR_11->dev, "ACPI Base address: %04x\n", VAR_9);



 VAR_15 = FUNC_0(VAR_9 + VAR_6, 2,
       VAR_10.name);
 if (VAR_15)
  return VAR_15;

 if (!FUNC_11(VAR_9 + VAR_6, 2,
       VAR_10.name)) {
  FUNC_2(&VAR_11->dev, "SMBus registers 0x%04x-0x%04x already in use!\n",
   VAR_9 + VAR_6, VAR_9 + VAR_6 + 1);
  return -VAR_1;
 }

 if (VAR_8) {
  FUNC_3(&VAR_11->dev, "forcing ISA address 0x%04X\n", VAR_9);
  if (FUNC_9(VAR_11, VAR_0, VAR_9)
      != VAR_2)
   goto error;
  if (FUNC_7(VAR_11, VAR_0, &VAR_12)
      != VAR_2)
   goto error;
  if ((VAR_12 & ~(VAR_5 - 1)) != VAR_9) {

   FUNC_2(&VAR_11->dev, "force address failed - not supported?\n");
   goto error;
  }
 }

 if (FUNC_6(VAR_11, VAR_4, &VAR_13)
     != VAR_2)
  goto error;
 if ((VAR_13 & 0x80) == 0) {
  FUNC_3(&VAR_11->dev, "enabling ACPI\n");
  if (FUNC_8(VAR_11, VAR_4, VAR_13 | 0x80)
      != VAR_2)
   goto error;
  if (FUNC_6(VAR_11, VAR_4, &VAR_13)
      != VAR_2)
   goto error;
  if ((VAR_13 & 0x80) == 0) {

   FUNC_2(&VAR_11->dev, "ACPI enable failed - not supported?\n");
   goto error;
  }
 }


 return 0;

error:
 FUNC_10(VAR_9 + VAR_6, 2);
 return VAR_15;
}
