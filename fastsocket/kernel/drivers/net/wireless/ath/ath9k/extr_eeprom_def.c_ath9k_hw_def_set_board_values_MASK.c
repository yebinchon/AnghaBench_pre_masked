
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct modal_eep_header {int antCtrlCommon; int* antCtrlChain; int ob; int db; int ob_ch1; int db_ch1; int xpaBiasLvl; int lna_ctl; int switchSettling; int adcDesiredSize; int pgaDesiredSize; int txEndToRxOn; int thresh62; int txFrameToDataStart; int txFrameToPaOn; int swSettleHt40; int miscBits; int txFrameToXpaOn; int txEndToXpaOff; int * iqCalQCh; int * iqCalICh; } ;
struct TYPE_4__ {int dacLpMode; int desiredScaleCCK; scalar_t__ dacHiPwrMode_5G; } ;
struct ar5416_eeprom_def {TYPE_2__ baseEepHeader; struct modal_eep_header* modalHeader; } ;
struct TYPE_3__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {int rxchainmask; int txchainmask; TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_6 (struct ath_hw*,scalar_t__) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int) ;
 int FUNC_8 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int ,int) ;
 int FUNC_11 (struct ath_hw*,struct modal_eep_header*,struct ar5416_eeprom_def*,int,int,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct ath_hw *VAR_69,
       struct ath9k_channel *VAR_70)
{
 struct modal_eep_header *VAR_71;
 struct ar5416_eeprom_def *VAR_72 = &VAR_69->eeprom.def;
 int VAR_73, VAR_74;
 u8 VAR_75;

 VAR_71 = &(VAR_72->modalHeader[FUNC_4(VAR_70)]);
 VAR_75 = FUNC_4(VAR_70) ? 23 : 44;

 FUNC_8(VAR_69, VAR_58, VAR_71->antCtrlCommon & 0xffff);

 for (VAR_73 = 0; VAR_73 < VAR_4; VAR_73++) {
  if (FUNC_1(VAR_69)) {
   if (VAR_73 >= 2)
    break;
  }

  if ((VAR_69->rxchainmask == 5 || VAR_69->txchainmask == 5) && (VAR_73 != 0))
   VAR_74 = (VAR_73 == 1) ? 0x2000 : 0x1000;
  else
   VAR_74 = VAR_73 * 0x1000;

  FUNC_8(VAR_69, VAR_57 + VAR_74,
     VAR_71->antCtrlChain[VAR_73]);

  FUNC_8(VAR_69, FUNC_0(0) + VAR_74,
     (FUNC_6(VAR_69, FUNC_0(0) + VAR_74) &
      ~(VAR_60 |
        VAR_59)) |
     FUNC_9(VAR_71->iqCalICh[VAR_73],
        VAR_59) |
     FUNC_9(VAR_71->iqCalQCh[VAR_73],
        VAR_60));

  FUNC_11(VAR_69, VAR_71, VAR_72, VAR_75,
          VAR_74, VAR_73);
 }

 if (FUNC_3(VAR_69)) {
  if (FUNC_4(VAR_70)) {
   FUNC_10(VAR_69, VAR_7,
        VAR_10,
        VAR_11,
        VAR_71->ob);
   FUNC_10(VAR_69, VAR_7,
        VAR_8,
        VAR_9,
        VAR_71->db);
   FUNC_10(VAR_69, VAR_12,
        VAR_15,
        VAR_16,
        VAR_71->ob_ch1);
   FUNC_10(VAR_69, VAR_12,
        VAR_13,
        VAR_14,
        VAR_71->db_ch1);
  } else {
   FUNC_10(VAR_69, VAR_17,
        VAR_20,
        VAR_21,
        VAR_71->ob);
   FUNC_10(VAR_69, VAR_17,
        VAR_18,
        VAR_19,
        VAR_71->db);
   FUNC_10(VAR_69, VAR_22,
        VAR_25,
        VAR_26,
        VAR_71->ob_ch1);
   FUNC_10(VAR_69, VAR_22,
        VAR_23,
        VAR_24,
        VAR_71->db_ch1);
  }
  FUNC_10(VAR_69, VAR_29,
       VAR_32,
       VAR_33,
       VAR_71->xpaBiasLvl);
  FUNC_10(VAR_69, VAR_29,
       VAR_30,
       VAR_31,
       !!(VAR_71->lna_ctl &
          VAR_68));
  FUNC_7(VAR_69, VAR_66, VAR_45,
         !!(VAR_71->lna_ctl & VAR_67));
 }

 FUNC_7(VAR_69, VAR_55, VAR_56,
        VAR_71->switchSettling);
 FUNC_7(VAR_69, VAR_38, VAR_39,
        VAR_71->adcDesiredSize);

 if (!FUNC_3(VAR_69))
  FUNC_7(VAR_69, VAR_38,
         VAR_40,
         VAR_71->pgaDesiredSize);

 FUNC_8(VAR_69, VAR_50,
    FUNC_9(VAR_71->txEndToXpaOff, VAR_53)
    | FUNC_9(VAR_71->txEndToXpaOff,
         VAR_54)
    | FUNC_9(VAR_71->txFrameToXpaOn,
         VAR_51)
    | FUNC_9(VAR_71->txFrameToXpaOn,
         VAR_52));

 FUNC_7(VAR_69, VAR_49, VAR_64,
        VAR_71->txEndToRxOn);

 if (FUNC_3(VAR_69)) {
  FUNC_7(VAR_69, VAR_34, VAR_6,
         VAR_71->thresh62);
  FUNC_7(VAR_69, VAR_42,
         VAR_43,
         VAR_71->thresh62);
 } else {
  FUNC_7(VAR_69, VAR_34, VAR_35,
         VAR_71->thresh62);
  FUNC_7(VAR_69, VAR_41,
         VAR_44,
         VAR_71->thresh62);
 }

 if (VAR_5 >= VAR_1) {
  FUNC_7(VAR_69, VAR_48,
         VAR_62,
         VAR_71->txFrameToDataStart);
  FUNC_7(VAR_69, VAR_48, VAR_63,
         VAR_71->txFrameToPaOn);
 }

 if (VAR_5 >= VAR_3) {
  if (FUNC_5(VAR_70))
   FUNC_7(VAR_69, VAR_55,
          VAR_56,
          VAR_71->swSettleHt40);
 }

 if (FUNC_3(VAR_69) &&
     VAR_5 >= VAR_0)
  FUNC_7(VAR_69, VAR_36,
         VAR_37,
         VAR_71->miscBits);


 if (FUNC_2(VAR_69) && VAR_5 >= VAR_2) {
  if (FUNC_4(VAR_70))
   FUNC_7(VAR_69, VAR_27, VAR_28,
     VAR_72->baseEepHeader.dacLpMode);
  else if (VAR_72->baseEepHeader.dacHiPwrMode_5G)
   FUNC_7(VAR_69, VAR_27, VAR_28, 0);
  else
   FUNC_7(VAR_69, VAR_27, VAR_28,
          VAR_72->baseEepHeader.dacLpMode);

  FUNC_12(100);

  FUNC_7(VAR_69, VAR_46, VAR_47,
         VAR_71->miscBits >> 2);

  FUNC_7(VAR_69, VAR_65,
         VAR_61,
         VAR_72->baseEepHeader.desiredScaleCCK);
 }
}
