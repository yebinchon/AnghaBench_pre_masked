
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct modal_eep_4k_header {scalar_t__ ht40PowerIncForPdadc; } ;
struct ath_regulatory {scalar_t__ max_power_level; } ;
struct TYPE_4__ {int version; } ;
struct ar5416_eeprom_4k {TYPE_2__ baseEepHeader; struct modal_eep_4k_header modalHeader; } ;
struct TYPE_3__ {struct ar5416_eeprom_4k map4k; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;
typedef int ratesArray ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_12 ;
 int FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 struct ath_regulatory* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_8 (struct ath_hw*,struct ath9k_channel*,scalar_t__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__*,int ,int) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;

__attribute__((used)) static void FUNC_10(struct ath_hw *VAR_50,
        struct ath9k_channel *VAR_51,
        u16 VAR_52,
        u8 VAR_53,
        u8 VAR_54, bool VAR_55)
{
 struct ath_regulatory *VAR_56 = FUNC_6(VAR_50);
 struct ar5416_eeprom_4k *VAR_57 = &VAR_50->eeprom.map4k;
 struct modal_eep_4k_header *VAR_58 = &VAR_57->modalHeader;
 int16_t VAR_59[VAR_12];
 u8 VAR_60 = 2;
 int VAR_61;

 FUNC_9(VAR_59, 0, sizeof(VAR_59));

 if ((VAR_57->baseEepHeader.version & VAR_1) >=
     VAR_0) {
  VAR_60 = VAR_58->ht40PowerIncForPdadc;
 }

 FUNC_8(VAR_50, VAR_51,
          &VAR_59[0], VAR_52,
          VAR_53,
          VAR_54);

 FUNC_7(VAR_50, VAR_51);

 VAR_56->max_power_level = 0;
 for (VAR_61 = 0; VAR_61 < FUNC_0(VAR_59); VAR_61++) {
  if (VAR_59[VAR_61] > VAR_13)
   VAR_59[VAR_61] = VAR_13;

  if (VAR_59[VAR_61] > VAR_56->max_power_level)
   VAR_56->max_power_level = VAR_59[VAR_61];
 }

 if (VAR_55)
     return;

 for (VAR_61 = 0; VAR_61 < VAR_12; VAR_61++)
  VAR_59[VAR_61] -= VAR_2 * 2;

 FUNC_2(VAR_50);


 FUNC_5(VAR_50, VAR_3,
    FUNC_1(VAR_59[VAR_17], 24)
    | FUNC_1(VAR_59[VAR_16], 16)
    | FUNC_1(VAR_59[VAR_28], 8)
    | FUNC_1(VAR_59[VAR_27], 0));
 FUNC_5(VAR_50, VAR_4,
    FUNC_1(VAR_59[VAR_24], 24)
    | FUNC_1(VAR_59[VAR_23], 16)
    | FUNC_1(VAR_59[VAR_22], 8)
    | FUNC_1(VAR_59[VAR_19], 0));


 FUNC_5(VAR_50, VAR_5,
    FUNC_1(VAR_59[VAR_21], 24)
    | FUNC_1(VAR_59[VAR_20], 16)
    | FUNC_1(VAR_59[VAR_49], 8)
    | FUNC_1(VAR_59[VAR_18], 0));
 FUNC_5(VAR_50, VAR_6,
    FUNC_1(VAR_59[VAR_15], 24)
    | FUNC_1(VAR_59[VAR_14], 16)
    | FUNC_1(VAR_59[VAR_26], 8)
    | FUNC_1(VAR_59[VAR_25], 0));


 FUNC_5(VAR_50, VAR_7,
    FUNC_1(VAR_59[VAR_36], 24)
    | FUNC_1(VAR_59[VAR_35], 16)
    | FUNC_1(VAR_59[VAR_34], 8)
    | FUNC_1(VAR_59[VAR_33], 0));
 FUNC_5(VAR_50, VAR_8,
    FUNC_1(VAR_59[VAR_40], 24)
    | FUNC_1(VAR_59[VAR_39], 16)
    | FUNC_1(VAR_59[VAR_38], 8)
    | FUNC_1(VAR_59[VAR_37], 0));


 if (FUNC_3(VAR_51)) {
  FUNC_5(VAR_50, VAR_9,
     FUNC_1(VAR_59[VAR_44] +
           VAR_60, 24)
     | FUNC_1(VAR_59[VAR_43] +
      VAR_60, 16)
     | FUNC_1(VAR_59[VAR_42] +
      VAR_60, 8)
     | FUNC_1(VAR_59[VAR_41] +
      VAR_60, 0));
  FUNC_5(VAR_50, VAR_10,
     FUNC_1(VAR_59[VAR_48] +
           VAR_60, 24)
     | FUNC_1(VAR_59[VAR_47] +
      VAR_60, 16)
     | FUNC_1(VAR_59[VAR_46] +
      VAR_60, 8)
     | FUNC_1(VAR_59[VAR_45] +
      VAR_60, 0));
  FUNC_5(VAR_50, VAR_11,
     FUNC_1(VAR_59[VAR_32], 24)
     | FUNC_1(VAR_59[VAR_31], 16)
     | FUNC_1(VAR_59[VAR_30], 8)
     | FUNC_1(VAR_59[VAR_29], 0));
 }

 FUNC_4(VAR_50);
}
