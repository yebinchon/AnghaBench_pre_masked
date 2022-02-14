
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct modal_eep_ar9287_header {scalar_t__ ht40PowerIncForPdadc; } ;
struct ath_regulatory {scalar_t__ max_power_level; } ;
struct TYPE_4__ {int version; } ;
struct ar9287_eeprom {TYPE_2__ baseEepHeader; struct modal_eep_ar9287_header modalHeader; } ;
struct TYPE_3__ {struct ar9287_eeprom map9287; } ;
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
 int VAR_13 ;
 int FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_7 (struct ath_hw*,int ) ;
 struct ath_regulatory* FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*,scalar_t__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (scalar_t__*,int ,int) ;
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
 size_t VAR_50 ;

__attribute__((used)) static void FUNC_13(struct ath_hw *VAR_51,
     struct ath9k_channel *VAR_52, u16 VAR_53,
     u8 VAR_54,
     u8 VAR_55, bool VAR_56)
{
 struct ath_regulatory *VAR_57 = FUNC_8(VAR_51);
 struct ar9287_eeprom *VAR_58 = &VAR_51->eeprom.map9287;
 struct modal_eep_ar9287_header *VAR_59 = &VAR_58->modalHeader;
 int16_t VAR_60[VAR_12];
 u8 VAR_61 = 2;
 int VAR_62;

 FUNC_12(VAR_60, 0, sizeof(VAR_60));

 if ((VAR_58->baseEepHeader.version & VAR_1) >=
     VAR_0)
  VAR_61 = VAR_59->ht40PowerIncForPdadc;

 FUNC_10(VAR_51, VAR_52,
       &VAR_60[0], VAR_53,
       VAR_54,
       VAR_55);

 FUNC_9(VAR_51, VAR_52);

 VAR_57->max_power_level = 0;
 for (VAR_62 = 0; VAR_62 < FUNC_0(VAR_60); VAR_62++) {
  if (VAR_60[VAR_62] > VAR_14)
   VAR_60[VAR_62] = VAR_14;

  if (VAR_60[VAR_62] > VAR_57->max_power_level)
   VAR_57->max_power_level = VAR_60[VAR_62];
 }

 FUNC_11(VAR_51);

 if (VAR_56)
  return;

 for (VAR_62 = 0; VAR_62 < VAR_12; VAR_62++)
  VAR_60[VAR_62] -= VAR_2 * 2;

 FUNC_2(VAR_51);


 FUNC_6(VAR_51, VAR_3,
    FUNC_1(VAR_60[VAR_18], 24)
    | FUNC_1(VAR_60[VAR_17], 16)
    | FUNC_1(VAR_60[VAR_29], 8)
    | FUNC_1(VAR_60[VAR_28], 0));

 FUNC_6(VAR_51, VAR_4,
    FUNC_1(VAR_60[VAR_25], 24)
    | FUNC_1(VAR_60[VAR_24], 16)
    | FUNC_1(VAR_60[VAR_23], 8)
    | FUNC_1(VAR_60[VAR_20], 0));


 if (FUNC_3(VAR_52)) {
  FUNC_6(VAR_51, VAR_5,
     FUNC_1(VAR_60[VAR_22], 24)
     | FUNC_1(VAR_60[VAR_21], 16)
     | FUNC_1(VAR_60[VAR_50], 8)
     | FUNC_1(VAR_60[VAR_19], 0));
  FUNC_6(VAR_51, VAR_6,
     FUNC_1(VAR_60[VAR_16], 24)
     | FUNC_1(VAR_60[VAR_15], 16)
     | FUNC_1(VAR_60[VAR_27], 8)
     | FUNC_1(VAR_60[VAR_26], 0));
 }


 FUNC_6(VAR_51, VAR_7,
    FUNC_1(VAR_60[VAR_37], 24)
    | FUNC_1(VAR_60[VAR_36], 16)
    | FUNC_1(VAR_60[VAR_35], 8)
    | FUNC_1(VAR_60[VAR_34], 0));

 FUNC_6(VAR_51, VAR_8,
    FUNC_1(VAR_60[VAR_41], 24)
    | FUNC_1(VAR_60[VAR_40], 16)
    | FUNC_1(VAR_60[VAR_39], 8)
    | FUNC_1(VAR_60[VAR_38], 0));


 if (FUNC_4(VAR_52)) {
  if (FUNC_7(VAR_51, VAR_13)) {
   FUNC_6(VAR_51, VAR_9,
      FUNC_1(VAR_60[VAR_45], 24)
      | FUNC_1(VAR_60[VAR_44], 16)
      | FUNC_1(VAR_60[VAR_43], 8)
      | FUNC_1(VAR_60[VAR_42], 0));

   FUNC_6(VAR_51, VAR_10,
      FUNC_1(VAR_60[VAR_49], 24)
      | FUNC_1(VAR_60[VAR_48], 16)
      | FUNC_1(VAR_60[VAR_47], 8)
      | FUNC_1(VAR_60[VAR_46], 0));
  } else {
   FUNC_6(VAR_51, VAR_9,
      FUNC_1(VAR_60[VAR_45] +
            VAR_61, 24)
      | FUNC_1(VAR_60[VAR_44] +
       VAR_61, 16)
      | FUNC_1(VAR_60[VAR_43] +
       VAR_61, 8)
      | FUNC_1(VAR_60[VAR_42] +
       VAR_61, 0));

   FUNC_6(VAR_51, VAR_10,
      FUNC_1(VAR_60[VAR_49] +
            VAR_61, 24)
      | FUNC_1(VAR_60[VAR_48] +
       VAR_61, 16)
      | FUNC_1(VAR_60[VAR_47] +
       VAR_61, 8)
      | FUNC_1(VAR_60[VAR_46] +
       VAR_61, 0));
  }


  FUNC_6(VAR_51, VAR_11,
     FUNC_1(VAR_60[VAR_33], 24)
     | FUNC_1(VAR_60[VAR_32], 16)
     | FUNC_1(VAR_60[VAR_31], 8)
     | FUNC_1(VAR_60[VAR_30], 0));
 }
 FUNC_5(VAR_51);
}
