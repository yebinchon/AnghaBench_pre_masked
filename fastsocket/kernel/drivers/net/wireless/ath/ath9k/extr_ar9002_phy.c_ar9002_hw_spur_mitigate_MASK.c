
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct chan_centers {int synth_center; } ;
struct TYPE_3__ {int spurmode; } ;
struct ath_hw {TYPE_2__* eep_ops; TYPE_1__ config; } ;
struct ath9k_channel {int dummy; } ;
typedef int int8_t ;
struct TYPE_4__ {int (* get_spur_channel ) (struct ath_hw*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;


 int const VAR_21 ;
 int VAR_22 ;
 int const VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

 int const VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;



 int const FUNC_0 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int const VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;
 int FUNC_6 (struct ath_hw*,int const) ;
 int FUNC_7 (struct ath_hw*,int const,int) ;
 int FUNC_8 (int,int) ;
 int VAR_40 ;
 int VAR_41 ;
 size_t FUNC_9 (int) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_11 (int**,int ,int) ;
 int FUNC_12 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_13(struct ath_hw *VAR_42,
        struct ath9k_channel *VAR_43)
{
 int VAR_44 = VAR_3;
 int VAR_45;
 int VAR_46, VAR_47;
 int VAR_48, VAR_49;
 int VAR_50;
 int VAR_51;
 int VAR_52;
 int VAR_53, VAR_54, VAR_55;
 int VAR_56, VAR_57;
 int VAR_58;
 static const int VAR_59[4] = {
  130, 129,
  133, 132
 };
 static const int VAR_60[4] = {
  128, 131,
  135, 134
 };
 static const int VAR_61[4] = { 0, 100, 0, 0 };
 struct chan_centers VAR_62;

 int8_t VAR_63[123];
 int8_t VAR_64[123];
 int8_t VAR_65;
 int VAR_66;
 int VAR_67;
 bool VAR_68 = FUNC_2(VAR_43);

 FUNC_11(&VAR_63, 0, sizeof(int8_t) * 123);
 FUNC_11(&VAR_64, 0, sizeof(int8_t) * 123);

 FUNC_10(VAR_42, VAR_43, &VAR_62);
 VAR_45 = VAR_62.synth_center;

 VAR_42->config.spurmode = VAR_40;
 for (VAR_58 = 0; VAR_58 < VAR_2; VAR_58++) {
  VAR_67 = VAR_42->eep_ops->get_spur_channel(VAR_42, VAR_58, VAR_68);

  if (VAR_3 == VAR_67)
   break;

  if (VAR_68)
   VAR_67 = (VAR_67 / 10) + VAR_0;
  else
   VAR_67 = (VAR_67 / 10) + VAR_1;

  VAR_67 = VAR_67 - VAR_45;

  if (FUNC_3(VAR_43)) {
   if ((VAR_67 > -VAR_39) &&
       (VAR_67 < VAR_39)) {
    VAR_44 = VAR_67;
    break;
   }
  } else if ((VAR_67 > -VAR_38) &&
      (VAR_67 < VAR_38)) {
   VAR_44 = VAR_67;
   break;
  }
 }

 if (VAR_3 == VAR_44) {
  FUNC_5(VAR_42, VAR_11,
       VAR_12);
  return;
 } else {
  FUNC_5(VAR_42, VAR_11,
       VAR_12);
 }

 VAR_46 = VAR_44 * 320;

 VAR_56 = FUNC_6(VAR_42, FUNC_0(0));

 FUNC_1(VAR_42);

 VAR_57 = VAR_56 | (VAR_36 |
   VAR_35 |
   VAR_33 |
   VAR_34);
 FUNC_7(VAR_42, FUNC_0(0), VAR_57);

 VAR_57 = (VAR_26 |
    VAR_24 |
    VAR_27 |
    VAR_25 |
    FUNC_8(VAR_41, VAR_28));
 FUNC_7(VAR_42, VAR_23, VAR_57);

 if (FUNC_3(VAR_43)) {
  if (VAR_44 < 0) {
   VAR_49 = 1;
   VAR_48 = VAR_44 + 10;
  } else {
   VAR_49 = 0;
   VAR_48 = VAR_44 - 10;
  }
 } else {
  VAR_49 = 0;
  VAR_48 = VAR_44;
 }

 if (FUNC_3(VAR_43))
  VAR_51 =
   ((VAR_44 * 262144) /
    10) & VAR_30;
 else
  VAR_51 =
   ((VAR_44 * 524288) /
    10) & VAR_30;

 VAR_52 = FUNC_2(VAR_43) ? 44 : 40;
 VAR_50 = ((VAR_48 * 2048) / VAR_52) & 0x3ff;

 VAR_57 = (VAR_32 |
    FUNC_8(VAR_50, VAR_31) |
    FUNC_8(VAR_51, VAR_30));
 FUNC_7(VAR_42, VAR_29, VAR_57);

 VAR_57 = VAR_49 << VAR_22;
 FUNC_7(VAR_42, VAR_21, VAR_57);

 VAR_47 = -6000;
 VAR_53 = VAR_46 + 100;
 VAR_54 = VAR_46 - 100;

 for (VAR_58 = 0; VAR_58 < 4; VAR_58++) {
  int VAR_69 = 0;
  int VAR_70 = 0;
  int VAR_71 = 0;
  for (VAR_71 = 0; VAR_71 < 30; VAR_71++) {
   if ((VAR_47 > VAR_54) && (VAR_47 < VAR_53)) {
    VAR_69 = VAR_69 | 0x1 << VAR_71;
    VAR_70 = VAR_70 | 0x1 << VAR_71;
   }
   VAR_47 += 100;
  }
  VAR_47 += VAR_61[VAR_58];
  FUNC_7(VAR_42, VAR_59[VAR_58], VAR_69);
  FUNC_7(VAR_42, VAR_60[VAR_58], VAR_70);
 }

 VAR_55 = 6100;
 VAR_53 = VAR_46 + 120;
 VAR_54 = VAR_46 - 120;

 for (VAR_58 = 0; VAR_58 < 123; VAR_58++) {
  if ((VAR_55 > VAR_54) && (VAR_55 < VAR_53)) {


   volatile int VAR_72 = FUNC_9(VAR_55 - VAR_46);

   if (VAR_72 < 75)
    VAR_65 = 1;
   else
    VAR_65 = 0;
   if (VAR_55 < 0)
    VAR_63[FUNC_9(VAR_55 / 100)] = VAR_65;
   else
    VAR_64[VAR_55 / 100] = VAR_65;
  }
  VAR_55 -= 100;
 }

 VAR_66 = (VAR_63[46] << 30) | (VAR_63[47] << 28)
  | (VAR_63[48] << 26) | (VAR_63[49] << 24)
  | (VAR_63[50] << 22) | (VAR_63[51] << 20)
  | (VAR_63[52] << 18) | (VAR_63[53] << 16)
  | (VAR_63[54] << 14) | (VAR_63[55] << 12)
  | (VAR_63[56] << 10) | (VAR_63[57] << 8)
  | (VAR_63[58] << 6) | (VAR_63[59] << 4)
  | (VAR_63[60] << 2) | (VAR_63[61] << 0);
 FUNC_7(VAR_42, VAR_8, VAR_66);
 FUNC_7(VAR_42, VAR_37, VAR_66);

 VAR_66 = (VAR_63[31] << 28)
  | (VAR_63[32] << 26) | (VAR_63[33] << 24)
  | (VAR_63[34] << 22) | (VAR_63[35] << 20)
  | (VAR_63[36] << 18) | (VAR_63[37] << 16)
  | (VAR_63[48] << 14) | (VAR_63[39] << 12)
  | (VAR_63[40] << 10) | (VAR_63[41] << 8)
  | (VAR_63[42] << 6) | (VAR_63[43] << 4)
  | (VAR_63[44] << 2) | (VAR_63[45] << 0);
 FUNC_7(VAR_42, VAR_9, VAR_66);
 FUNC_7(VAR_42, VAR_15, VAR_66);

 VAR_66 = (VAR_63[16] << 30) | (VAR_63[16] << 28)
  | (VAR_63[18] << 26) | (VAR_63[18] << 24)
  | (VAR_63[20] << 22) | (VAR_63[20] << 20)
  | (VAR_63[22] << 18) | (VAR_63[22] << 16)
  | (VAR_63[24] << 14) | (VAR_63[24] << 12)
  | (VAR_63[25] << 10) | (VAR_63[26] << 8)
  | (VAR_63[27] << 6) | (VAR_63[28] << 4)
  | (VAR_63[29] << 2) | (VAR_63[30] << 0);
 FUNC_7(VAR_42, VAR_10, VAR_66);
 FUNC_7(VAR_42, VAR_14, VAR_66);

 VAR_66 = (VAR_63[0] << 30) | (VAR_63[1] << 28)
  | (VAR_63[2] << 26) | (VAR_63[3] << 24)
  | (VAR_63[4] << 22) | (VAR_63[5] << 20)
  | (VAR_63[6] << 18) | (VAR_63[7] << 16)
  | (VAR_63[8] << 14) | (VAR_63[9] << 12)
  | (VAR_63[10] << 10) | (VAR_63[11] << 8)
  | (VAR_63[12] << 6) | (VAR_63[13] << 4)
  | (VAR_63[14] << 2) | (VAR_63[15] << 0);
 FUNC_7(VAR_42, VAR_20, VAR_66);
 FUNC_7(VAR_42, VAR_13, VAR_66);

 VAR_66 = (VAR_64[15] << 28)
  | (VAR_64[14] << 26) | (VAR_64[13] << 24)
  | (VAR_64[12] << 22) | (VAR_64[11] << 20)
  | (VAR_64[10] << 18) | (VAR_64[9] << 16)
  | (VAR_64[8] << 14) | (VAR_64[7] << 12)
  | (VAR_64[6] << 10) | (VAR_64[5] << 8)
  | (VAR_64[4] << 6) | (VAR_64[3] << 4)
  | (VAR_64[2] << 2) | (VAR_64[1] << 0);
 FUNC_7(VAR_42, VAR_4, VAR_66);
 FUNC_7(VAR_42, VAR_16, VAR_66);

 VAR_66 = (VAR_64[30] << 28)
  | (VAR_64[29] << 26) | (VAR_64[28] << 24)
  | (VAR_64[27] << 22) | (VAR_64[26] << 20)
  | (VAR_64[25] << 18) | (VAR_64[24] << 16)
  | (VAR_64[23] << 14) | (VAR_64[22] << 12)
  | (VAR_64[21] << 10) | (VAR_64[20] << 8)
  | (VAR_64[19] << 6) | (VAR_64[18] << 4)
  | (VAR_64[17] << 2) | (VAR_64[16] << 0);
 FUNC_7(VAR_42, VAR_5, VAR_66);
 FUNC_7(VAR_42, VAR_17, VAR_66);

 VAR_66 = (VAR_64[45] << 28)
  | (VAR_64[44] << 26) | (VAR_64[43] << 24)
  | (VAR_64[42] << 22) | (VAR_64[41] << 20)
  | (VAR_64[40] << 18) | (VAR_64[39] << 16)
  | (VAR_64[38] << 14) | (VAR_64[37] << 12)
  | (VAR_64[36] << 10) | (VAR_64[35] << 8)
  | (VAR_64[34] << 6) | (VAR_64[33] << 4)
  | (VAR_64[32] << 2) | (VAR_64[31] << 0);
 FUNC_7(VAR_42, VAR_6, VAR_66);
 FUNC_7(VAR_42, VAR_18, VAR_66);

 VAR_66 = (VAR_64[61] << 30) | (VAR_64[60] << 28)
  | (VAR_64[59] << 26) | (VAR_64[58] << 24)
  | (VAR_64[57] << 22) | (VAR_64[56] << 20)
  | (VAR_64[55] << 18) | (VAR_64[54] << 16)
  | (VAR_64[53] << 14) | (VAR_64[52] << 12)
  | (VAR_64[51] << 10) | (VAR_64[50] << 8)
  | (VAR_64[49] << 6) | (VAR_64[48] << 4)
  | (VAR_64[47] << 2) | (VAR_64[46] << 0);
 FUNC_7(VAR_42, VAR_7, VAR_66);
 FUNC_7(VAR_42, VAR_19, VAR_66);

 FUNC_4(VAR_42);
}
