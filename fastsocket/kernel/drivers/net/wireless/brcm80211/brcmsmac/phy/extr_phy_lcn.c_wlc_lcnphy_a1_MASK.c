
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lcnphy_unsign16_struct {int re; int im; } ;
struct lcnphy_spb_tone {int re; int im; } ;
struct brcms_phy {int dummy; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 struct lcnphy_spb_tone* VAR_2 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (int) ;
 struct lcnphy_unsign16_struct FUNC_7 (struct brcms_phy*,int) ;
 int FUNC_8 (struct brcms_phy*,int,int,int*,int) ;
 int FUNC_9 (struct brcms_phy*,int,int,int) ;
 int FUNC_10 (struct brcms_phy*,int,int,int ) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int*) ;
 int FUNC_13 (struct brcms_phy*,int*) ;
 int FUNC_14 (struct brcms_phy*,int,int) ;
 int FUNC_15 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_16(struct brcms_phy *VAR_3, int VAR_4, int VAR_5,
       int VAR_6)
{
 const struct lcnphy_spb_tone *VAR_7;
 struct lcnphy_spb_tone VAR_8;
 struct lcnphy_unsign16_struct VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u16 VAR_16, VAR_17, VAR_18;
 s16 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 s16 *VAR_26, VAR_27;
 s32 VAR_28, VAR_29;
 u32 VAR_30, VAR_31;
 bool VAR_32, VAR_33, VAR_34, VAR_35;
 u16 VAR_36, VAR_37;
 u16 VAR_38, VAR_39, VAR_40;
 u16 VAR_41;
 u16 *VAR_42;
 VAR_31 = 0;
 VAR_19 = VAR_22 = VAR_23 = VAR_17 = 0;
 VAR_26 = FUNC_1(sizeof(s16) * 131, VAR_0);
 if (((void*)0) == VAR_26)
  return;

 VAR_42 = FUNC_1(sizeof(u16) * 20, VAR_0);
 if (((void*)0) == VAR_42) {
  FUNC_0(VAR_26);
  return;
 }
 VAR_36 = FUNC_4(VAR_3, 0x6da);
 VAR_37 = FUNC_4(VAR_3, 0x6db);
 VAR_41 = FUNC_5(VAR_3, VAR_1);
 FUNC_14(VAR_3, 0x93d, 0xC0);

 FUNC_10(VAR_3, 3750, 88, 0);
 FUNC_14(VAR_3, 0x6da, 0xffff);
 FUNC_3(VAR_3, 0x6db, 0x3);

 FUNC_12(VAR_3, VAR_42);
 FUNC_6(500);
 VAR_38 = FUNC_4(VAR_3, 0x938);
 VAR_39 = FUNC_4(VAR_3, 0x4d7);
 VAR_40 = FUNC_4(VAR_3, 0x4d8);
 FUNC_3(VAR_3, 0x938, 0x1 << 2);
 FUNC_3(VAR_3, 0x4d7, 0x1 << 2);
 FUNC_3(VAR_3, 0x4d7, 0x1 << 3);
 FUNC_2(VAR_3, 0x4d7, (0x7 << 12), 0x2 << 12);
 FUNC_3(VAR_3, 0x4d8, 1 << 0);
 FUNC_3(VAR_3, 0x4d8, 1 << 1);
 FUNC_2(VAR_3, 0x4d8, (0x3ff << 2), 0x23A << 2);
 FUNC_2(VAR_3, 0x4d8, (0x7 << 12), 0x7 << 12);
 VAR_7 = &VAR_2[0];
 VAR_10 = 32;

 if (VAR_5 == 0) {
  if (VAR_4 != 0)
   VAR_5 = 4;
  else
   VAR_5 = 9;
 }
 if (VAR_6 == 0) {
  if (VAR_4 != 0)
   VAR_6 = 3;
  else
   VAR_6 = 8;
 }

 VAR_16 = (1 << VAR_6);
 VAR_9 = FUNC_7(VAR_3, VAR_4);
 VAR_24 = (s16) VAR_9;
 VAR_25 = (s16) VAR_9;
 if (VAR_4 == 2) {
  if (VAR_9 > 127)
   VAR_24 = VAR_9 - 256;
  if (VAR_9 > 127)
   VAR_25 = VAR_9 - 256;
 }
 FUNC_9(VAR_3, VAR_4, VAR_24, VAR_25);
 FUNC_6(20);
 for (VAR_17 = 0; VAR_16 != 0 && VAR_17 < VAR_5; VAR_17++) {
  VAR_33 = 1;
  VAR_32 = 0;
  switch (VAR_4) {
  case 0:
   VAR_19 = 511;
   break;
  case 2:
   VAR_19 = 127;
   break;
  case 3:
   VAR_19 = 15;
   break;
  case 4:
   VAR_19 = 15;
   break;
  }

  VAR_18 = FUNC_4(VAR_3, 0x93d);
  VAR_18 = 2 * VAR_18;
  VAR_34 = 0;
  VAR_11 = 7;
  VAR_35 = 1;
  while (1) {
   FUNC_15(VAR_3, VAR_1,
     (VAR_11 & 0x7) | ((VAR_11 & 0x7) << 4));
   FUNC_6(50);
   VAR_32 = 0;
   VAR_26[130] = 0;
   FUNC_8(VAR_3, 1, VAR_18, &VAR_26[0], 2);
   if (VAR_26[130] == 1)
    VAR_32 = 1;
   if (VAR_32)
    VAR_11 -= 1;
   if ((VAR_32 != VAR_34) && (!VAR_35))
    break;
   if (!VAR_32)
    VAR_11 += 1;
   if (VAR_11 <= 0 || VAR_11 >= 7)
    break;
   VAR_34 = VAR_32;
   VAR_35 = 0;
  }

  if (VAR_11 < 0)
   VAR_11 = 0;
  else if (VAR_11 > 7)
   VAR_11 = 7;

  for (VAR_12 = -VAR_16; VAR_12 <= VAR_16; VAR_12 += VAR_16) {
   for (VAR_13 = -VAR_16; VAR_13 <= VAR_16; VAR_13 += VAR_16) {
    VAR_20 = VAR_24 + VAR_12;
    VAR_21 = VAR_25 + VAR_13;

    if (VAR_20 < -VAR_19)
     VAR_20 = -VAR_19;
    else if (VAR_20 > VAR_19)
     VAR_20 = VAR_19;
    if (VAR_21 < -VAR_19)
     VAR_21 = -VAR_19;
    else if (VAR_21 > VAR_19)
     VAR_21 = VAR_19;
    FUNC_9(VAR_3, VAR_4, VAR_20,
        VAR_21);
    FUNC_6(20);
    FUNC_8(VAR_3, 0, 0, VAR_26, 2);

    VAR_28 = 0;
    VAR_29 = 0;
    for (VAR_14 = 0; VAR_14 < 128; VAR_14++) {
     if (VAR_4 != 0)
      VAR_15 = VAR_14 % VAR_10;
     else
      VAR_15 = (2 * VAR_14) % VAR_10;

     VAR_8 = VAR_7[VAR_15].re;
     VAR_8 = VAR_7[VAR_15].im;
     VAR_27 = VAR_26[VAR_14];
     VAR_28 = VAR_28 + VAR_27 * VAR_8;
     VAR_29 = VAR_29 + VAR_27 * VAR_8;
    }

    VAR_28 = VAR_28 >> 10;
    VAR_29 = VAR_29 >> 10;
    VAR_30 = ((VAR_28 * VAR_28) +
        (VAR_29 * VAR_29));

    if (VAR_33 || VAR_30 < VAR_31) {
     VAR_31 = VAR_30;
     VAR_22 = VAR_20;
     VAR_23 = VAR_21;
    }
    VAR_33 = 0;
   }
  }
  VAR_33 = 1;
  VAR_24 = VAR_22;
  VAR_25 = VAR_23;
  VAR_16 = VAR_16 >> 1;
  FUNC_9(VAR_3, VAR_4, VAR_24, VAR_25);
  FUNC_6(20);
 }
 goto cleanup;
cleanup:
 FUNC_13(VAR_3, VAR_42);
 FUNC_11(VAR_3);
 FUNC_14(VAR_3, 0x6da, VAR_36);
 FUNC_14(VAR_3, 0x6db, VAR_37);
 FUNC_14(VAR_3, 0x938, VAR_38);
 FUNC_14(VAR_3, 0x4d7, VAR_39);
 FUNC_14(VAR_3, 0x4d8, VAR_40);
 FUNC_15(VAR_3, VAR_1, VAR_41);

 FUNC_0(VAR_42);
 FUNC_0(VAR_26);
}
