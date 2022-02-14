
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct modal_eep_4k_header {int antCtrlCommon; int version; int antdiv_ctl1; int antdiv_ctl2; int ob_0; int ob_1; int ob_2; int ob_3; int ob_4; int db1_0; int db1_1; int db1_2; int db1_3; int db1_4; int db2_0; int db2_1; int db2_2; int db2_3; int db2_4; int txEndToXpaOff; int txFrameToXpaOn; int bb_scale_smrt_antenna; int swSettleHt40; int txFrameToPaOn; int txFrameToDataStart; int thresh62; int txEndToRxOn; int adcDesiredSize; int switchSettling; } ;
struct base_eep_header_4k {int version; scalar_t__ txGainType; } ;
struct ar5416_eeprom_4k {struct base_eep_header_4k baseEepHeader; struct modal_eep_4k_header modalHeader; } ;
struct TYPE_2__ {struct ar5416_eeprom_4k map4k; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int) ;
 int VAR_79 ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int,int) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct ath_hw*,struct modal_eep_4k_header*,struct ar5416_eeprom_4k*,int) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_80,
      struct ath9k_channel *VAR_81)
{
 struct modal_eep_4k_header *VAR_82;
 struct ar5416_eeprom_4k *VAR_83 = &VAR_80->eeprom.map4k;
 struct base_eep_header_4k *VAR_84 = &VAR_83->baseEepHeader;
 u8 VAR_85;
 u8 VAR_86[5], VAR_87[5], VAR_88[5];
 u8 VAR_89, VAR_90;
 u8 VAR_91;
 u32 VAR_92;

 VAR_82 = &VAR_83->modalHeader;
 VAR_85 = 23;

 FUNC_7(VAR_80, VAR_72, VAR_82->antCtrlCommon);


 FUNC_9(VAR_80, VAR_82, VAR_83, VAR_85);


 if (VAR_82->version >= 3) {
  VAR_89 = VAR_82->antdiv_ctl1;
  VAR_90 = VAR_82->antdiv_ctl2;

  VAR_92 = FUNC_4(VAR_80, VAR_62);
  VAR_92 &= (~(VAR_49));

  VAR_92 |= FUNC_8(VAR_89,
        VAR_48);
  VAR_92 |= FUNC_8(VAR_90,
        VAR_47);
  VAR_92 |= FUNC_8((VAR_90 >> 2),
        VAR_51);
  VAR_92 |= FUNC_8((VAR_89 >> 1),
        VAR_46);
  VAR_92 |= FUNC_8((VAR_89 >> 2),
        VAR_50);


  FUNC_7(VAR_80, VAR_62, VAR_92);
  VAR_92 = FUNC_4(VAR_80, VAR_62);
  VAR_92 = FUNC_4(VAR_80, VAR_53);
  VAR_92 &= (~VAR_54);
  VAR_92 |= FUNC_8((VAR_89 >> 3),
        VAR_54);

  FUNC_7(VAR_80, VAR_53, VAR_92);
  VAR_92 = FUNC_4(VAR_80, VAR_53);
 }

 if (VAR_82->version >= 2) {
  VAR_86[0] = VAR_82->ob_0;
  VAR_86[1] = VAR_82->ob_1;
  VAR_86[2] = VAR_82->ob_2;
  VAR_86[3] = VAR_82->ob_3;
  VAR_86[4] = VAR_82->ob_4;

  VAR_87[0] = VAR_82->db1_0;
  VAR_87[1] = VAR_82->db1_1;
  VAR_87[2] = VAR_82->db1_2;
  VAR_87[3] = VAR_82->db1_3;
  VAR_87[4] = VAR_82->db1_4;

  VAR_88[0] = VAR_82->db2_0;
  VAR_88[1] = VAR_82->db2_1;
  VAR_88[2] = VAR_82->db2_2;
  VAR_88[3] = VAR_82->db2_3;
  VAR_88[4] = VAR_82->db2_4;
 } else if (VAR_82->version == 1) {
  VAR_86[0] = VAR_82->ob_0;
  VAR_86[1] = VAR_86[2] = VAR_86[3] = VAR_86[4] = VAR_82->ob_1;
  VAR_87[0] = VAR_82->db1_0;
  VAR_87[1] = VAR_87[2] = VAR_87[3] = VAR_87[4] = VAR_82->db1_1;
  VAR_88[0] = VAR_82->db2_0;
  VAR_88[1] = VAR_88[2] = VAR_88[3] = VAR_88[4] = VAR_82->db2_1;
 } else {
  int VAR_93;

  for (VAR_93 = 0; VAR_93 < 5; VAR_93++) {
   VAR_86[VAR_93] = VAR_82->ob_0;
   VAR_87[VAR_93] = VAR_82->db1_0;
   VAR_88[VAR_93] = VAR_82->db1_0;
  }
 }

