
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int pio_mode; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


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
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_13, struct ata_device *VAR_14)
{
 static const u8 VAR_15[5] = {
  0x98, 0x55, 0x32, 0x21, 0x20,
 };

 static const u8 VAR_16[5] = {
  0x2, 0x1, 0x0, 0x0, 0x0,
 };

 static const u8 VAR_17[5] = {
  0x99, 0x92, 0x90, 0x22, 0x20,
 };

 struct pci_dev *VAR_18 = FUNC_4(VAR_13->host->dev);
 struct ata_device *VAR_19 = FUNC_0(VAR_14);
 int VAR_20 = VAR_14->pio_mode - VAR_12;
 int VAR_21 = VAR_20;
 int VAR_22 = VAR_14->devno ? VAR_9 : VAR_8;
 int VAR_23 = VAR_14->devno ? VAR_6 : VAR_5;
 u32 VAR_24, VAR_25, VAR_26;

 if (VAR_19)
  VAR_21 = FUNC_3(VAR_20, VAR_19->pio_mode - VAR_12);

 FUNC_1(VAR_18, VAR_1, &VAR_24);
 FUNC_1(VAR_18, VAR_0, &VAR_25);
 FUNC_1(VAR_18, VAR_2, &VAR_26);

 VAR_24 &= ~(VAR_10 << VAR_22);
 VAR_24 |= VAR_15[VAR_20] << VAR_22;

 VAR_25 &= ~(VAR_7 << VAR_23);
 VAR_25 |= VAR_16[VAR_20] << VAR_23;

 VAR_25 &= ~(VAR_3 << VAR_4);
 VAR_25 |= VAR_17[VAR_21] << VAR_4;

 VAR_26 &= ~(VAR_10 << VAR_22);
 VAR_26 |= VAR_11 << VAR_22;

 FUNC_2(VAR_18, VAR_1, VAR_24);
 FUNC_2(VAR_18, VAR_0, VAR_25);
 FUNC_2(VAR_18, VAR_2, VAR_26);
}
