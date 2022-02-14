
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct modal_eep_header {int antCtrlCommon; int* antCtrlChain; scalar_t__* xpaBiasLvlFreq; scalar_t__ xpaBiasLvl; TYPE_6__* spurChans; } ;
struct TYPE_8__ {scalar_t__ devid; } ;
struct TYPE_11__ {scalar_t__ length; scalar_t__ checksum; scalar_t__ version; scalar_t__* regDmn; scalar_t__ rfSilent; scalar_t__ blueToothOptions; scalar_t__ deviceCap; scalar_t__ pwdclkind; } ;
struct ar5416_eeprom_def {struct modal_eep_header* modalHeader; TYPE_5__ baseEepHeader; } ;
struct TYPE_10__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {int need_an_top2_fixup; TYPE_2__ hw_version; TYPE_1__* eep_ops; TYPE_4__ eeprom; } ;
struct ath_common {TYPE_3__* bus_ops; } ;
struct TYPE_12__ {scalar_t__ spurChan; } ;
struct TYPE_9__ {scalar_t__ ath_bus_type; } ;
struct TYPE_7__ {scalar_t__ (* get_eeprom_rev ) (struct ath_hw*) ;int (* get_eeprom_ver ) (struct ath_hw*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct modal_eep_header*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,...) ;
 int FUNC_6 (struct ath_common*,char*,...) ;
 int FUNC_7 (struct ath_hw*) ;
 scalar_t__ FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ath_hw *VAR_10)
{
 struct ar5416_eeprom_def *VAR_11 = &VAR_10->eeprom.def;
 struct ath_common *VAR_12 = FUNC_2(VAR_10);
 u16 *VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17 = 0, VAR_18;
 bool VAR_19 = 0;
 int VAR_20, VAR_21, VAR_22;

 if (!FUNC_3(VAR_10, VAR_1, &VAR_15)) {
  FUNC_6(VAR_12, "Reading Magic # failed\n");
  return 0;
 }

 if (!FUNC_4(VAR_10)) {
  FUNC_5(VAR_12, VAR_8, "Read Magic = 0x%04X\n", VAR_15);

  if (VAR_15 != VAR_0) {
   VAR_16 = FUNC_10(VAR_15);

   if (VAR_16 == VAR_0) {
    VAR_22 = sizeof(struct ar5416_eeprom_def);
    VAR_19 = 1;
    VAR_13 = (u16 *) (&VAR_10->eeprom);

    for (VAR_21 = 0; VAR_21 < VAR_22 / sizeof(u16); VAR_21++) {
     VAR_14 = FUNC_10(*VAR_13);
     *VAR_13 = VAR_14;
     VAR_13++;
    }
   } else {
    FUNC_6(VAR_12,
     "Invalid EEPROM Magic. Endianness mismatch.\n");
    return -VAR_9;
   }
  }
 }

 FUNC_5(VAR_12, VAR_8, "need_swap = %s\n",
  VAR_19 ? "True" : "False");

 if (VAR_19)
  VAR_18 = FUNC_10(VAR_10->eeprom.def.baseEepHeader.length);
 else
  VAR_18 = VAR_10->eeprom.def.baseEepHeader.length;

 if (VAR_18 > sizeof(struct ar5416_eeprom_def))
  VAR_18 = sizeof(struct ar5416_eeprom_def) / sizeof(u16);
 else
  VAR_18 = VAR_18 / sizeof(u16);

 VAR_13 = (u16 *)(&VAR_10->eeprom);

 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++)
  VAR_17 ^= *VAR_13++;

 if (VAR_19) {
  u32 VAR_23, VAR_24;
  u16 VAR_25;

  FUNC_5(VAR_12, VAR_8,
   "EEPROM Endianness is not native.. Changing.\n");

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.length);
  VAR_11->baseEepHeader.length = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.checksum);
  VAR_11->baseEepHeader.checksum = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.version);
  VAR_11->baseEepHeader.version = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.regDmn[0]);
  VAR_11->baseEepHeader.regDmn[0] = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.regDmn[1]);
  VAR_11->baseEepHeader.regDmn[1] = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.rfSilent);
  VAR_11->baseEepHeader.rfSilent = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.blueToothOptions);
  VAR_11->baseEepHeader.blueToothOptions = VAR_25;

  VAR_25 = FUNC_10(VAR_11->baseEepHeader.deviceCap);
  VAR_11->baseEepHeader.deviceCap = VAR_25;

  for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_11->modalHeader); VAR_24++) {
   struct modal_eep_header *VAR_26 =
    &VAR_11->modalHeader[VAR_24];
   VAR_23 = FUNC_11(VAR_26->antCtrlCommon);
   VAR_26->antCtrlCommon = VAR_23;

   for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
    VAR_23 = FUNC_11(VAR_26->antCtrlChain[VAR_20]);
    VAR_26->antCtrlChain[VAR_20] = VAR_23;
   }
   for (VAR_20 = 0; VAR_20 < 3; VAR_20++) {
    VAR_25 = FUNC_10(VAR_26->xpaBiasLvlFreq[VAR_20]);
    VAR_26->xpaBiasLvlFreq[VAR_20] = VAR_25;
   }

   for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
    VAR_25 = FUNC_10(VAR_26->spurChans[VAR_20].spurChan);
    VAR_26->spurChans[VAR_20].spurChan = VAR_25;
   }
  }
 }

 if (VAR_17 != 0xffff || VAR_10->eep_ops->get_eeprom_ver(VAR_10) != VAR_3 ||
     VAR_10->eep_ops->get_eeprom_rev(VAR_10) < VAR_2) {
  FUNC_6(VAR_12, "Bad EEPROM checksum 0x%x or revision 0x%04x\n",
   VAR_17, VAR_10->eep_ops->get_eeprom_ver(VAR_10));
  return -VAR_9;
 }


 if ((VAR_10->hw_version.devid == VAR_5) &&
     ((VAR_11->baseEepHeader.version & 0xff) > 0x0a) &&
     (VAR_11->baseEepHeader.pwdclkind == 0))
  VAR_10->need_an_top2_fixup = 1;

 if ((VAR_12->bus_ops->ath_bus_type == VAR_7) &&
     (FUNC_1(VAR_10)))
  VAR_11->modalHeader[0].xpaBiasLvl = 0;

 return 0;
}
