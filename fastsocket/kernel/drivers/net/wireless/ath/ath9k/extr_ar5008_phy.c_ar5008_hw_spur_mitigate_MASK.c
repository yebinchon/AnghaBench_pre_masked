
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath9k_channel {int channel; } ;
typedef int int8_t ;
struct TYPE_2__ {int (* get_spur_channel ) (struct ath_hw*,int,int) ;} ;


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



 int FUNC_0 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_32 ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (int**,int ,int) ;
 int FUNC_7 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_33,
        struct ath9k_channel *VAR_34)
{
 int VAR_35 = VAR_1;
 int VAR_36, VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41, VAR_42, VAR_43;
 int VAR_44, VAR_45;
 int VAR_46;
 static int VAR_47[4] = {
  130, 129,
  133, 132
 };
 static int VAR_48[4] = {
  128, 131,
  135, 134
 };
 static int VAR_49[4] = { 0, 100, 0, 0 };

 int8_t VAR_50[123];
 int8_t VAR_51[123];
 int8_t VAR_52;
 int VAR_53;
 int VAR_54;
 bool VAR_55 = FUNC_1(VAR_34);

 FUNC_6(&VAR_50, 0, sizeof(int8_t) * 123);
 FUNC_6(&VAR_51, 0, sizeof(int8_t) * 123);

 for (VAR_46 = 0; VAR_46 < VAR_0; VAR_46++) {
  VAR_54 = VAR_33->eep_ops->get_spur_channel(VAR_33, VAR_46, VAR_55);
  if (VAR_1 == VAR_54)
   break;
  VAR_54 = VAR_54 - (VAR_34->channel * 10);
  if ((VAR_54 > -95) && (VAR_54 < 95)) {
   VAR_35 = VAR_54;
   break;
  }
 }

 if (VAR_1 == VAR_35)
  return;

 VAR_36 = VAR_35 * 32;

 VAR_44 = FUNC_2(VAR_33, FUNC_0(0));
 VAR_45 = VAR_44 | (VAR_30 |
       VAR_29 |
       VAR_27 |
       VAR_28);

 FUNC_3(VAR_33, FUNC_0(0), VAR_45);

 VAR_45 = (VAR_20 |
        VAR_18 |
        VAR_21 |
        VAR_19 |
        FUNC_4(VAR_32, VAR_22));
 FUNC_3(VAR_33, VAR_17, VAR_45);

 VAR_39 = ((VAR_35 * 524288) / 100) &
  VAR_24;

 VAR_40 = FUNC_1(VAR_34) ? 440 : 400;
 VAR_38 = ((VAR_35 * 2048) / VAR_40) & 0x3ff;

 VAR_45 = (VAR_26 |
        FUNC_4(VAR_38, VAR_25) |
        FUNC_4(VAR_39, VAR_24));
 FUNC_3(VAR_33, VAR_23, VAR_45);

 VAR_37 = -6000;
 VAR_41 = VAR_36 + 100;
 VAR_42 = VAR_36 - 100;

 for (VAR_46 = 0; VAR_46 < 4; VAR_46++) {
  int VAR_56 = 0;
  int VAR_57 = 0;
  int VAR_58 = 0;
  for (VAR_58 = 0; VAR_58 < 30; VAR_58++) {
   if ((VAR_37 > VAR_42) && (VAR_37 < VAR_41)) {
    VAR_56 = VAR_56 | 0x1 << VAR_58;
    VAR_57 = VAR_57 | 0x1 << VAR_58;
   }
   VAR_37 += 100;
  }
  VAR_37 += VAR_49[VAR_46];
  FUNC_3(VAR_33, VAR_47[VAR_46], VAR_56);
  FUNC_3(VAR_33, VAR_48[VAR_46], VAR_57);
 }

 VAR_43 = 6100;
 VAR_41 = VAR_36 + 120;
 VAR_42 = VAR_36 - 120;

 for (VAR_46 = 0; VAR_46 < 123; VAR_46++) {
  if ((VAR_43 > VAR_42) && (VAR_43 < VAR_41)) {


   volatile int VAR_59 = FUNC_5(VAR_43 - VAR_36);

   if (VAR_59 < 75)
    VAR_52 = 1;
   else
    VAR_52 = 0;
   if (VAR_43 < 0)
    VAR_50[FUNC_5(VAR_43 / 100)] = VAR_52;
   else
    VAR_51[VAR_43 / 100] = VAR_52;
  }
  VAR_43 -= 100;
 }

 VAR_53 = (VAR_50[46] << 30) | (VAR_50[47] << 28)
  | (VAR_50[48] << 26) | (VAR_50[49] << 24)
  | (VAR_50[50] << 22) | (VAR_50[51] << 20)
  | (VAR_50[52] << 18) | (VAR_50[53] << 16)
  | (VAR_50[54] << 14) | (VAR_50[55] << 12)
  | (VAR_50[56] << 10) | (VAR_50[57] << 8)
  | (VAR_50[58] << 6) | (VAR_50[59] << 4)
  | (VAR_50[60] << 2) | (VAR_50[61] << 0);
 FUNC_3(VAR_33, VAR_6, VAR_53);
 FUNC_3(VAR_33, VAR_31, VAR_53);

