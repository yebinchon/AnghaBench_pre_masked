
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {int rev; int channel_freq; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_4__ phy; int wl; } ;
struct TYPE_7__ {int center_freq; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int* rssical_radio_regs_2G; int* rssical_phy_regs_2G; int* rssical_radio_regs_5G; int* rssical_phy_regs_5G; } ;
struct b43_phy_n {TYPE_3__ rssical_chanspec_5G; TYPE_2__ rssical_chanspec_2G; TYPE_1__ rssical_cache; } ;
typedef int s32 ;


 int FUNC_0 (int*) ;
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
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int,int*,int) ;
 int FUNC_7 (struct b43_wldev*,int*) ;
 int FUNC_8 (struct b43_wldev*,int ,int,int) ;
 int FUNC_9 (struct b43_wldev*,int,int,int ,int) ;
 int FUNC_10 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_11 (struct b43_wldev*,int*) ;
 int FUNC_12 (struct b43_wldev*,int,int) ;
 int FUNC_13 (struct b43_wldev*,int) ;
 int FUNC_14 (struct b43_wldev*,int,int) ;
 int FUNC_15 (struct b43_wldev*,int,int) ;
 int FUNC_16 (struct b43_wldev*,int,int,int) ;
 int FUNC_17 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_18(struct b43_wldev *VAR_40)
{
 struct b43_phy_n *VAR_41 = VAR_40->phy.n;

 u16 VAR_42[2];
 u16 VAR_43[13];
 u16 VAR_44[] = {
  VAR_6, VAR_5,
  VAR_3, VAR_4,
  VAR_30, VAR_14,
  VAR_29, VAR_31,
  VAR_7,
  VAR_12, VAR_13,
  VAR_15, VAR_16
 };

 u16 VAR_45;

 u16 VAR_46[2];
 u16 VAR_47[2] = { 0xFFFF, 0xFFFF };

 u8 VAR_48 = 0;
 s32 VAR_49[4];
 s32 VAR_50[8][4] = { };
 s32 VAR_51[4] = { };
 s32 VAR_52[4] = { };

 u16 *VAR_53 = ((void*)0);
 u16 *VAR_54 = ((void*)0);

 u16 VAR_55;
 u8 VAR_56;
 int VAR_57, VAR_58, VAR_59, VAR_60;

 VAR_45 = FUNC_3(VAR_40, 0, 0);
 FUNC_3(VAR_40, 7, 4);
 FUNC_7(VAR_40, VAR_46);
 FUNC_11(VAR_40, VAR_47);

 VAR_42[0] = FUNC_13(VAR_40, VAR_10);
 VAR_42[1] = FUNC_13(VAR_40, VAR_11);
 for (VAR_58 = 0; VAR_58 < FUNC_0(VAR_44); VAR_58++)
  VAR_43[VAR_58] = FUNC_13(VAR_40, VAR_44[VAR_58]);

 FUNC_8(VAR_40, VAR_35, 0, 7);
 FUNC_8(VAR_40, VAR_36, 1, 7);
 FUNC_9(VAR_40, 0x1, 0, 0, 0);
 FUNC_9(VAR_40, 0x2, 1, 0, 0);
 FUNC_9(VAR_40, 0x80, 1, 0, 0);
 FUNC_9(VAR_40, 0x40, 1, 0, 0);

 if (FUNC_2(VAR_40->wl) == VAR_34) {
  FUNC_9(VAR_40, 0x20, 0, 0, 0);
  FUNC_9(VAR_40, 0x10, 1, 0, 0);
 } else {
  FUNC_9(VAR_40, 0x10, 0, 0, 0);
  FUNC_9(VAR_40, 0x20, 1, 0, 0);
 }

 VAR_56 = FUNC_5(VAR_40);
 for (VAR_57 = 0; VAR_57 < 2; VAR_57++) {
  if (!(VAR_56 & (1 << VAR_57)))
   continue;
  VAR_55 = VAR_57 ? VAR_1 : VAR_0;
  FUNC_10(VAR_40, 0, 0, VAR_57 + 1, VAR_37,
        VAR_39);
  FUNC_10(VAR_40, 0, 0, VAR_57 + 1, VAR_38,
        VAR_39);


  for (VAR_60 = 0; VAR_60 < 8; VAR_60++) {
   FUNC_16(VAR_40, VAR_55 | VAR_2, 0xE3,
     VAR_60 << 2);
   FUNC_6(VAR_40, VAR_39, VAR_50[VAR_60], 8);
  }


  for (VAR_58 = 0; VAR_58 < 4; VAR_58 += 2) {
   s32 VAR_61;
   s32 VAR_62 = 0x100000;
   s32 VAR_63 = 249;
   u8 VAR_64 = 0;
   if (2 * VAR_57 != VAR_58)
    continue;
   for (VAR_60 = 0; VAR_60 < 8; VAR_60++) {
    VAR_61 = VAR_50[VAR_60][VAR_58] * VAR_50[VAR_60][VAR_58] +
     VAR_50[VAR_60][VAR_58 + 1] * VAR_50[VAR_60][VAR_58];
    if (VAR_61 < VAR_62) {
     VAR_62 = VAR_61;
     VAR_64 = VAR_60;
    }
    if (VAR_50[VAR_60][VAR_58] < VAR_63)
     VAR_63 = VAR_50[VAR_60][VAR_58];
   }
   VAR_48 = VAR_64;
   VAR_51[VAR_58] = VAR_63;
  }


  FUNC_16(VAR_40, VAR_55 | VAR_2, 0xE3,
      VAR_48 << 2);

  for (VAR_58 = 0; VAR_58 < 4; VAR_58++) {
   if (VAR_57 != VAR_58 / 2)
    continue;
   VAR_49[VAR_58] = -VAR_50[VAR_48][VAR_58];
   if (VAR_49[VAR_58] < 0)
    VAR_49[VAR_58] = -((FUNC_1(VAR_49[VAR_58]) + 4) / 8);
   else
    VAR_49[VAR_58] = (VAR_49[VAR_58] + 4) / 8;
   if (VAR_51[VAR_58] == 248)
    VAR_49[VAR_58] = -32;
   FUNC_10(VAR_40, 0, VAR_49[VAR_58],
         (VAR_58 / 2 == 0) ? 1 : 2,
         (VAR_58 % 2 == 0) ? VAR_37 : VAR_38,
         VAR_39);
  }
 }

 for (VAR_57 = 0; VAR_57 < 2; VAR_57++) {
  if (!(VAR_56 & (1 << VAR_57)))
   continue;
  for (VAR_58 = 0; VAR_58 < 2; VAR_58++) {
   FUNC_10(VAR_40, 0, 0, VAR_57 + 1,
         VAR_37, VAR_58);
   FUNC_10(VAR_40, 0, 0, VAR_57 + 1,
         VAR_38, VAR_58);
   FUNC_6(VAR_40, VAR_58, VAR_52, 8);
   for (VAR_59 = 0; VAR_59 < 4; VAR_59++) {
    if (VAR_59 / 2 == VAR_57) {
     VAR_49[VAR_59] = 232 - VAR_52[VAR_59];
     if (VAR_49[VAR_59] < 0)
      VAR_49[VAR_59] = -(FUNC_1(VAR_49[VAR_59] + 4) / 8);
     else
      VAR_49[VAR_59] = (VAR_49[VAR_59] + 4) / 8;
     FUNC_10(VAR_40, 0,
      VAR_49[2 * VAR_57], VAR_57 + 1, VAR_59 % 2, VAR_58);
    }
   }
  }
 }

 FUNC_15(VAR_40, VAR_10, VAR_42[0]);
 FUNC_15(VAR_40, VAR_11, VAR_42[1]);

 FUNC_4(VAR_40, VAR_32);

 FUNC_14(VAR_40, VAR_30, 0x1);
 FUNC_14(VAR_40, VAR_7, VAR_9);
 FUNC_12(VAR_40, VAR_30, ~0x1);

 FUNC_14(VAR_40, VAR_14, 0x1);
 FUNC_14(VAR_40, VAR_7, VAR_8);
 FUNC_12(VAR_40, VAR_30, ~0x1);

 for (VAR_58 = 0; VAR_58 < FUNC_0(VAR_44); VAR_58++)
  FUNC_15(VAR_40, VAR_44[VAR_58], VAR_43[VAR_58]);


 if (FUNC_2(VAR_40->wl) == VAR_33) {
  VAR_53 = VAR_41->rssical_cache.rssical_radio_regs_2G;
  VAR_54 = VAR_41->rssical_cache.rssical_phy_regs_2G;
 } else {
  VAR_53 = VAR_41->rssical_cache.rssical_radio_regs_5G;
  VAR_54 = VAR_41->rssical_cache.rssical_phy_regs_5G;
 }
 if (VAR_40->phy.rev >= 7) {
 } else {
  VAR_53[0] = FUNC_17(VAR_40, VAR_0 |
             VAR_2);
  VAR_53[1] = FUNC_17(VAR_40, VAR_1 |
             VAR_2);
 }
 VAR_54[0] = FUNC_13(VAR_40, VAR_19);
 VAR_54[1] = FUNC_13(VAR_40, VAR_22);
 VAR_54[2] = FUNC_13(VAR_40, VAR_25);
 VAR_54[3] = FUNC_13(VAR_40, VAR_28);
 VAR_54[4] = FUNC_13(VAR_40, VAR_17);
 VAR_54[5] = FUNC_13(VAR_40, VAR_20);
 VAR_54[6] = FUNC_13(VAR_40, VAR_23);
 VAR_54[7] = FUNC_13(VAR_40, VAR_26);
 VAR_54[8] = FUNC_13(VAR_40, VAR_18);
 VAR_54[9] = FUNC_13(VAR_40, VAR_21);
 VAR_54[10] = FUNC_13(VAR_40, VAR_24);
 VAR_54[11] = FUNC_13(VAR_40, VAR_27);


 if (FUNC_2(VAR_40->wl) == VAR_33)
  VAR_41->rssical_chanspec_2G.center_freq = VAR_40->phy.channel_freq;
 else
  VAR_41->rssical_chanspec_5G.center_freq = VAR_40->phy.channel_freq;


 FUNC_3(VAR_40, 7, VAR_45);
 FUNC_11(VAR_40, VAR_46);
}
