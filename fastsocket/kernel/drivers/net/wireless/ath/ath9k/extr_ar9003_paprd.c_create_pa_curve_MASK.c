
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int y_est ;
typedef int x_tilde ;
typedef int x_est ;
typedef int u32 ;
typedef int u16 ;
typedef int theta ;
typedef unsigned int s32 ;
typedef int Y ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static bool FUNC_4(u32 *VAR_2, u32 *VAR_3, u32 *VAR_4, u16 *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7[VAR_0 + 1], VAR_8[VAR_0 + 1], VAR_9[VAR_0 + 1];
 int VAR_10[VAR_0 + 1];
 int VAR_11[VAR_0 + 1], VAR_12[VAR_0 + 1];
 unsigned int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17[VAR_0 + 1];
 int VAR_18, VAR_19[VAR_0 + 1];
 unsigned int VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45;
 int VAR_46, VAR_47, VAR_48;
 int VAR_49 = 0;
 int VAR_50;


 VAR_6 = 16;
 VAR_16 = 5;
 VAR_15 = 0;
 FUNC_3(VAR_9, 0, sizeof(VAR_9));
 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 FUNC_3(VAR_8, 0, sizeof(VAR_8));
 FUNC_3(VAR_17, 0, sizeof(VAR_17));
 FUNC_3(VAR_19, 0, sizeof(VAR_19));

 for (VAR_50 = 0; VAR_50 < VAR_0; VAR_50++) {
  s32 VAR_51, VAR_52, VAR_53, VAR_54;


  VAR_51 = VAR_2[VAR_50] & 0xffff;

  if (VAR_51 <= VAR_6)
   continue;


  VAR_52 = ((VAR_2[VAR_50] >> 16) & 0xffff) |
      ((VAR_3[VAR_50] & 0x7ff) << 16);


  VAR_53 = ((VAR_3[VAR_50] >> 11) & 0x1f) |
      ((VAR_2[VAR_50 + 23] & 0xffff) << 5);


  VAR_54 = ((VAR_2[VAR_50 + 23] >> 16) & 0xffff) |
      ((VAR_3[VAR_50 + 23] & 0x7ff) << 16);

  VAR_52 <<= VAR_16;
  VAR_53 <<= VAR_16;
  VAR_7[VAR_50 + 1] = (((VAR_52 + VAR_51) / VAR_51) + 32) >>
      VAR_16;

  VAR_8[VAR_50 + 1] = ((((VAR_53 + VAR_51) / VAR_51) + 32) >>
       VAR_16) +
       (1 << VAR_16) * VAR_15 + 16;

  if (VAR_54 >= (1 << 26))
   VAR_54 -= 1 << 27;

  VAR_9[VAR_50 + 1] = ((VAR_54 * (1 << VAR_16)) + VAR_51) /
      VAR_51;

  VAR_15++;
 }





 for (VAR_50 = 1; VAR_50 < 6; VAR_50++)
  VAR_49 += VAR_9[VAR_50];

 VAR_49 = VAR_49 / 5;
 for (VAR_50 = 1; VAR_50 < 6; VAR_50++)
  VAR_9[VAR_50] = VAR_49;


 VAR_9[0] = VAR_49;
 for (VAR_50 = 0; VAR_50 <= VAR_15; VAR_50++)
  VAR_9[VAR_50] -= VAR_49;

 VAR_7[0] = 0;
 VAR_8[0] = 0;
 VAR_16 = 8;


 if (VAR_7[6] == VAR_7[3])
  return 0;

 VAR_21 =
     (((VAR_8[6] - VAR_8[3]) * 1 << VAR_16) +
      (VAR_7[6] - VAR_7[3])) / (VAR_7[6] - VAR_7[3]);


 if (VAR_21 == 0)
  return 0;

 VAR_22 =
     (VAR_21 * (VAR_7[0] - VAR_7[3]) +
      (1 << VAR_16)) / (1 << VAR_16) + VAR_8[3];

 for (VAR_50 = 0; VAR_50 <= VAR_15; VAR_50++)
  VAR_17[VAR_50] = VAR_8[VAR_50] - VAR_22;

 for (VAR_50 = 0; VAR_50 <= 3; VAR_50++) {
  VAR_17[VAR_50] = VAR_50 * 32;
  VAR_7[VAR_50] = ((VAR_17[VAR_50] * 1 << VAR_16) + VAR_21) / VAR_21;
 }

 if (VAR_17[VAR_15] == 0)
  return 0;

 VAR_18 =
     VAR_7[VAR_15] - ((1 << VAR_16) * VAR_17[VAR_15] +
    VAR_21) / VAR_21;

 VAR_23 =
     (VAR_18 + VAR_17[VAR_15]) / VAR_17[VAR_15];

 if (VAR_23 == 0)
  VAR_24 = 10;
 else if (VAR_23 == 1)
  VAR_24 = 9;
 else
  VAR_24 = 8;

 VAR_25 = (VAR_15 > 15) ? 7 : VAR_15 >> 1;
 VAR_26 = VAR_15 - VAR_25;
 VAR_16 = 8;
 VAR_27 = 0;
 VAR_28 = 0;
 VAR_20 = 0;

 for (VAR_50 = 0; VAR_50 <= VAR_26; VAR_50++) {
  unsigned int VAR_55;
  unsigned int VAR_56;
  unsigned int VAR_57;


  if (VAR_17[VAR_50 + VAR_25] == 0)
   return 0;

  VAR_18 =
      VAR_7[VAR_50 + VAR_25] - ((1 << VAR_16) * VAR_17[VAR_50 + VAR_25] +
        VAR_21) / VAR_21;

  VAR_19[VAR_50] =
      (VAR_18 * (1 << VAR_24) + VAR_17[VAR_50 + VAR_25]) / VAR_17[VAR_50 +
           VAR_25];
  VAR_19[VAR_50] =
      (VAR_19[VAR_50] * (1 << VAR_24) + VAR_17[VAR_50 + VAR_25]) / VAR_17[VAR_50 + VAR_25];
  VAR_19[VAR_50] =
      (VAR_19[VAR_50] * (1 << VAR_24) + VAR_17[VAR_50 + VAR_25]) / VAR_17[VAR_50 + VAR_25];
  VAR_55 =
      (VAR_17[VAR_50 + VAR_25] * VAR_17[VAR_50 + VAR_25] +
       (VAR_16 * VAR_16)) / (VAR_16 *
             VAR_16);
  VAR_57 = FUNC_0(VAR_19[VAR_50]);
  if (VAR_57 > VAR_20)
   VAR_20 = VAR_57;

  VAR_56 = VAR_55 * VAR_55;
  VAR_27 = VAR_27 + VAR_55;
  VAR_28 = VAR_28 + VAR_56;
  VAR_11[VAR_50] = VAR_55 * (VAR_26 + 1);
  VAR_12[VAR_50] = VAR_55;
 }

 VAR_13 = 0;
 VAR_14 = 0;
 for (VAR_50 = 0; VAR_50 <= VAR_26; VAR_50++) {
  int VAR_58;

  VAR_11[VAR_50] -= VAR_27;
  VAR_12[VAR_50] = VAR_28 - VAR_27 * VAR_12[VAR_50];

  VAR_58 = FUNC_0(VAR_11[VAR_50]);
  if (VAR_58 > VAR_13)
   VAR_13 = VAR_58;

  VAR_58 = FUNC_0(VAR_12[VAR_50]);
  if (VAR_58 > VAR_14)
   VAR_14 = VAR_58;
 }

 VAR_29 = FUNC_2(FUNC_1(VAR_20), 10);
 VAR_30 = FUNC_2(FUNC_1(VAR_13), 10);
 VAR_31 = FUNC_2(FUNC_1(VAR_14), 10);

 VAR_32 = 0;
 VAR_33 = 0;
 for (VAR_50 = 0; VAR_50 <= VAR_26; VAR_50++) {
  VAR_19[VAR_50] = VAR_19[VAR_50] / (1 << VAR_29);
  VAR_11[VAR_50] = VAR_11[VAR_50] / (1 << VAR_30);
  VAR_12[VAR_50] = VAR_12[VAR_50] / (1 << VAR_31);
  VAR_32 = VAR_32 + VAR_11[VAR_50] * VAR_19[VAR_50];
  VAR_33 = VAR_33 + VAR_12[VAR_50] * VAR_19[VAR_50];
 }

 VAR_34 =
     ((VAR_28 / VAR_16) * (VAR_26 + 1) -
      (VAR_27 / VAR_16) * VAR_27) * VAR_16;

 VAR_35 = FUNC_2(FUNC_1(FUNC_0(VAR_34)), 10);
 VAR_34 = VAR_34 / (1 << VAR_35);
 if (VAR_34 == 0)
  return 0;
 VAR_36 = FUNC_2(FUNC_1(FUNC_0(VAR_32)), 10);
 VAR_37 = FUNC_2(FUNC_1(FUNC_0(VAR_33)), 10);
 VAR_32 = VAR_32 / (1 << VAR_36);
 VAR_33 = VAR_33 / (1 << VAR_37);
 VAR_38 = (VAR_33 << 10) / VAR_34;
 VAR_39 = (VAR_32 << 10) / VAR_34;
 VAR_40 = 3 * VAR_24 - VAR_29 - VAR_30 - VAR_36 + 10 + VAR_35;
 VAR_41 = 3 * VAR_24 - VAR_29 - VAR_31 - VAR_37 + 10 + VAR_35;
 VAR_42 = VAR_40 / 5;
 VAR_43 = VAR_41 / 3;
 VAR_44 = VAR_40 - 5 * VAR_42;
 VAR_45 = VAR_41 - 3 * VAR_43;

 for (VAR_50 = 0; VAR_50 < VAR_1; VAR_50++) {
  VAR_48 = VAR_50 * 32;
  VAR_46 = ((VAR_39 * VAR_48) >> 6) >> VAR_42;
  VAR_46 = (VAR_46 * VAR_48) >> VAR_42;
  VAR_46 = (VAR_46 * VAR_48) >> VAR_42;
  VAR_46 = (VAR_46 * VAR_48) >> VAR_42;
  VAR_46 = (VAR_46 * VAR_48) >> VAR_42;
  VAR_46 = VAR_46 >> VAR_44;
  VAR_47 = (VAR_38 * VAR_48) >> VAR_43;
  VAR_47 = (VAR_47 * VAR_48) >> VAR_43;
  VAR_47 = (VAR_47 * VAR_48) >> VAR_43;
  VAR_47 = VAR_47 >> VAR_45;
  VAR_10[VAR_50] = VAR_46 + VAR_47 + (256 * VAR_48) / VAR_21;

  if (VAR_50 >= 2) {
   VAR_48 = VAR_10[VAR_50] - VAR_10[VAR_50 - 1];
   if (VAR_48 < 0)
    VAR_10[VAR_50] =
        VAR_10[VAR_50 - 1] + (VAR_10[VAR_50 - 1] -
          VAR_10[VAR_50 - 2]);
  }

  VAR_10[VAR_50] = (VAR_10[VAR_50] < 1400) ? VAR_10[VAR_50] : 1400;
 }

 VAR_32 = 0;
 VAR_33 = 0;

 for (VAR_50 = 0; VAR_50 <= VAR_26; VAR_50++) {
  int VAR_59 =
      ((VAR_9[VAR_50 + VAR_25] << VAR_24) + VAR_17[VAR_50 + VAR_25]) / VAR_17[VAR_50 + VAR_25];
  VAR_59 =
      ((VAR_59 << VAR_24) + VAR_17[VAR_50 + VAR_25]) / VAR_17[VAR_50 + VAR_25];
  VAR_59 =
      ((VAR_59 << VAR_24) + VAR_17[VAR_50 + VAR_25]) / VAR_17[VAR_50 + VAR_25];
  VAR_32 = VAR_32 + VAR_11[VAR_50] * VAR_59;
  VAR_33 = VAR_33 + VAR_12[VAR_50] * VAR_59;
 }

 VAR_36 = FUNC_2(FUNC_1(FUNC_0(VAR_32)), 10);
 VAR_37 = FUNC_2(FUNC_1(FUNC_0(VAR_33)), 10);
 VAR_32 = VAR_32 / (1 << VAR_36);
 VAR_33 = VAR_33 / (1 << VAR_37);

 VAR_38 = (VAR_33 << 10) / VAR_34;
 VAR_39 = (VAR_32 << 10) / VAR_34;
 VAR_40 = 3 * VAR_24 - VAR_29 - VAR_30 - VAR_36 + 10 + VAR_35 + 5;
 VAR_41 = 3 * VAR_24 - VAR_29 - VAR_31 - VAR_37 + 10 + VAR_35 + 5;
 VAR_42 = VAR_40 / 5;
 VAR_43 = VAR_41 / 3;
 VAR_44 = VAR_40 - 5 * VAR_42;
 VAR_45 = VAR_41 - 3 * VAR_43;

 for (VAR_50 = 0; VAR_50 < VAR_1; VAR_50++) {
  int VAR_60;


  if (VAR_50 == 4)
   continue;

  VAR_48 = VAR_50 * 32;
  if (VAR_39 > 0)
   VAR_46 = (((VAR_39 * VAR_48 - 64) >> 6) -
         (1 << VAR_42)) / (1 << VAR_42);
  else
   VAR_46 = ((((VAR_39 * VAR_48 - 64) >> 6) +
          (1 << VAR_42)) / (1 << VAR_42));

  VAR_46 = (VAR_46 * VAR_48) / (1 << VAR_42);
  VAR_46 = (VAR_46 * VAR_48) / (1 << VAR_42);
  VAR_46 = (VAR_46 * VAR_48) / (1 << VAR_42);
  VAR_46 = (VAR_46 * VAR_48) / (1 << VAR_42);
  VAR_46 = VAR_46 / (1 << VAR_44);

  if (VAR_39 > 0)
   VAR_47 = (VAR_38 * VAR_48 -
         (1 << VAR_43)) / (1 << VAR_43);
  else
   VAR_47 = (VAR_38 * VAR_48 +
         (1 << VAR_43)) / (1 << VAR_43);
  VAR_47 = (VAR_47 * VAR_48) / (1 << VAR_43);
  VAR_47 = (VAR_47 * VAR_48) / (1 << VAR_43);
  VAR_47 = VAR_47 / (1 << VAR_45);

  if (VAR_50 < 4) {
   VAR_60 = 0;
  } else {
   VAR_60 = VAR_46 + VAR_47;
   if (VAR_60 < -150)
    VAR_60 = -150;
   else if (VAR_60 > 150)
    VAR_60 = 150;
  }

  VAR_4[VAR_50] = ((VAR_10[VAR_50] & 0x7ff) << 11) + (VAR_60 & 0x7ff);
  if (VAR_50 == 5) {
   VAR_60 = (VAR_60 + 2) >> 1;
   VAR_4[VAR_50 - 1] = ((VAR_10[VAR_50 - 1] & 0x7ff) << 11) +
       (VAR_60 & 0x7ff);
  }
 }

 *VAR_5 = VAR_21;
 return 1;
}
