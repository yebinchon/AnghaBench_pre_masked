
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u8 ;
struct pci_dev {int dev; } ;
struct et131x_adapter {int RegistryNMIDisable; int has_eeprom; int* eepromData; int* PermanentAddress; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct et131x_adapter*,int,int*) ;
 int FUNC_1 (struct et131x_adapter*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int) ;
 int FUNC_7 (struct pci_dev*,int ,int const) ;

int FUNC_8(struct et131x_adapter *VAR_11, struct pci_dev *VAR_12)
{
 int VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15 = 0;
 uint8_t VAR_16;
 u8 VAR_17;




 if (VAR_11->RegistryNMIDisable) {
  uint8_t VAR_18;

  VAR_18 = FUNC_3(VAR_1);
  VAR_18 &= 0xf3;

  if (VAR_11->RegistryNMIDisable == 2)
   VAR_18 |= 0xc;

  FUNC_4(VAR_1, VAR_18);
 }




 VAR_13 = FUNC_5(VAR_12, VAR_3,
          &VAR_14);







 VAR_13 = FUNC_5(VAR_12, VAR_3,
          &VAR_14);
 if (VAR_13 != VAR_9) {
  FUNC_2(&VAR_12->dev, "Could not read PCI config space for "
     "EEPROM Status\n");
  return -VAR_0;
 }




 if (VAR_14 & 0x4C) {
  VAR_13 = FUNC_5(VAR_12, VAR_10, &VAR_17);
  if (VAR_13 != VAR_9) {
   FUNC_2(&VAR_12->dev,
      "Could not read PCI config space for "
      "Revision ID\n");
   return -VAR_0;
  } else if (VAR_17 == 0x01) {
   int32_t VAR_19;
   uint8_t VAR_20[4] = { 0xFE, 0x13, 0x10, 0xFF };





   for (VAR_19 = 0; VAR_19 < 3; VAR_19++) {
    FUNC_1(VAR_11, VAR_19, VAR_20[VAR_19]);
   }
  }

  FUNC_2(&VAR_12->dev, "Fatal EEPROM Status Error - 0x%04x\n", VAR_14);







  VAR_11->has_eeprom = 0;
  return -VAR_0;
 } else
  VAR_11->has_eeprom = 1;




 FUNC_0(VAR_11, 0x70, &VAR_11->eepromData[0]);
 FUNC_0(VAR_11, 0x71, &VAR_11->eepromData[1]);

 if (VAR_11->eepromData[0] != 0xcd)

  VAR_11->eepromData[1] = 0x00;




 VAR_13 = FUNC_5(VAR_12, VAR_6, &VAR_15);
 if (VAR_13 != VAR_9) {
  FUNC_2(&VAR_12->dev,
      "Could not read PCI config space for Max Payload Size\n");
  return -VAR_0;
 }


 VAR_15 &= 0x07;

 if (VAR_15 < 2) {
  const uint16_t VAR_21[2] = { 0x76, 0xD0 };
  const uint16_t VAR_22[2] = { 0x1E0, 0x2ED };

  VAR_13 = FUNC_7(VAR_12, VAR_2,
            VAR_21[VAR_15]);
  if (VAR_13 != VAR_9) {
   FUNC_2(&VAR_12->dev,
     "Could not write PCI config space for ACK/NAK\n");
   return -VAR_0;
  }

  VAR_13 = FUNC_7(VAR_12, VAR_7,
            VAR_22[VAR_15]);
  if (VAR_13 != VAR_9) {
   FUNC_2(&VAR_12->dev,
     "Could not write PCI config space for Replay Timer\n");
   return -VAR_0;
  }
 }




 VAR_13 = FUNC_6(VAR_12, VAR_4, 0x11);
 if (VAR_13 != VAR_9) {
  FUNC_2(&VAR_12->dev,
    "Could not write PCI config space for Latency Timers\n");
  return -VAR_0;
 }


 VAR_13 = FUNC_5(VAR_12, 0x51, &VAR_16);
 if (VAR_13 != VAR_9) {
  FUNC_2(&VAR_12->dev,
   "Could not read PCI config space for Max read size\n");
  return -VAR_0;
 }

 VAR_16 &= 0x8f;
 VAR_16 |= 0x40;

 VAR_13 = FUNC_6(VAR_12, 0x51, VAR_16);
 if (VAR_13 != VAR_9) {
  FUNC_2(&VAR_12->dev,
        "Could not write PCI config space for Max read size\n");
  return -VAR_0;
 }




 if (VAR_11->has_eeprom) {
  int VAR_23;

  for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
   VAR_13 = FUNC_5(
     VAR_12, VAR_5 + VAR_23,
     VAR_11->PermanentAddress + VAR_23);
   if (VAR_13 != VAR_9) {
    FUNC_2(&VAR_12->dev, ";Could not read PCI config space for MAC address\n");
    return -VAR_0;
   }
  }
 }
 return 0;
}