 VAR_53 = (VAR_50[31] << 28)
  | (VAR_50[32] << 26) | (VAR_50[33] << 24)
  | (VAR_50[34] << 22) | (VAR_50[35] << 20)
  | (VAR_50[36] << 18) | (VAR_50[37] << 16)
  | (VAR_50[48] << 14) | (VAR_50[39] << 12)
  | (VAR_50[40] << 10) | (VAR_50[41] << 8)
  | (VAR_50[42] << 6) | (VAR_50[43] << 4)
  | (VAR_50[44] << 2) | (VAR_50[45] << 0);
 FUNC_3(VAR_33, VAR_7, VAR_53);
 FUNC_3(VAR_33, VAR_11, VAR_53);

 VAR_53 = (VAR_50[16] << 30) | (VAR_50[16] << 28)
  | (VAR_50[18] << 26) | (VAR_50[18] << 24)
  | (VAR_50[20] << 22) | (VAR_50[20] << 20)
  | (VAR_50[22] << 18) | (VAR_50[22] << 16)
  | (VAR_50[24] << 14) | (VAR_50[24] << 12)
  | (VAR_50[25] << 10) | (VAR_50[26] << 8)
  | (VAR_50[27] << 6) | (VAR_50[28] << 4)
  | (VAR_50[29] << 2) | (VAR_50[30] << 0);
 FUNC_3(VAR_33, VAR_8, VAR_53);
 FUNC_3(VAR_33, VAR_10, VAR_53);

 VAR_53 = (VAR_50[0] << 30) | (VAR_50[1] << 28)
  | (VAR_50[2] << 26) | (VAR_50[3] << 24)
  | (VAR_50[4] << 22) | (VAR_50[5] << 20)
  | (VAR_50[6] << 18) | (VAR_50[7] << 16)
  | (VAR_50[8] << 14) | (VAR_50[9] << 12)
  | (VAR_50[10] << 10) | (VAR_50[11] << 8)
  | (VAR_50[12] << 6) | (VAR_50[13] << 4)
  | (VAR_50[14] << 2) | (VAR_50[15] << 0);
 FUNC_3(VAR_33, VAR_16, VAR_53);
 FUNC_3(VAR_33, VAR_9, VAR_53);

 VAR_53 = (VAR_51[15] << 28)
  | (VAR_51[14] << 26) | (VAR_51[13] << 24)
  | (VAR_51[12] << 22) | (VAR_51[11] << 20)
  | (VAR_51[10] << 18) | (VAR_51[9] << 16)
  | (VAR_51[8] << 14) | (VAR_51[7] << 12)
  | (VAR_51[6] << 10) | (VAR_51[5] << 8)
  | (VAR_51[4] << 6) | (VAR_51[3] << 4)
  | (VAR_51[2] << 2) | (VAR_51[1] << 0);
 FUNC_3(VAR_33, VAR_2, VAR_53);
 FUNC_3(VAR_33, VAR_12, VAR_53);

 VAR_53 = (VAR_51[30] << 28)
  | (VAR_51[29] << 26) | (VAR_51[28] << 24)
  | (VAR_51[27] << 22) | (VAR_51[26] << 20)
  | (VAR_51[25] << 18) | (VAR_51[24] << 16)
  | (VAR_51[23] << 14) | (VAR_51[22] << 12)
  | (VAR_51[21] << 10) | (VAR_51[20] << 8)
  | (VAR_51[19] << 6) | (VAR_51[18] << 4)
  | (VAR_51[17] << 2) | (VAR_51[16] << 0);
 FUNC_3(VAR_33, VAR_3, VAR_53);
 FUNC_3(VAR_33, VAR_13, VAR_53);

 VAR_53 = (VAR_51[45] << 28)
  | (VAR_51[44] << 26) | (VAR_51[43] << 24)
  | (VAR_51[42] << 22) | (VAR_51[41] << 20)
  | (VAR_51[40] << 18) | (VAR_51[39] << 16)
  | (VAR_51[38] << 14) | (VAR_51[37] << 12)
  | (VAR_51[36] << 10) | (VAR_51[35] << 8)
  | (VAR_51[34] << 6) | (VAR_51[33] << 4)
  | (VAR_51[32] << 2) | (VAR_51[31] << 0);
 FUNC_3(VAR_33, VAR_4, VAR_53);
 FUNC_3(VAR_33, VAR_14, VAR_53);

 VAR_53 = (VAR_51[61] << 30) | (VAR_51[60] << 28)
  | (VAR_51[59] << 26) | (VAR_51[58] << 24)
  | (VAR_51[57] << 22) | (VAR_51[56] << 20)
  | (VAR_51[55] << 18) | (VAR_51[54] << 16)
  | (VAR_51[53] << 14) | (VAR_51[52] << 12)
  | (VAR_51[51] << 10) | (VAR_51[50] << 8)
  | (VAR_51[49] << 6) | (VAR_51[48] << 4)
  | (VAR_51[47] << 2) | (VAR_51[46] << 0);
 FUNC_3(VAR_33, VAR_5, VAR_53);
 FUNC_3(VAR_33, VAR_15, VAR_53);
}
