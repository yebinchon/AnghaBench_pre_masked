
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct modal_eep_header {int* noiseFloorThreshCh; int ob; int db; int* antennaGainCh; } ;
struct base_eep_header {int* regDmn; int deviceCap; int opCapFlags; int rfSilent; int txMask; int rxMask; int fastClk5g; int rxGainType; int txGainType; int rcChainMask; int dacHiPwrMode_5G; int frac_n_5g; int pwr_table_offset; int openLoopPwrCntl; int macAddr; } ;
struct ar5416_eeprom_def {struct base_eep_header baseEepHeader; struct modal_eep_header* modalHeader; } ;
struct TYPE_2__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_2(struct ath_hw *VAR_7,
       enum eeprom_param VAR_8)
{
 struct ar5416_eeprom_def *VAR_9 = &VAR_7->eeprom.def;
 struct modal_eep_header *VAR_10 = VAR_9->modalHeader;
 struct base_eep_header *VAR_11 = &VAR_9->baseEepHeader;
 int VAR_12 = 0;

 switch (VAR_8) {
 case 141:
  return VAR_10[0].noiseFloorThreshCh[0];
 case 142:
  return VAR_10[1].noiseFloorThreshCh[0];
 case 146:
  return FUNC_0(VAR_11->macAddr);
 case 145:
  return FUNC_0(VAR_11->macAddr + 2);
 case 144:
  return FUNC_0(VAR_11->macAddr + 4);
 case 133:
  return VAR_11->regDmn[0];
 case 137:
  return VAR_11->deviceCap;
 case 136:
  return VAR_11->opCapFlags;
 case 132:
  return VAR_11->rfSilent;
 case 139:
  return VAR_10[0].ob;
 case 149:
  return VAR_10[0].db;
 case 140:
  return VAR_10[1].ob;
 case 150:
  return VAR_10[1].db;
 case 143:
  return VAR_5;
 case 128:
  return VAR_11->txMask;
 case 130:
  return VAR_11->rxMask;
 case 147:
  return VAR_11->fastClk5g;
 case 131:
  return VAR_11->rxGainType;
 case 129:
  return VAR_11->txGainType;
 case 138:
  if (VAR_5 >= VAR_0)
   return VAR_11->openLoopPwrCntl ? 1 : 0;
  else
   return 0;
 case 134:
  if (VAR_5 >= VAR_0)
   return VAR_11->rcChainMask;
  else
   return 0;
 case 151:
  if (VAR_5 >= VAR_1)
   return VAR_11->dacHiPwrMode_5G;
  else
   return 0;
 case 148:
  if (VAR_5 >= VAR_3)
   return VAR_11->frac_n_5g;
  else
   return 0;
 case 135:
  if (VAR_5 >= VAR_2)
   return VAR_11->pwr_table_offset;
  else
   return VAR_4;
 case 153:
  VAR_12 = 1;

 case 152:
  return FUNC_1(VAR_6, FUNC_1(VAR_6,
   VAR_10[VAR_12].antennaGainCh[0],
   VAR_10[VAR_12].antennaGainCh[1]),
   VAR_10[VAR_12].antennaGainCh[2]);
 default:
  return 0;
 }
}
