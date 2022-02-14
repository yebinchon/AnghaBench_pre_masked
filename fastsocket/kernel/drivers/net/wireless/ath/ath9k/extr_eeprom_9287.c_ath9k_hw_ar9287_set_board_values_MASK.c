
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct modal_eep_ar9287_header {int antCtrlCommon; int* antCtrlChain; int xpaBiasLvl; int txFrameToPaOn; int txFrameToDataStart; int ob_pal_off; int ob_qam; int ob_psk; int ob_cck; int db2; int db1; int thresh62; int txEndToRxOn; int txFrameToXpaOn; int txEndToXpaOff; int adcDesiredSize; int switchSettling; int swSettleHt40; int * rxTxMarginCh; int * bswAtten; int * bswMargin; int * txRxAttenCh; int * iqCalQCh; int * iqCalICh; } ;
struct ar9287_eeprom {struct modal_eep_ar9287_header modalHeader; } ;
struct TYPE_2__ {struct ar9287_eeprom map9287; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,scalar_t__) ;
 int FUNC_3 (struct ath_hw*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_40,
          struct ath9k_channel *VAR_41)
{
 struct ar9287_eeprom *VAR_42 = &VAR_40->eeprom.map9287;
 struct modal_eep_ar9287_header *VAR_43 = &VAR_42->modalHeader;
 u32 VAR_44, VAR_45;
 u8 VAR_46;
 int VAR_47;

 VAR_43 = &VAR_42->modalHeader;

 FUNC_4(VAR_40, VAR_34, VAR_43->antCtrlCommon);

 for (VAR_47 = 0; VAR_47 < VAR_14; VAR_47++) {
  VAR_44 = VAR_47 * 0x1000;

  FUNC_4(VAR_40, VAR_33 + VAR_44,
     VAR_43->antCtrlChain[VAR_47]);

  FUNC_4(VAR_40, FUNC_0(0) + VAR_44,
     (FUNC_2(VAR_40, FUNC_0(0) + VAR_44)
      & ~(VAR_36 |
          VAR_35)) |
     FUNC_5(VAR_43->iqCalICh[VAR_47],
        VAR_35) |
     FUNC_5(VAR_43->iqCalQCh[VAR_47],
        VAR_36));

  VAR_46 = VAR_43->txRxAttenCh[VAR_47];

  FUNC_3(VAR_40, VAR_20 + VAR_44,
         VAR_22,
         VAR_43->bswMargin[VAR_47]);
  FUNC_3(VAR_40, VAR_20 + VAR_44,
         VAR_21,
         VAR_43->bswAtten[VAR_47]);
  FUNC_3(VAR_40, VAR_30 + VAR_44,
         VAR_1,
         VAR_46);
  FUNC_3(VAR_40, VAR_30 + VAR_44,
         VAR_2,
         VAR_43->rxTxMarginCh[VAR_47]);
 }


 if (FUNC_1(VAR_41))
  FUNC_3(VAR_40, VAR_31,
         VAR_32, VAR_43->swSettleHt40);
 else
  FUNC_3(VAR_40, VAR_31,
         VAR_32, VAR_43->switchSettling);

 FUNC_3(VAR_40, VAR_16,
        VAR_17, VAR_43->adcDesiredSize);

 FUNC_4(VAR_40, VAR_25,
    FUNC_5(VAR_43->txEndToXpaOff, VAR_28)
    | FUNC_5(VAR_43->txEndToXpaOff, VAR_29)
    | FUNC_5(VAR_43->txFrameToXpaOn, VAR_26)
    | FUNC_5(VAR_43->txFrameToXpaOn, VAR_27));

 FUNC_3(VAR_40, VAR_24,
        VAR_39, VAR_43->txEndToRxOn);

 FUNC_3(VAR_40, VAR_15,
        VAR_0, VAR_43->thresh62);
 FUNC_3(VAR_40, VAR_18,
        VAR_19, VAR_43->thresh62);

 VAR_45 = FUNC_2(VAR_40, VAR_3);
 VAR_45 &= ~(VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_9 |
      VAR_10 |
      VAR_8);
 VAR_45 |= (FUNC_5(VAR_43->db1, VAR_5) |
     FUNC_5(VAR_43->db2, VAR_6) |
     FUNC_5(VAR_43->ob_cck, VAR_7) |
     FUNC_5(VAR_43->ob_psk, VAR_9) |
     FUNC_5(VAR_43->ob_qam, VAR_10) |
     FUNC_5(VAR_43->ob_pal_off, VAR_8));

 FUNC_6(VAR_40, VAR_3, VAR_45);

 VAR_45 = FUNC_2(VAR_40, VAR_4);
 VAR_45 &= ~(VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_9 |
      VAR_10 |
      VAR_8);
 VAR_45 |= (FUNC_5(VAR_43->db1, VAR_5) |
     FUNC_5(VAR_43->db2, VAR_6) |
     FUNC_5(VAR_43->ob_cck, VAR_7) |
     FUNC_5(VAR_43->ob_psk, VAR_9) |
     FUNC_5(VAR_43->ob_qam, VAR_10) |
     FUNC_5(VAR_43->ob_pal_off, VAR_8));

 FUNC_6(VAR_40, VAR_4, VAR_45);

 FUNC_3(VAR_40, VAR_23,
        VAR_37, VAR_43->txFrameToDataStart);
 FUNC_3(VAR_40, VAR_23,
        VAR_38, VAR_43->txFrameToPaOn);

 FUNC_7(VAR_40, VAR_11,
      VAR_12,
      VAR_13,
      VAR_43->xpaBiasLvl);
}
