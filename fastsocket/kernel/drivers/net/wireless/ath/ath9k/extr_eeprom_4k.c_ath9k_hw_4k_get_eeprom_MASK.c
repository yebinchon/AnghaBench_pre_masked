
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct modal_eep_4k_header {int* noiseFloorThreshCh; int ob_0; int db1_1; int version; int antdiv_ctl1; int* antennaGainCh; } ;
struct base_eep_header_4k {int version; int* regDmn; int deviceCap; int opCapFlags; int rfSilent; int txMask; int rxMask; int txGainType; int macAddr; } ;
struct ar5416_eeprom_4k {struct base_eep_header_4k baseEepHeader; struct modal_eep_4k_header modalHeader; } ;
struct TYPE_2__ {struct ar5416_eeprom_4k map4k; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct ath_hw *VAR_2,
      enum eeprom_param VAR_3)
{
 struct ar5416_eeprom_4k *VAR_4 = &VAR_2->eeprom.map4k;
 struct modal_eep_4k_header *VAR_5 = &VAR_4->modalHeader;
 struct base_eep_header_4k *VAR_6 = &VAR_4->baseEepHeader;
 u16 VAR_7;

 VAR_7 = VAR_6->version & VAR_0;

 switch (VAR_3) {
 case 137:
  return VAR_5->noiseFloorThreshCh[0];
 case 142:
  return FUNC_0(VAR_6->macAddr);
 case 141:
  return FUNC_0(VAR_6->macAddr + 2);
 case 140:
  return FUNC_0(VAR_6->macAddr + 4);
 case 132:
  return VAR_6->regDmn[0];
 case 135:
  return VAR_6->deviceCap;
 case 134:
  return VAR_6->opCapFlags;
 case 131:
  return VAR_6->rfSilent;
 case 136:
  return VAR_5->ob_0;
 case 144:
  return VAR_5->db1_1;
 case 139:
  return VAR_7;
 case 128:
  return VAR_6->txMask;
 case 130:
  return VAR_6->rxMask;
 case 143:
  return 0;
 case 133:
  return VAR_1;
 case 138:
  return VAR_5->version;
 case 145:
  return VAR_5->antdiv_ctl1;
 case 129:
  return VAR_6->txGainType;
 case 146:
  return VAR_5->antennaGainCh[0];
 default:
  return 0;
 }
}
