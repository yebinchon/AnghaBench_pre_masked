
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
struct ar9287_eeprom {TYPE_4__ modalHeader; TYPE_2__ baseEepHeader; } ;
struct TYPE_6__ {struct ar9287_eeprom map9287; } ;
struct ath_hw {TYPE_5__* eep_ops; TYPE_1__ eeprom; } ;
struct ath_common {int dummy; } ;
struct TYPE_10__ {scalar_t__ (* get_eeprom_rev ) (struct ath_hw*) ;int (* get_eeprom_ver ) (struct ath_hw*) ;} ;
struct TYPE_8__ {scalar_t__ spurChan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,char*) ;
 int FUNC_4 (struct ath_common*,char*,...) ;
 int FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ath_hw *VAR_9)
{
 u32 VAR_10 = 0, VAR_11, VAR_12;
 u16 VAR_13, VAR_14, VAR_15, VAR_16, *VAR_17;
 int VAR_18, VAR_19;
 bool VAR_20 = 0;
 struct ar9287_eeprom *VAR_21 = &VAR_9->eeprom.map9287;
 struct ath_common *VAR_22 = FUNC_0(VAR_9);

 if (!FUNC_2(VAR_9)) {
  if (!FUNC_1(VAR_9, VAR_1,
      &VAR_15)) {
   FUNC_4(VAR_22, "Reading Magic # failed\n");
   return 0;
  }

  FUNC_3(VAR_22, VAR_6, "Read Magic = 0x%04X\n", VAR_15);

  if (VAR_15 != VAR_0) {
   VAR_16 = FUNC_8(VAR_15);

   if (VAR_16 == VAR_0) {
    VAR_20 = 1;
    VAR_17 = (u16 *)(&VAR_9->eeprom);

    for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
     VAR_13 = FUNC_8(*VAR_17);
     *VAR_17 = VAR_13;
     VAR_17++;
    }
   } else {
    FUNC_4(VAR_22,
     "Invalid EEPROM Magic. Endianness mismatch.\n");
    return -VAR_7;
   }
  }
 }

 FUNC_3(VAR_22, VAR_6, "need_swap = %s\n",
  VAR_20 ? "True" : "False");

 if (VAR_20)
  VAR_11 = FUNC_8(VAR_9->eeprom.map9287.baseEepHeader.length);
 else
  VAR_11 = VAR_9->eeprom.map9287.baseEepHeader.length;

 if (VAR_11 > sizeof(struct ar9287_eeprom))
  VAR_11 = sizeof(struct ar9287_eeprom) / sizeof(u16);
 else
  VAR_11 = VAR_11 / sizeof(u16);

 VAR_17 = (u16 *)(&VAR_9->eeprom);

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
  VAR_10 ^= *VAR_17++;

 if (VAR_20) {
  VAR_14 = FUNC_8(VAR_21->baseEepHeader.length);
  VAR_21->baseEepHeader.length = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.checksum);
  VAR_21->baseEepHeader.checksum = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.version);
  VAR_21->baseEepHeader.version = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.regDmn[0]);
  VAR_21->baseEepHeader.regDmn[0] = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.regDmn[1]);
  VAR_21->baseEepHeader.regDmn[1] = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.rfSilent);
  VAR_21->baseEepHeader.rfSilent = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.blueToothOptions);
  VAR_21->baseEepHeader.blueToothOptions = VAR_14;

  VAR_14 = FUNC_8(VAR_21->baseEepHeader.deviceCap);
  VAR_21->baseEepHeader.deviceCap = VAR_14;

  VAR_12 = FUNC_9(VAR_21->modalHeader.antCtrlCommon);
  VAR_21->modalHeader.antCtrlCommon = VAR_12;

  for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
   VAR_12 = FUNC_9(VAR_21->modalHeader.antCtrlChain[VAR_18]);
   VAR_21->modalHeader.antCtrlChain[VAR_18] = VAR_12;
  }

  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   VAR_14 = FUNC_8(VAR_21->modalHeader.spurChans[VAR_18].spurChan);
   VAR_21->modalHeader.spurChans[VAR_18].spurChan = VAR_14;
  }
 }

 if (VAR_10 != 0xffff || VAR_9->eep_ops->get_eeprom_ver(VAR_9) != VAR_3
     || VAR_9->eep_ops->get_eeprom_rev(VAR_9) < VAR_2) {
  FUNC_4(VAR_22, "Bad EEPROM checksum 0x%x or revision 0x%04x\n",
   VAR_10, VAR_9->eep_ops->get_eeprom_ver(VAR_9));
  return -VAR_7;
 }

 return 0;
}