 if (FUNC_0(VAR_80)) {
  FUNC_10(VAR_80,
       VAR_14,
       VAR_5,
       VAR_6,
       VAR_86[0]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_7,
       VAR_8,
       VAR_86[1]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_9,
       VAR_10,
       VAR_86[2]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_3,
       VAR_4,
       VAR_87[0]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_11,
       VAR_12,
       VAR_88[0]);
 } else {
  FUNC_10(VAR_80,
       VAR_14,
       VAR_21,
       VAR_22,
       VAR_86[0]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_23,
       VAR_24,
       VAR_86[1]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_25,
       VAR_26,
       VAR_86[2]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_27,
       VAR_28,
       VAR_86[3]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_29,
       VAR_30,
       VAR_86[4]);

  FUNC_10(VAR_80,
       VAR_14,
       VAR_15,
       VAR_16,
       VAR_87[0]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_17,
       VAR_18,
       VAR_87[1]);
  FUNC_10(VAR_80,
       VAR_14,
       VAR_19,
       VAR_20,
       VAR_87[2]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_32,
       VAR_33,
       VAR_87[3]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_34,
       VAR_35, VAR_87[4]);

  FUNC_10(VAR_80,
       VAR_31,
       VAR_36,
       VAR_37,
       VAR_88[0]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_38,
       VAR_39,
       VAR_88[1]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_40,
       VAR_41,
       VAR_88[2]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_42,
       VAR_43,
       VAR_88[3]);
  FUNC_10(VAR_80,
       VAR_31,
       VAR_44,
       VAR_45,
       VAR_88[4]);
 }


 FUNC_6(VAR_80, VAR_70, VAR_71,
        VAR_82->switchSettling);
 FUNC_6(VAR_80, VAR_58, VAR_59,
        VAR_82->adcDesiredSize);

 FUNC_7(VAR_80, VAR_65,
    FUNC_8(VAR_82->txEndToXpaOff, VAR_68) |
    FUNC_8(VAR_82->txEndToXpaOff, VAR_69) |
    FUNC_8(VAR_82->txFrameToXpaOn, VAR_66) |
    FUNC_8(VAR_82->txFrameToXpaOn, VAR_67));

 FUNC_6(VAR_80, VAR_64, VAR_75,
        VAR_82->txEndToRxOn);

 if (FUNC_1(VAR_80))
  FUNC_6(VAR_80, VAR_64, VAR_75,
         VAR_82->txEndToRxOn);
 FUNC_6(VAR_80, VAR_52, VAR_13,
        VAR_82->thresh62);
 FUNC_6(VAR_80, VAR_60, VAR_61,
        VAR_82->thresh62);

 if ((VAR_83->baseEepHeader.version & VAR_2) >=
      VAR_0) {
  FUNC_6(VAR_80, VAR_63, VAR_73,
         VAR_82->txFrameToDataStart);
  FUNC_6(VAR_80, VAR_63, VAR_74,
         VAR_82->txFrameToPaOn);
 }

 if ((VAR_83->baseEepHeader.version & VAR_2) >=
      VAR_1) {
  if (FUNC_3(VAR_81))
   FUNC_6(VAR_80, VAR_70,
          VAR_71,
          VAR_82->swSettleHt40);
 }

 VAR_91 = (VAR_82->bb_scale_smrt_antenna &
   VAR_79);
 if ((VAR_84->txGainType == 0) && (VAR_91 != 0)) {
  u32 VAR_94, VAR_95, VAR_96;

  VAR_95 = FUNC_2(0)|FUNC_2(5)|FUNC_2(10)|FUNC_2(15)|FUNC_2(20)|FUNC_2(25);
  VAR_94 = VAR_95 * VAR_91;
  VAR_96 = VAR_95 * 0x1f;
  FUNC_5(VAR_80, VAR_77, VAR_94, VAR_96);
  FUNC_5(VAR_80, VAR_76, VAR_94, VAR_96);
  FUNC_5(VAR_80, VAR_56, VAR_94, VAR_96);

  VAR_95 = FUNC_2(0)|FUNC_2(5)|FUNC_2(15);
  VAR_94 = VAR_95 * VAR_91;
  VAR_96 = VAR_95 * 0x1f;
  FUNC_5(VAR_80, VAR_78, VAR_94, VAR_96);

  VAR_95 = FUNC_2(0)|FUNC_2(5);
  VAR_94 = VAR_95 * VAR_91;
  VAR_96 = VAR_95 * 0x1f;
  FUNC_5(VAR_80, VAR_55, VAR_94, VAR_96);
  FUNC_5(VAR_80, VAR_57, VAR_94, VAR_96);
 }
}
