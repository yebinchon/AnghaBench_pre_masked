
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct modal_eep_ar9287_header {int* noiseFloorThreshCh; int * antennaGainCh; } ;
struct base_eep_ar9287_header {int version; int* regDmn; int deviceCap; int opCapFlags; int rfSilent; int txMask; int rxMask; int deviceType; int openLoopPwrCntl; int tempSensSlope; int tempSensSlopePalOn; int macAddr; } ;
struct ar9287_eeprom {struct base_eep_ar9287_header baseEepHeader; struct modal_eep_ar9287_header modalHeader; } ;
struct TYPE_2__ {struct ar9287_eeprom map9287; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_2(struct ath_hw *VAR_4,
          enum eeprom_param VAR_5)
{
 struct ar9287_eeprom *VAR_6 = &VAR_4->eeprom.map9287;
 struct modal_eep_ar9287_header *VAR_7 = &VAR_6->modalHeader;
 struct base_eep_ar9287_header *VAR_8 = &VAR_6->baseEepHeader;
 u16 VAR_9;

 VAR_9 = VAR_8->version & VAR_2;

 switch (VAR_5) {
 case 137:
  return VAR_7->noiseFloorThreshCh[0];
 case 141:
  return FUNC_0(VAR_8->macAddr);
 case 140:
  return FUNC_0(VAR_8->macAddr + 2);
 case 139:
  return FUNC_0(VAR_8->macAddr + 4);
 case 133:
  return VAR_8->regDmn[0];
 case 135:
  return VAR_8->deviceCap;
 case 134:
  return VAR_8->opCapFlags;
 case 132:
  return VAR_8->rfSilent;
 case 138:
  return VAR_9;
 case 128:
  return VAR_8->txMask;
 case 131:
  return VAR_8->rxMask;
 case 142:
  return VAR_8->deviceType;
 case 136:
  return VAR_8->openLoopPwrCntl;
 case 130:
  if (VAR_9 >= VAR_0)
   return VAR_8->tempSensSlope;
  else
   return 0;
 case 129:
  if (VAR_9 >= VAR_1)
   return VAR_8->tempSensSlopePalOn;
  else
   return 0;
 case 143:
  return FUNC_1(VAR_3, VAR_7->antennaGainCh[0],
     VAR_7->antennaGainCh[1]);
 default:
  return 0;
 }
}
