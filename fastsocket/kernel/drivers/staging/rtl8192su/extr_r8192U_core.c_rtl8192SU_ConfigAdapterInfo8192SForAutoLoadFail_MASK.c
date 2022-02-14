
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int bIgnoreDiffRateTxPowerOffset; int EEPROMThermalMeter; int** RfCckChnlAreaTxPwr; int** RfOfdmChnlAreaTxPwr1T; int** RfOfdmChnlAreaTxPwr2T; int** RfTxPwrLevelCck; int** RfTxPwrLevelOfdm1T; int** RfTxPwrLevelOfdm2T; int TSSI_13dBm; int* ThermalMeter; int LedStrategy; int EEPROMCrystalCap; int CrystalCap; int EEPROMTxPowerDiff; int TxPowerDiff; int LegacyHTTxPowerDiff; int EEPROMTxPwrTkMode; void* EEPROMTSSI_B; void* EEPROMTSSI_A; int EEPROMTxPwrBase; int rf_type; int EEPROMBoardType; int * EEPROMUsbPhyParam; int EEPROMUsbOption; scalar_t__ eeprom_ChannelPlan; scalar_t__ eeprom_SubCustomerID; scalar_t__ eeprom_CustomerID; scalar_t__ eeprom_pid; scalar_t__ eeprom_vid; scalar_t__ card_8192_version; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 int FUNC_6 (struct net_device*,int ,int ) ;

void
FUNC_7(struct net_device* VAR_17)
{
 struct r8192_priv *VAR_18 = FUNC_1(VAR_17);


 u8 VAR_19, VAR_20;
 int VAR_21;

 FUNC_0(VAR_0, "====> ConfigAdapterInfo8192SForAutoLoadFail\n");

 FUNC_4(VAR_17, VAR_16+1, 0xE8);

 FUNC_3(10);
 FUNC_4(VAR_17, VAR_13, 0x02);




 VAR_18->eeprom_vid = 0;
 VAR_18->eeprom_pid = 0;
 VAR_18->card_8192_version = 0;
 VAR_18->eeprom_ChannelPlan = 0;
 VAR_18->eeprom_CustomerID = 0;
 VAR_18->eeprom_SubCustomerID = 0;
 VAR_18->bIgnoreDiffRateTxPowerOffset = 0;

 FUNC_0(VAR_0, "EEPROM VID = 0x%4x\n", VAR_18->eeprom_vid);
 FUNC_0(VAR_0, "EEPROM PID = 0x%4x\n", VAR_18->eeprom_pid);
 FUNC_0(VAR_0, "EEPROM Customer ID: 0x%2x\n", VAR_18->eeprom_CustomerID);
 FUNC_0(VAR_0, "EEPROM SubCustomer ID: 0x%2x\n", VAR_18->eeprom_SubCustomerID);
 FUNC_0(VAR_0, "EEPROM ChannelPlan = 0x%4x\n", VAR_18->eeprom_ChannelPlan);
 FUNC_0(VAR_0, "IgnoreDiffRateTxPowerOffset = %d\n", VAR_18->bIgnoreDiffRateTxPowerOffset);



 VAR_18->EEPROMUsbOption = VAR_9;
 FUNC_0(VAR_0, "USB Option = %#x\n", VAR_18->EEPROMUsbOption);

 for(VAR_21=0; VAR_21<5; VAR_21++)
  VAR_18->EEPROMUsbPhyParam[VAR_21] = VAR_10;



 {

  static u8 VAR_22[6] = {0x00, 0xE0, 0x4C, 0x81, 0x92, 0x00};
  u8 VAR_23;



  for(VAR_23 = 0; VAR_23 < 6; VAR_23++)
   VAR_17->dev_addr[VAR_23] = VAR_22[VAR_23];
 }

 FUNC_5(VAR_17, VAR_11, ((u32*)VAR_17->dev_addr)[0]);
 FUNC_6(VAR_17, VAR_12, ((u16*)(VAR_17->dev_addr + 4))[0]);

 FUNC_0(VAR_0, "ReadAdapterInfo8192SEFuse(), Permanent Address = %02x-%02x-%02x-%02x-%02x-%02x\n",
   VAR_17->dev_addr[0], VAR_17->dev_addr[1],
   VAR_17->dev_addr[2], VAR_17->dev_addr[3],
   VAR_17->dev_addr[4], VAR_17->dev_addr[5]);

 VAR_18->EEPROMBoardType = VAR_1;
 VAR_18->rf_type = VAR_14;
 VAR_18->EEPROMTxPowerDiff = VAR_3;
 VAR_18->EEPROMThermalMeter = VAR_5;
 VAR_18->EEPROMCrystalCap = VAR_2;
 VAR_18->EEPROMTxPwrBase = VAR_7;
 VAR_18->EEPROMTSSI_A = VAR_4;
 VAR_18->EEPROMTSSI_B = VAR_4;
 VAR_18->EEPROMTxPwrTkMode = VAR_8;



 for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
 {
  for (VAR_21 = 0; VAR_21 < 3; VAR_21++)
  {

   VAR_18->RfCckChnlAreaTxPwr[VAR_19][VAR_21] =
   VAR_18->RfOfdmChnlAreaTxPwr1T[VAR_19][VAR_21] =
   VAR_18->RfOfdmChnlAreaTxPwr2T[VAR_19][VAR_21] =
   (u8)(VAR_6 & 0xff);
  }
 }

 for (VAR_21 = 0; VAR_21 < 3; VAR_21++)
 {






 }


 for(VAR_21=0; VAR_21<14; VAR_21++)
  {
  if (VAR_21 < 3)
   VAR_20 = 0;
  else if (VAR_21 < 9)
   VAR_20 = 1;
  else
   VAR_20 = 2;


  VAR_18->RfTxPwrLevelCck[VAR_19][VAR_21] =
  VAR_18->RfCckChnlAreaTxPwr[VAR_19][VAR_20];
  VAR_18->RfTxPwrLevelOfdm1T[VAR_19][VAR_21] =
  VAR_18->RfOfdmChnlAreaTxPwr1T[VAR_19][VAR_20];
  VAR_18->RfTxPwrLevelOfdm2T[VAR_19][VAR_21] =
  VAR_18->RfOfdmChnlAreaTxPwr2T[VAR_19][VAR_20];
  }

  for(VAR_21=0; VAR_21<14; VAR_21++)
  {




  }




 VAR_18->TSSI_13dBm = VAR_18->EEPROMThermalMeter *100;
 VAR_18->LegacyHTTxPowerDiff = VAR_18->EEPROMTxPowerDiff;
 VAR_18->TxPowerDiff = VAR_18->EEPROMTxPowerDiff;


 VAR_18->CrystalCap = VAR_18->EEPROMCrystalCap;
 VAR_18->ThermalMeter[0] = VAR_18->EEPROMThermalMeter;
 VAR_18->LedStrategy = VAR_15;

 FUNC_2(VAR_17);

 FUNC_0(VAR_0, "<==== ConfigAdapterInfo8192SForAutoLoadFail\n");

}
