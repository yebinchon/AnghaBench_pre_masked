
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct modal_eep_header {scalar_t__ ht40PowerIncForPdadc; scalar_t__ pwrDecreaseFor3Chain; scalar_t__ pwrDecreaseFor2Chain; } ;
struct ath_regulatory {scalar_t__ max_power_level; } ;
struct TYPE_5__ {int version; } ;
struct ar5416_eeprom_def {TYPE_2__ baseEepHeader; struct modal_eep_header* modalHeader; } ;
struct TYPE_4__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {TYPE_3__* eep_ops; TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;
typedef int ratesArray ;
typedef int int8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_6__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
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
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_8 (size_t) ;
 struct ath_regulatory* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_11 (struct ath_hw*,struct ath9k_channel*,scalar_t__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (scalar_t__*,int ,int) ;
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
 size_t VAR_50 ;
 size_t VAR_51 ;
 int FUNC_14 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_15(struct ath_hw *VAR_52,
        struct ath9k_channel *VAR_53,
        u16 VAR_54,
        u8 VAR_55,
        u8 VAR_56, bool VAR_57)
{

 struct ath_regulatory *VAR_58 = FUNC_9(VAR_52);
 struct ar5416_eeprom_def *VAR_59 = &VAR_52->eeprom.def;
 struct modal_eep_header *VAR_60 =
  &(VAR_59->modalHeader[FUNC_4(VAR_53)]);
 int16_t VAR_61[VAR_12];
 u8 VAR_62 = 2;
 int VAR_63, VAR_64 = 0;

 FUNC_13(VAR_61, 0, sizeof(VAR_61));

 if ((VAR_59->baseEepHeader.version & VAR_1) >=
     VAR_0) {
  VAR_62 = VAR_60->ht40PowerIncForPdadc;
 }

 FUNC_11(VAR_52, VAR_53,
            &VAR_61[0], VAR_54,
            VAR_55,
            VAR_56);

 FUNC_10(VAR_52, VAR_53);

 VAR_58->max_power_level = 0;
 for (VAR_63 = 0; VAR_63 < FUNC_0(VAR_61); VAR_63++) {
  if (VAR_61[VAR_63] > VAR_14)
   VAR_61[VAR_63] = VAR_14;
  if (VAR_61[VAR_63] > VAR_58->max_power_level)
   VAR_58->max_power_level = VAR_61[VAR_63];
 }

 FUNC_12(VAR_52);

 if (VAR_57)
  return;

 if (FUNC_1(VAR_52)) {
  for (VAR_63 = 0; VAR_63 < VAR_12; VAR_63++) {
   int8_t VAR_65;

   VAR_65 = VAR_52->eep_ops->get_eeprom(VAR_52,
       VAR_13);
   VAR_61[VAR_63] -= VAR_65 * 2;
  }
 }

 FUNC_3(VAR_52);

 FUNC_7(VAR_52, VAR_2,
    FUNC_2(VAR_61[VAR_19], 24)
    | FUNC_2(VAR_61[VAR_18], 16)
    | FUNC_2(VAR_61[VAR_30], 8)
    | FUNC_2(VAR_61[VAR_29], 0));
 FUNC_7(VAR_52, VAR_3,
    FUNC_2(VAR_61[VAR_26], 24)
    | FUNC_2(VAR_61[VAR_25], 16)
    | FUNC_2(VAR_61[VAR_24], 8)
    | FUNC_2(VAR_61[VAR_21], 0));

 if (FUNC_4(VAR_53)) {
  if (VAR_15) {
   VAR_64 = 2;
   FUNC_7(VAR_52, VAR_4,
    FUNC_2((VAR_61[VAR_23] - VAR_64), 24)
    | FUNC_2((VAR_61[VAR_22] - VAR_64), 16)
    | FUNC_2(VAR_61[VAR_51], 8)
    | FUNC_2((VAR_61[VAR_20] - VAR_64), 0));
   FUNC_7(VAR_52, VAR_5,
    FUNC_2((VAR_61[VAR_17] - VAR_64), 24)
    | FUNC_2((VAR_61[VAR_16] - VAR_64), 16)
    | FUNC_2((VAR_61[VAR_28] - VAR_64), 8)
    | FUNC_2((VAR_61[VAR_27] - VAR_64), 0));
  } else {
   FUNC_7(VAR_52, VAR_4,
    FUNC_2(VAR_61[VAR_23], 24)
    | FUNC_2(VAR_61[VAR_22], 16)
    | FUNC_2(VAR_61[VAR_51], 8)
    | FUNC_2(VAR_61[VAR_20], 0));
   FUNC_7(VAR_52, VAR_5,
    FUNC_2(VAR_61[VAR_17], 24)
    | FUNC_2(VAR_61[VAR_16], 16)
    | FUNC_2(VAR_61[VAR_28], 8)
    | FUNC_2(VAR_61[VAR_27], 0));
  }
 }

 FUNC_7(VAR_52, VAR_6,
    FUNC_2(VAR_61[VAR_38], 24)
    | FUNC_2(VAR_61[VAR_37], 16)
    | FUNC_2(VAR_61[VAR_36], 8)
    | FUNC_2(VAR_61[VAR_35], 0));
 FUNC_7(VAR_52, VAR_7,
    FUNC_2(VAR_61[VAR_42], 24)
    | FUNC_2(VAR_61[VAR_41], 16)
    | FUNC_2(VAR_61[VAR_40], 8)
    | FUNC_2(VAR_61[VAR_39], 0));

 if (FUNC_5(VAR_53)) {
  FUNC_7(VAR_52, VAR_8,
     FUNC_2(VAR_61[VAR_46] +
           VAR_62, 24)
     | FUNC_2(VAR_61[VAR_45] +
      VAR_62, 16)
     | FUNC_2(VAR_61[VAR_44] +
      VAR_62, 8)
     | FUNC_2(VAR_61[VAR_43] +
      VAR_62, 0));
  FUNC_7(VAR_52, VAR_9,
     FUNC_2(VAR_61[VAR_50] +
           VAR_62, 24)
     | FUNC_2(VAR_61[VAR_49] +
      VAR_62, 16)
     | FUNC_2(VAR_61[VAR_48] +
      VAR_62, 8)
     | FUNC_2(VAR_61[VAR_47] +
      VAR_62, 0));
  if (VAR_15) {
   FUNC_7(VAR_52, VAR_10,
    FUNC_2(VAR_61[VAR_34], 24)
    | FUNC_2((VAR_61[VAR_33] - VAR_64), 16)
    | FUNC_2(VAR_61[VAR_32], 8)
    | FUNC_2((VAR_61[VAR_31] - VAR_64), 0));
  } else {
   FUNC_7(VAR_52, VAR_10,
    FUNC_2(VAR_61[VAR_34], 24)
    | FUNC_2(VAR_61[VAR_33], 16)
    | FUNC_2(VAR_61[VAR_32], 8)
    | FUNC_2(VAR_61[VAR_31], 0));
  }
 }

 FUNC_7(VAR_52, VAR_11,
    FUNC_2(VAR_60->pwrDecreaseFor3Chain, 6)
    | FUNC_2(VAR_60->pwrDecreaseFor2Chain, 0));

 FUNC_6(VAR_52);
}
