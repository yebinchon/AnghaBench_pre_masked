
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
typedef scalar_t__ u16 ;
struct TYPE_9__ {int antCtrlCommon; int* antCtrlChain; TYPE_3__* spurChans; } ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ checksum; scalar_t__ version; scalar_t__* regDmn; scalar_t__ rfSilent; scalar_t__ blueToothOptions; scalar_t__ deviceCap; } ;
struct ar5416_eeprom_4k {TYPE_4__ modalHeader; TYPE_2__ baseEepHeader; } ;
struct TYPE_6__ {struct ar5416_eeprom_4k map4k; } ;
struct ath_hw {TYPE_5__* eep_ops; TYPE_1__ eeprom; } ;
struct ath_common {int dummy; } ;
struct TYPE_10__ {scalar_t__ (* get_eeprom_rev ) (struct ath_hw*) ;int (* get_eeprom_ver ) (struct ath_hw*) ;} ;
struct TYPE_8__ {scalar_t__ spurChan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;
 int FUNC_4 (struct ath_common*,char*,...) ;
 int FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 void* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ath_hw *VAR_9)
{

 struct ath_common *VAR_10 = FUNC_0(VAR_9);
 struct ar5416_eeprom_4k *VAR_11 = &VAR_9->eeprom.map4k;
 u16 *VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16 = 0, VAR_17;
 bool VAR_18 = 0;
 int VAR_19, VAR_20;


 if (!FUNC_2(VAR_9)) {
  if (!FUNC_1(VAR_9, VAR_2,
      &VAR_14)) {
   FUNC_4(VAR_10, "Reading Magic # failed\n");
   return 0;
  }

  FUNC_3(VAR_10, VAR_6, "Read Magic = 0x%04X\n", VAR_14);

  if (VAR_14 != VAR_1) {
   VAR_15 = FUNC_8(VAR_14);

   if (VAR_15 == VAR_1) {
    VAR_18 = 1;
    VAR_12 = (u16 *) (&VAR_9->eeprom);

    for (VAR_20 = 0; VAR_20 < (sizeof(struct ar5416_eeprom_4k) / sizeof(u16)); VAR_20++) {
     VAR_13 = FUNC_8(*VAR_12);
     *VAR_12 = VAR_13;
     VAR_12++;
    }
   } else {
    FUNC_4(VAR_10,
     "Invalid EEPROM Magic. Endianness mismatch.\n");
    return -VAR_8;
   }
  }
 }

 FUNC_3(VAR_10, VAR_6, "need_swap = %s\n",
  VAR_18 ? "True" : "False");

 if (VAR_18)
  VAR_17 = FUNC_8(VAR_9->eeprom.map4k.baseEepHeader.length);
 else
  VAR_17 = VAR_9->eeprom.map4k.baseEepHeader.length;

 if (VAR_17 > sizeof(struct ar5416_eeprom_4k))
  VAR_17 = sizeof(struct ar5416_eeprom_4k) / sizeof(u16);
 else
  VAR_17 = VAR_17 / sizeof(u16);

 VAR_12 = (u16 *)(&VAR_9->eeprom);

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++)
  VAR_16 ^= *VAR_12++;

 if (VAR_18) {
  u32 VAR_21;
  u16 VAR_22;

  FUNC_3(VAR_10, VAR_6,
   "EEPROM Endianness is not native.. Changing\n");

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.length);
  VAR_11->baseEepHeader.length = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.checksum);
  VAR_11->baseEepHeader.checksum = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.version);
  VAR_11->baseEepHeader.version = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.regDmn[0]);
  VAR_11->baseEepHeader.regDmn[0] = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.regDmn[1]);
  VAR_11->baseEepHeader.regDmn[1] = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.rfSilent);
  VAR_11->baseEepHeader.rfSilent = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.blueToothOptions);
  VAR_11->baseEepHeader.blueToothOptions = VAR_22;

  VAR_22 = FUNC_8(VAR_11->baseEepHeader.deviceCap);
  VAR_11->baseEepHeader.deviceCap = VAR_22;

  VAR_21 = FUNC_9(VAR_11->modalHeader.antCtrlCommon);
  VAR_11->modalHeader.antCtrlCommon = VAR_21;

  for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
   VAR_21 = FUNC_9(VAR_11->modalHeader.antCtrlChain[VAR_19]);
   VAR_11->modalHeader.antCtrlChain[VAR_19] = VAR_21;
  }

  for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
   VAR_22 = FUNC_8(VAR_11->modalHeader.spurChans[VAR_19].spurChan);
   VAR_11->modalHeader.spurChans[VAR_19].spurChan = VAR_22;
  }
 }

 if (VAR_16 != 0xffff || VAR_9->eep_ops->get_eeprom_ver(VAR_9) != VAR_4 ||
     VAR_9->eep_ops->get_eeprom_rev(VAR_9) < VAR_3) {
  FUNC_4(VAR_10, "Bad EEPROM checksum 0x%x or revision 0x%04x\n",
   VAR_16, VAR_9->eep_ops->get_eeprom_ver(VAR_9));
  return -VAR_8;
 }

 return 0;

}
