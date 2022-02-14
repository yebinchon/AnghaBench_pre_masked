
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int antennaGain; } ;
struct TYPE_9__ {int antennaGain; } ;
struct TYPE_8__ {int ant_div_control; } ;
struct TYPE_7__ {int opFlags; } ;
struct ar9300_base_eep_hdr {int deviceCap; int rfSilent; int txrxMask; int featureEnable; int miscConfiguration; TYPE_2__ opCapFlags; int * regDmn; } ;
struct ar9300_eeprom {TYPE_5__ modalHeader2G; TYPE_4__ modalHeader5G; TYPE_3__ base_ext1; int macAddr; struct ar9300_base_eep_hdr baseEepHeader; } ;
struct TYPE_6__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef enum eeprom_param { ____Placeholder_eeprom_param } eeprom_param ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct ath_hw *VAR_0,
          enum eeprom_param VAR_1)
{
 struct ar9300_eeprom *VAR_2 = &VAR_0->eeprom.ar9300_eep;
 struct ar9300_base_eep_hdr *VAR_3 = &VAR_2->baseEepHeader;

 switch (VAR_1) {
 case 137:
  return FUNC_1(VAR_2->macAddr);
 case 136:
  return FUNC_1(VAR_2->macAddr + 2);
 case 135:
  return FUNC_1(VAR_2->macAddr + 4);
 case 131:
  return FUNC_2(VAR_3->regDmn[0]);
 case 134:
  return VAR_3->deviceCap;
 case 133:
  return VAR_3->opCapFlags.opFlags;
 case 130:
  return VAR_3->rfSilent;
 case 128:
  return (VAR_3->txrxMask >> 4) & 0xf;
 case 129:
  return VAR_3->txrxMask & 0xf;
 case 132:
  return !!(VAR_3->featureEnable & FUNC_0(5));
 case 138:
  return (VAR_3->miscConfiguration >> 0x3) & 0x1;
 case 139:
  return VAR_2->base_ext1.ant_div_control;
 case 140:
  return VAR_2->modalHeader5G.antennaGain;
 case 141:
  return VAR_2->modalHeader2G.antennaGain;
 default:
  return 0;
 }
}
