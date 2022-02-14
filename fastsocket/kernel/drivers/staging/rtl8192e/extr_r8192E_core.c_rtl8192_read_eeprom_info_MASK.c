
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct r8192_priv {int AutoloadFailFlag; int eeprom_vid; int eeprom_did; int eeprom_CustomerID; int eeprom_ChannelPlan; int card_8192_version; int bTXPowerDataReadFromEEPORM; scalar_t__ rf_type; int EEPROMLegacyHTTxPowerDiff; int EEPROMThermalMeter; int TSSI_13dBm; scalar_t__ epromtype; int EEPROMAntPwDiff; int EEPROMCrystalCap; int* EEPROMRfACCKChnl1TxPwLevel; int* EEPROMRfAOfdmChnlTxPwLevel; int* EEPROMRfCCCKChnl1TxPwLevel; int* EEPROMRfCOfdmChnlTxPwLevel; int LegacyHTTxPowerDiff; int* AntennaTxPwDiff; int CrystalCap; int* ThermalMeter; int* TxPowerLevelCCK_A; int* TxPowerLevelOFDM24G_A; int* TxPowerLevelCCK_C; int* TxPowerLevelOFDM24G_C; int RegChannelPlan; int ChannelPlan; int CustomerID; int ScanDelay; void* LedStrategy; int rf_chip; int * EEPROMTxPowerLevelOFDM24G; int * TxPowerLevelOFDM24G; int * EEPROMTxPowerLevelCCK; int * TxPowerLevelCCK; } ;
struct net_device {int * dev_addr; } ;
typedef int VERSION_8190 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;




 void* VAR_31 ;



 int FUNC_0 (int ,char*,...) ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;


 int FUNC_1 (struct net_device*,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device* VAR_38)
{
 struct r8192_priv *VAR_39 = FUNC_2(VAR_38);

 u8 VAR_40;



 u16 VAR_41,VAR_42, VAR_43;
 u16 VAR_44;




 u8 VAR_45[6] = {0x00, 0xe0, 0x4c, 0x00, 0x00, 0x01};
 FUNC_0(VAR_2, "====> rtl8192_read_eeprom_info\n");





 VAR_44 = FUNC_1(VAR_38, 0);
 if( VAR_44 != VAR_29 )
 {
  FUNC_0(VAR_1, "EEPROM ID is invalid:%x, %x\n", VAR_44, VAR_29);
  VAR_39->AutoloadFailFlag=1;
 }
 else
 {
  VAR_39->AutoloadFailFlag=0;
 }





 if(!VAR_39->AutoloadFailFlag)
 {

  VAR_39->eeprom_vid = FUNC_1(VAR_38, (VAR_22 >> 1));
  VAR_39->eeprom_did = FUNC_1(VAR_38, (VAR_8 >> 1));

  VAR_42 = FUNC_1(VAR_38, (u16)(VAR_7>>1)) >> 8 ;
  VAR_39->eeprom_CustomerID = (u8)( VAR_42 & 0xff);
  VAR_42 = FUNC_1(VAR_38, (VAR_15>>1));
  VAR_39->eeprom_ChannelPlan = VAR_42&0xff;
  VAR_43 = ((VAR_42&0xff00)>>8);
  switch(VAR_39->card_8192_version)
  {
   case 129:
   case 128:
    break;
   default:
    VAR_39->card_8192_version = 129;
    break;
  }
  FUNC_0(VAR_2, "\nIC Version = 0x%x\n", VAR_39->card_8192_version);
 }
 else
 {
  VAR_39->card_8192_version = 129;
  VAR_39->eeprom_vid = 0;
  VAR_39->eeprom_did = 0;
  VAR_39->eeprom_CustomerID = 0;
  VAR_39->eeprom_ChannelPlan = 0;
  FUNC_0(VAR_2, "\nIC Version = 0x%x\n", 0xff);
 }

 FUNC_0(VAR_2, "EEPROM VID = 0x%4x\n", VAR_39->eeprom_vid);
 FUNC_0(VAR_2, "EEPROM DID = 0x%4x\n", VAR_39->eeprom_did);
 FUNC_0(VAR_2,"EEPROM Customer ID: 0x%2x\n", VAR_39->eeprom_CustomerID);


 if(!VAR_39->AutoloadFailFlag)
 {
  for(VAR_41 = 0; VAR_41 < 6; VAR_41 += 2)
  {
   VAR_42 = FUNC_1(VAR_38, (u16) ((VAR_16+VAR_41)>>1));
   *(u16*)(&VAR_38->dev_addr[VAR_41]) = VAR_42;
  }
 } else {


  FUNC_4(VAR_38->dev_addr, VAR_45, 6);
 }

 FUNC_0(VAR_2, "Permanent Address = %02x-%02x-%02x-%02x-%02x-%02x\n",
   VAR_38->dev_addr[0], VAR_38->dev_addr[1],
   VAR_38->dev_addr[2], VAR_38->dev_addr[3],
   VAR_38->dev_addr[4], VAR_38->dev_addr[5]);


 if(VAR_39->card_8192_version > 129) {
  VAR_39->bTXPowerDataReadFromEEPORM = 1;
 } else {
  VAR_39->bTXPowerDataReadFromEEPORM = 0;
 }


 VAR_39->rf_type = VAR_30;

 if(VAR_39->card_8192_version > 129)
 {

  if(!VAR_39->AutoloadFailFlag)
  {
   VAR_40 = (FUNC_1(VAR_38, (VAR_17>>1))) & 0xff;
   VAR_39->EEPROMLegacyHTTxPowerDiff = VAR_40 & 0xf;

   if (VAR_40&0x80)
    VAR_39->rf_type = VAR_26;
   else
    VAR_39->rf_type = VAR_27;
  }
  else
  {
   VAR_39->EEPROMLegacyHTTxPowerDiff = VAR_10;
  }
  FUNC_0(VAR_2, "EEPROMLegacyHTTxPowerDiff = %d\n",
   VAR_39->EEPROMLegacyHTTxPowerDiff);


  if(!VAR_39->AutoloadFailFlag)
  {
   VAR_39->EEPROMThermalMeter = (u8)(((FUNC_1(VAR_38, (VAR_18>>1))) & 0xff00)>>8);
  }
  else
  {
   VAR_39->EEPROMThermalMeter = VAR_11;
  }
  FUNC_0(VAR_2, "ThermalMeter = %d\n", VAR_39->EEPROMThermalMeter);

  VAR_39->TSSI_13dBm = VAR_39->EEPROMThermalMeter *100;

  if(VAR_39->epromtype == VAR_23)
  {

  if(!VAR_39->AutoloadFailFlag)
  {
    VAR_42 = FUNC_1(VAR_38, (VAR_19>>1));
    VAR_39->EEPROMAntPwDiff = (VAR_42&0x0fff);
    VAR_39->EEPROMCrystalCap = (u8)((VAR_42&0xf000)>>12);
  }
  else
  {
    VAR_39->EEPROMAntPwDiff = VAR_9;
    VAR_39->EEPROMCrystalCap = VAR_14;
  }
   FUNC_0(VAR_2, "EEPROMAntPwDiff = %d\n", VAR_39->EEPROMAntPwDiff);
   FUNC_0(VAR_2, "EEPROMCrystalCap = %d\n", VAR_39->EEPROMCrystalCap);




  for(VAR_41=0; VAR_41<14; VAR_41+=2)
  {
   if(!VAR_39->AutoloadFailFlag)
   {
    VAR_42 = FUNC_1(VAR_38, (u16) ((VAR_20+VAR_41)>>1) );
   }
   else
   {
    VAR_42 = VAR_12;
   }
   *((u16*)(&VAR_39->EEPROMTxPowerLevelCCK[VAR_41])) = VAR_42;
   FUNC_0(VAR_2,"CCK Tx Power Level, Index %d = 0x%02x\n", VAR_41, VAR_39->EEPROMTxPowerLevelCCK[VAR_41]);
   FUNC_0(VAR_2, "CCK Tx Power Level, Index %d = 0x%02x\n", VAR_41+1, VAR_39->EEPROMTxPowerLevelCCK[VAR_41+1]);
  }
  for(VAR_41=0; VAR_41<14; VAR_41+=2)
  {
   if(!VAR_39->AutoloadFailFlag)
   {
    VAR_42 = FUNC_1(VAR_38, (u16) ((VAR_21+VAR_41)>>1) );
   }
   else
   {
    VAR_42 = VAR_12;
   }
   *((u16*)(&VAR_39->EEPROMTxPowerLevelOFDM24G[VAR_41])) = VAR_42;
   FUNC_0(VAR_2, "OFDM 2.4G Tx Power Level, Index %d = 0x%02x\n", VAR_41, VAR_39->EEPROMTxPowerLevelOFDM24G[VAR_41]);
   FUNC_0(VAR_2, "OFDM 2.4G Tx Power Level, Index %d = 0x%02x\n", VAR_41+1, VAR_39->EEPROMTxPowerLevelOFDM24G[VAR_41+1]);
  }
  }
  else if(VAR_39->epromtype== VAR_24)
  {
  }



  if(VAR_39->epromtype == VAR_23)
  {
   for(VAR_41=0; VAR_41<14; VAR_41++)
   {
    VAR_39->TxPowerLevelCCK[VAR_41] = VAR_39->EEPROMTxPowerLevelCCK[VAR_41];
    VAR_39->TxPowerLevelOFDM24G[VAR_41] = VAR_39->EEPROMTxPowerLevelOFDM24G[VAR_41];
   }
   VAR_39->LegacyHTTxPowerDiff = VAR_39->EEPROMLegacyHTTxPowerDiff;

   VAR_39->AntennaTxPwDiff[0] = (VAR_39->EEPROMAntPwDiff & 0xf);

   VAR_39->AntennaTxPwDiff[1] = ((VAR_39->EEPROMAntPwDiff & 0xf0)>>4);

   VAR_39->AntennaTxPwDiff[2] = ((VAR_39->EEPROMAntPwDiff & 0xf00)>>8);

   VAR_39->CrystalCap = VAR_39->EEPROMCrystalCap;

   VAR_39->ThermalMeter[0] = (VAR_39->EEPROMThermalMeter & 0xf);
   VAR_39->ThermalMeter[1] = ((VAR_39->EEPROMThermalMeter & 0xf0)>>4);
  }
  else if(VAR_39->epromtype == VAR_24)
  {




   for(VAR_41=0; VAR_41<3; VAR_41++)
   {
    VAR_39->TxPowerLevelCCK_A[VAR_41] = VAR_39->EEPROMRfACCKChnl1TxPwLevel[0];
    VAR_39->TxPowerLevelOFDM24G_A[VAR_41] = VAR_39->EEPROMRfAOfdmChnlTxPwLevel[0];
    VAR_39->TxPowerLevelCCK_C[VAR_41] = VAR_39->EEPROMRfCCCKChnl1TxPwLevel[0];
    VAR_39->TxPowerLevelOFDM24G_C[VAR_41] = VAR_39->EEPROMRfCOfdmChnlTxPwLevel[0];
   }
   for(VAR_41=3; VAR_41<9; VAR_41++)
   {
    VAR_39->TxPowerLevelCCK_A[VAR_41] = VAR_39->EEPROMRfACCKChnl1TxPwLevel[1];
    VAR_39->TxPowerLevelOFDM24G_A[VAR_41] = VAR_39->EEPROMRfAOfdmChnlTxPwLevel[1];
    VAR_39->TxPowerLevelCCK_C[VAR_41] = VAR_39->EEPROMRfCCCKChnl1TxPwLevel[1];
    VAR_39->TxPowerLevelOFDM24G_C[VAR_41] = VAR_39->EEPROMRfCOfdmChnlTxPwLevel[1];
   }
   for(VAR_41=9; VAR_41<14; VAR_41++)
   {
    VAR_39->TxPowerLevelCCK_A[VAR_41] = VAR_39->EEPROMRfACCKChnl1TxPwLevel[2];
    VAR_39->TxPowerLevelOFDM24G_A[VAR_41] = VAR_39->EEPROMRfAOfdmChnlTxPwLevel[2];
    VAR_39->TxPowerLevelCCK_C[VAR_41] = VAR_39->EEPROMRfCCCKChnl1TxPwLevel[2];
    VAR_39->TxPowerLevelOFDM24G_C[VAR_41] = VAR_39->EEPROMRfCOfdmChnlTxPwLevel[2];
   }
   for(VAR_41=0; VAR_41<14; VAR_41++)
    FUNC_0(VAR_2, "priv->TxPowerLevelCCK_A[%d] = 0x%x\n", VAR_41, VAR_39->TxPowerLevelCCK_A[VAR_41]);
   for(VAR_41=0; VAR_41<14; VAR_41++)
    FUNC_0(VAR_2,"priv->TxPowerLevelOFDM24G_A[%d] = 0x%x\n", VAR_41, VAR_39->TxPowerLevelOFDM24G_A[VAR_41]);
   for(VAR_41=0; VAR_41<14; VAR_41++)
    FUNC_0(VAR_2, "priv->TxPowerLevelCCK_C[%d] = 0x%x\n", VAR_41, VAR_39->TxPowerLevelCCK_C[VAR_41]);
   for(VAR_41=0; VAR_41<14; VAR_41++)
    FUNC_0(VAR_2, "priv->TxPowerLevelOFDM24G_C[%d] = 0x%x\n", VAR_41, VAR_39->TxPowerLevelOFDM24G_C[VAR_41]);
   VAR_39->LegacyHTTxPowerDiff = VAR_39->EEPROMLegacyHTTxPowerDiff;
   VAR_39->AntennaTxPwDiff[0] = 0;
   VAR_39->AntennaTxPwDiff[1] = 0;
   VAR_39->AntennaTxPwDiff[2] = 0;
   VAR_39->CrystalCap = VAR_39->EEPROMCrystalCap;

   VAR_39->ThermalMeter[0] = (VAR_39->EEPROMThermalMeter & 0xf);
   VAR_39->ThermalMeter[1] = ((VAR_39->EEPROMThermalMeter & 0xf0)>>4);
  }
 }

 if(VAR_39->rf_type == VAR_26)
 {
  FUNC_0(VAR_2, "\n1T2R config\n");
 }
 else if (VAR_39->rf_type == VAR_27)
 {
  FUNC_0(VAR_2, "\n2T4R config\n");
 }



 FUNC_3(VAR_38);



 VAR_39->rf_chip= VAR_28;

 if(VAR_39->RegChannelPlan == 0xf)
 {
  VAR_39->ChannelPlan = VAR_39->eeprom_ChannelPlan;
 }
 else
 {
  VAR_39->ChannelPlan = VAR_39->RegChannelPlan;
 }




 if( VAR_39->eeprom_vid == 0x1186 && VAR_39->eeprom_did == 0x3304 )
 {
  VAR_39->CustomerID = VAR_31;
 }

 switch(VAR_39->eeprom_CustomerID)
 {
  case 144:
   VAR_39->CustomerID = 133;
   break;
  case 145:
   VAR_39->CustomerID = 136;
   break;
  case 139:
   VAR_39->CustomerID = 134;
   break;
  case 142:
   VAR_39->CustomerID = 135;
   break;
  case 138:
   VAR_39->CustomerID = 130;
   if(VAR_39->eeprom_ChannelPlan&0x80)
    VAR_39->ChannelPlan = VAR_39->eeprom_ChannelPlan&0x7f;
   else
    VAR_39->ChannelPlan = 0x0;
   FUNC_0(VAR_2, "Toshiba ChannelPlan = 0x%x\n",
    VAR_39->ChannelPlan);
   break;
  case 141:
   VAR_39->ScanDelay = 100;
   VAR_39->CustomerID = 132;
   break;
  case 140:
   VAR_39->CustomerID = 131;
   break;
  case 143:
   VAR_39->CustomerID = VAR_31;
   break;

  case 137:
   break;
  default:

   break;
 }


 if(VAR_39->ChannelPlan > VAR_0 - 1)
  VAR_39->ChannelPlan = 0;

 switch(VAR_39->CustomerID)
 {
  case 133:







   break;

  case 136:
   VAR_39->LedStrategy = VAR_33;
   break;

  case 134:
   VAR_39->LedStrategy = VAR_34;
   break;

  case 135:
   VAR_39->LedStrategy = VAR_35;
   break;

  case 132:
   VAR_39->LedStrategy = VAR_36;
   break;

  case 131:
   VAR_39->LedStrategy = VAR_37;
   break;

  case 130:



  default:







   break;
 }







 FUNC_0(VAR_2, "RegChannelPlan(%d)\n", VAR_39->RegChannelPlan);
 FUNC_0(VAR_2, "ChannelPlan = %d \n", VAR_39->ChannelPlan);
 FUNC_0(VAR_2, "LedStrategy = %d \n", VAR_39->LedStrategy);
 FUNC_0(VAR_3, "<==== ReadAdapterInfo\n");

 return ;
}
