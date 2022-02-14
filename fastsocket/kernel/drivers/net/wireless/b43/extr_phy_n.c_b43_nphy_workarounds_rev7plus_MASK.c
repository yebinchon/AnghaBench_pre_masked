
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_sprom {int boardflags2_hi; scalar_t__ revision; } ;
struct b43_phy {int rev; int radio_rev; int channel_freq; scalar_t__ is_40mhz; } ;
struct b43_wldev {int wl; struct b43_phy phy; TYPE_1__* dev; } ;
struct TYPE_2__ {struct ssb_sprom* bus_sprom; } ;


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
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 scalar_t__ FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int,int,int,int,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int*,int*,int ) ;
 int FUNC_9 (struct b43_wldev*,int ) ;
 int FUNC_10 (struct b43_wldev*,int ,int) ;
 int FUNC_11 (struct b43_wldev*,int ,int,int*) ;
 int FUNC_12 (struct b43_wldev*,int ,int) ;
 int FUNC_13 (struct b43_wldev*,int ,int,int) ;
 int FUNC_14 (struct b43_wldev*,int ,int) ;
 int FUNC_15 (struct b43_wldev*,int,int) ;
 int FUNC_16 (struct b43_wldev*,int) ;
 int FUNC_17 (struct b43_wldev*,int,int) ;
 int FUNC_18 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_19(struct b43_wldev *VAR_21)
{
 struct ssb_sprom *VAR_22 = VAR_21->dev->bus_sprom;
 struct b43_phy *VAR_23 = &VAR_21->phy;

 u8 VAR_24[9] = { 0x0, 0x1, 0x2, 0x8, 0x5, 0x6, 0xF, 0x3,
     0x1F };
 u8 VAR_25[9] = { 8, 6, 6, 4, 4, 16, 43, 1, 1 };

 u16 VAR_26[] = { 0x10f, 0x10f };
 u8 VAR_27[] = { 0x11, 0x11 };
 u8 VAR_28[] = { 0x77, 0x11, 0x11 };

 u16 VAR_29, VAR_30, VAR_31;
 u16 VAR_32, VAR_33, VAR_34, VAR_35;
 u16 VAR_36, VAR_37, VAR_38, VAR_39;
 bool VAR_40 = 0;

 u16 VAR_41, VAR_42, VAR_43;
 u16 VAR_44, VAR_45, VAR_46;

 u32 VAR_47;
 u8 VAR_48;

 if (VAR_23->rev == 7) {
  FUNC_14(VAR_21, VAR_8, 0x10);
  FUNC_13(VAR_21, VAR_11, 0xFF80, 0x0020);
  FUNC_13(VAR_21, VAR_11, 0x80FF, 0x2700);
  FUNC_13(VAR_21, VAR_12, 0xFF80, 0x002E);
  FUNC_13(VAR_21, VAR_12, 0x80FF, 0x3300);
  FUNC_13(VAR_21, VAR_13, 0xFF80, 0x0037);
  FUNC_13(VAR_21, VAR_13, 0x80FF, 0x3A00);
  FUNC_13(VAR_21, VAR_14, 0xFF80, 0x003C);
  FUNC_13(VAR_21, VAR_14, 0x80FF, 0x3E00);
  FUNC_13(VAR_21, VAR_15, 0xFF80, 0x003E);
  FUNC_13(VAR_21, VAR_15, 0x80FF, 0x3F00);
  FUNC_13(VAR_21, VAR_16, 0xFF80, 0x0040);
  FUNC_13(VAR_21, VAR_16, 0x80FF, 0x4000);
  FUNC_13(VAR_21, VAR_17, 0xFF80, 0x0040);
  FUNC_13(VAR_21, VAR_17, 0x80FF, 0x4000);
  FUNC_13(VAR_21, VAR_18, 0xFF80, 0x0040);
  FUNC_13(VAR_21, VAR_18, 0x80FF, 0x4000);
 }
 if (VAR_23->rev <= 8) {
  FUNC_15(VAR_21, VAR_9, 0x1B0);
  FUNC_15(VAR_21, VAR_10, 0x1B0);
 }
 if (VAR_23->rev >= 8)
  FUNC_13(VAR_21, VAR_19, ~0xFF, 0x72);

 FUNC_10(VAR_21, FUNC_1(8, 0x00), 2);
 FUNC_10(VAR_21, FUNC_1(8, 0x10), 2);
 VAR_47 = FUNC_9(VAR_21, FUNC_2(30, 0));
 VAR_47 &= 0xffffff;
 FUNC_10(VAR_21, FUNC_2(30, 0), VAR_47);
 FUNC_11(VAR_21, FUNC_1(7, 0x15e), 2, VAR_26);
 FUNC_11(VAR_21, FUNC_1(7, 0x16e), 2, VAR_26);

 if (FUNC_5(VAR_21))
  FUNC_8(VAR_21, 0, VAR_24,
    VAR_25, FUNC_0(VAR_24));

 FUNC_13(VAR_21, VAR_6, 0x3FFF, 0x4000);
 FUNC_13(VAR_21, VAR_7, 0x3FFF, 0x4000);

 VAR_29 = FUNC_6(VAR_21, 0x154);
 VAR_30 = FUNC_6(VAR_21, 0x159);
 VAR_31 = FUNC_6(VAR_21, 0x152);
 if (FUNC_5(VAR_21)) {
  if ((VAR_23->radio_rev == 5 && VAR_23->is_40mhz) ||
      VAR_23->radio_rev == 7 || VAR_23->radio_rev == 8) {
   VAR_32 = FUNC_16(VAR_21, 0x16b);
   VAR_36 = FUNC_16(VAR_21, 0x16a);
   VAR_37 = VAR_36;
   VAR_33 = VAR_32;
   if (VAR_23->radio_rev == 5 && VAR_23->is_40mhz) {
    VAR_38 = VAR_36;
    VAR_34 = VAR_32;
    VAR_39 = VAR_35 = 0xc;
    VAR_40 = 1;
   } else {
    VAR_29 = 4;
    VAR_31 = 1;
    if (FUNC_3(VAR_21->wl) == VAR_20) {
     VAR_38 = 0xc;
     VAR_34 = 0xc;
     VAR_39 = 0xa;
     VAR_35 = 0xa;
    } else {
     VAR_38 = 0x14;
     VAR_34 = 0x14;
     VAR_39 = 0xf;
     VAR_35 = 0xf;
    }
    VAR_40 = 1;
   }
  }
 } else {
  if (VAR_23->radio_rev == 5) {
   VAR_29 = 1;
   VAR_30 = 3;
   VAR_32 = FUNC_16(VAR_21, 0x16b);
   VAR_36 = FUNC_16(VAR_21, 0x16a);
   VAR_37 = VAR_36;
   VAR_33 = VAR_32;
   VAR_38 = 0x11;
   VAR_39 = 0x11;
   VAR_34 = 0x13;
   VAR_35 = 0x13;
   VAR_40 = 1;
  }
 }
 if (VAR_40) {
  VAR_41 = (VAR_33 << 8) |
       (VAR_37 << 3) |
       VAR_31;
  VAR_42 = (VAR_34 << 8) |
       (VAR_38 << 3) |
       VAR_29;
  VAR_43 = (VAR_35 << 8) |
       (VAR_39 << 3) |
       VAR_30;
  for (VAR_48 = 0; VAR_48 < 2; VAR_48++) {
   FUNC_10(VAR_21, FUNC_1(7, 0x152 + VAR_48 * 16),
           VAR_41);
   FUNC_10(VAR_21, FUNC_1(7, 0x153 + VAR_48 * 16),
           VAR_42);
   FUNC_10(VAR_21, FUNC_1(7, 0x154 + VAR_48 * 16),
           VAR_42);
   FUNC_10(VAR_21, FUNC_1(7, 0x155 + VAR_48 * 16),
           VAR_43);
   FUNC_10(VAR_21, FUNC_1(7, 0x156 + VAR_48 * 16),
           VAR_43);
   FUNC_10(VAR_21, FUNC_1(7, 0x157 + VAR_48 * 16),
           VAR_43);
   FUNC_10(VAR_21, FUNC_1(7, 0x158 + VAR_48 * 16),
           VAR_43);
   FUNC_10(VAR_21, FUNC_1(7, 0x159 + VAR_48 * 16),
           VAR_43);
  }
  FUNC_7(VAR_21, 16, 1, 3, 0, 2);
 }
 FUNC_15(VAR_21, 0x32F, 0x3);
 if (VAR_23->radio_rev == 4 || VAR_23->radio_rev == 6)
  FUNC_7(VAR_21, 4, 1, 3, 0, 0);

 if (VAR_23->radio_rev == 3 || VAR_23->radio_rev == 4 || VAR_23->radio_rev == 6) {
  if (VAR_22->revision &&
      VAR_22->boardflags2_hi & VAR_0) {
   FUNC_18(VAR_21, 0x5, 0x05);
   FUNC_18(VAR_21, 0x6, 0x30);
   FUNC_18(VAR_21, 0x7, 0x00);
   FUNC_17(VAR_21, 0x4f, 0x1);
   FUNC_17(VAR_21, 0xd4, 0x1);
   VAR_44 = 0x1f;
   VAR_45 = 0x6f;
   VAR_46 = 0xaa;
  } else {
   VAR_44 = 0x2b;
   VAR_45 = 0x7f;
   VAR_46 = 0xee;
  }
  if (FUNC_3(VAR_21->wl) == VAR_20) {
   for (VAR_48 = 0; VAR_48 < 2; VAR_48++) {
    if (VAR_48 == 0) {
     FUNC_18(VAR_21, 0x5F, VAR_44);
     FUNC_18(VAR_21, 0x64, VAR_45);
     FUNC_18(VAR_21, 0x66, VAR_46);
    } else {
     FUNC_18(VAR_21, 0xE8, VAR_44);
     FUNC_18(VAR_21, 0xE9, VAR_45);
     FUNC_18(VAR_21, 0xEB, VAR_46);
    }
   }
  }
 }

 if (FUNC_5(VAR_21)) {
  if (FUNC_3(VAR_21->wl) == VAR_20) {
   if (VAR_23->radio_rev == 3 || VAR_23->radio_rev == 4 ||
       VAR_23->radio_rev == 6) {
    for (VAR_48 = 0; VAR_48 < 2; VAR_48++) {
     if (VAR_48 == 0)
      FUNC_18(VAR_21, 0x51,
        0x7f);
     else
      FUNC_18(VAR_21, 0xd6,
        0x7f);
    }
   }
   if (VAR_23->radio_rev == 3) {
    for (VAR_48 = 0; VAR_48 < 2; VAR_48++) {
     if (VAR_48 == 0) {
      FUNC_18(VAR_21, 0x64,
        0x13);
      FUNC_18(VAR_21, 0x5F,
        0x1F);
      FUNC_18(VAR_21, 0x66,
        0xEE);
      FUNC_18(VAR_21, 0x59,
        0x8A);
      FUNC_18(VAR_21, 0x80,
        0x3E);
     } else {
      FUNC_18(VAR_21, 0x69,
        0x13);
      FUNC_18(VAR_21, 0xE8,
        0x1F);
      FUNC_18(VAR_21, 0xEB,
        0xEE);
      FUNC_18(VAR_21, 0xDE,
        0x8A);
      FUNC_18(VAR_21, 0x105,
        0x3E);
     }
    }
   } else if (VAR_23->radio_rev == 7 || VAR_23->radio_rev == 8) {
    if (!VAR_23->is_40mhz) {
     FUNC_18(VAR_21, 0x5F, 0x14);
     FUNC_18(VAR_21, 0xE8, 0x12);
    } else {
     FUNC_18(VAR_21, 0x5F, 0x16);
     FUNC_18(VAR_21, 0xE8, 0x16);
    }
   }
  } else {
   u16 VAR_49 = VAR_23->channel_freq;
   if ((VAR_49 >= 5180 && VAR_49 <= 5230) ||
       (VAR_49 >= 5745 && VAR_49 <= 5805)) {
    FUNC_18(VAR_21, 0x7D, 0xFF);
    FUNC_18(VAR_21, 0xFE, 0xFF);
   }
  }
 } else {
  if (VAR_23->radio_rev != 5) {
   for (VAR_48 = 0; VAR_48 < 2; VAR_48++) {
    if (VAR_48 == 0) {
     FUNC_18(VAR_21, 0x5c, 0x61);
     FUNC_18(VAR_21, 0x51, 0x70);
    } else {
     FUNC_18(VAR_21, 0xe1, 0x61);
     FUNC_18(VAR_21, 0xd6, 0x70);
    }
   }
  }
 }

 if (VAR_23->radio_rev == 4) {
  FUNC_10(VAR_21, FUNC_1(8, 0x05), 0x20);
  FUNC_10(VAR_21, FUNC_1(8, 0x15), 0x20);
  for (VAR_48 = 0; VAR_48 < 2; VAR_48++) {
   if (VAR_48 == 0) {
    FUNC_18(VAR_21, 0x1a1, 0x00);
    FUNC_18(VAR_21, 0x1a2, 0x3f);
    FUNC_18(VAR_21, 0x1a6, 0x3f);
   } else {
    FUNC_18(VAR_21, 0x1a7, 0x00);
    FUNC_18(VAR_21, 0x1ab, 0x3f);
    FUNC_18(VAR_21, 0x1ac, 0x3f);
   }
  }
 } else {
  FUNC_14(VAR_21, VAR_1, 0x4);
  FUNC_14(VAR_21, VAR_4, 0x4);
  FUNC_14(VAR_21, VAR_2, 0x4);
  FUNC_14(VAR_21, VAR_3, 0x4);

  FUNC_12(VAR_21, VAR_1, ~0x1);
  FUNC_14(VAR_21, VAR_4, 0x1);
  FUNC_12(VAR_21, VAR_2, ~0x1);
  FUNC_14(VAR_21, VAR_3, 0x1);
  FUNC_10(VAR_21, FUNC_1(8, 0x05), 0x20);
  FUNC_10(VAR_21, FUNC_1(8, 0x15), 0x20);

  FUNC_12(VAR_21, VAR_1, ~0x4);
  FUNC_12(VAR_21, VAR_4, ~0x4);
  FUNC_12(VAR_21, VAR_2, ~0x4);
  FUNC_12(VAR_21, VAR_3, ~0x4);
 }

 FUNC_15(VAR_21, VAR_5, 0x2);

 FUNC_10(VAR_21, FUNC_2(16, 0x100), 20);
 FUNC_11(VAR_21, FUNC_1(7, 0x138), 2, VAR_27);
 FUNC_10(VAR_21, FUNC_1(7, 0x141), 0x77);
 FUNC_11(VAR_21, FUNC_1(7, 0x133), 3, VAR_28);
 FUNC_11(VAR_21, FUNC_1(7, 0x146), 2, VAR_27);
 FUNC_10(VAR_21, FUNC_1(7, 0x123), 0x77);
 FUNC_10(VAR_21, FUNC_1(7, 0x12A), 0x77);

 if (!VAR_23->is_40mhz) {
  FUNC_10(VAR_21, FUNC_2(16, 0x03), 0x18D);
  FUNC_10(VAR_21, FUNC_2(16, 0x7F), 0x18D);
 } else {
  FUNC_10(VAR_21, FUNC_2(16, 0x03), 0x14D);
  FUNC_10(VAR_21, FUNC_2(16, 0x7F), 0x14D);
 }

 FUNC_4(VAR_21);
}
