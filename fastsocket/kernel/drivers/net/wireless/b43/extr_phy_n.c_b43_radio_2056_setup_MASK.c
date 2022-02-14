
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ssb_sprom {int boardflags2_lo; } ;
struct TYPE_6__ {int rev; int channel_freq; TYPE_2__* n; scalar_t__ is_40mhz; } ;
struct b43_wldev {TYPE_3__ phy; TYPE_1__* dev; int wl; } ;
struct b43_nphy_channeltab_entry_rev3 {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_5__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;
struct TYPE_4__ {int chip_id; struct ssb_sprom* bus_sprom; } ;


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
 int FUNC_0 (int) ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev3 const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_31,
    const struct b43_nphy_channeltab_entry_rev3 *VAR_32)
{
 struct ssb_sprom *VAR_33 = VAR_31->dev->bus_sprom;
 enum ieee80211_band VAR_34 = FUNC_3(VAR_31->wl);
 u16 VAR_35;
 u8 VAR_36;
 u16 VAR_37, VAR_38;
 u16 VAR_39, VAR_40, VAR_41, VAR_42;
 u16 VAR_43, VAR_44, VAR_45, VAR_46;

 FUNC_0(VAR_31->phy.rev < 3);

 FUNC_2(VAR_31, VAR_32);
 FUNC_1(VAR_31, VAR_34 == VAR_30);

 if (VAR_33->boardflags2_lo & VAR_28 &&
     FUNC_3(VAR_31->wl) == VAR_29) {
  FUNC_4(VAR_31, VAR_1, 0x1F);
  FUNC_4(VAR_31, VAR_2, 0x1F);
  if (VAR_31->dev->chip_id == 0x4716) {
   FUNC_4(VAR_31, VAR_3, 0x14);
   FUNC_4(VAR_31, VAR_0, 0);
  } else {
   FUNC_4(VAR_31, VAR_3, 0x0B);
   FUNC_4(VAR_31, VAR_0, 0x14);
  }
 }
 if (VAR_33->boardflags2_lo & VAR_27 &&
     FUNC_3(VAR_31->wl) == VAR_30) {
  FUNC_4(VAR_31, VAR_1, 0x1F);
  FUNC_4(VAR_31, VAR_2, 0x1F);
  FUNC_4(VAR_31, VAR_3, 0x05);
  FUNC_4(VAR_31, VAR_0, 0x0C);
 }

 if (VAR_31->phy.n->ipa2g_on && VAR_34 == VAR_29) {
  for (VAR_36 = 0; VAR_36 < 2; VAR_36++) {
   VAR_35 = VAR_36 ? VAR_6 : VAR_5;
   if (VAR_31->phy.rev >= 5) {
    FUNC_4(VAR_31,
     VAR_35 | VAR_21, 0xcc);

    if (VAR_31->dev->chip_id == 0x4716) {
     VAR_37 = 0x40;
     VAR_38 = 0x45;
     VAR_39 = 0x5;
     VAR_41 = 0x33;
     VAR_42 = 0x55;
    } else {
     VAR_37 = 0x25;
     VAR_38 = 0x20;
     VAR_39 = 0x4;
     VAR_41 = 0x03;
     VAR_42 = 0x65;
    }
    VAR_40 = 0x77;

    FUNC_4(VAR_31,
     VAR_35 | VAR_15,
     VAR_37);
    FUNC_4(VAR_31,
     VAR_35 | VAR_14,
     VAR_37);
    FUNC_4(VAR_31,
     VAR_35 | VAR_13,
     VAR_38);
    FUNC_4(VAR_31,
     VAR_35 | VAR_12,
     VAR_39);
    FUNC_4(VAR_31,
     VAR_35 | VAR_25,
     VAR_41);
    FUNC_4(VAR_31,
     VAR_35 | VAR_20,
     VAR_40);
    FUNC_4(VAR_31,
     VAR_35 | VAR_17,
     VAR_42);
   } else {
    VAR_37 = VAR_31->phy.is_40mhz ? 0x40 : 0x20;
    FUNC_4(VAR_31,
     VAR_35 | VAR_15,
     VAR_37);
    FUNC_4(VAR_31,
     VAR_35 | VAR_14,
     VAR_37);
    FUNC_4(VAR_31,
     VAR_35 | VAR_13,
     0x30);
   }
   FUNC_4(VAR_31, VAR_35 | VAR_22, 0xee);
  }
 } else if (VAR_31->phy.n->ipa5g_on && VAR_34 == VAR_30) {
  u16 VAR_47 = VAR_31->phy.channel_freq;
  if (VAR_47 < 5100) {
   VAR_43 = 0xA;
   VAR_44 = 0x77;
   VAR_45 = 0xF;
   VAR_46 = 0xF;
  } else if (VAR_47 < 5340) {
   VAR_43 = 0x8;
   VAR_44 = 0x77;
   VAR_45 = 0xFB;
   VAR_46 = 0xF;
  } else if (VAR_47 < 5650) {
   VAR_43 = 0x0;
   VAR_44 = 0x77;
   VAR_45 = 0xB;
   VAR_46 = 0xF;
  } else {
   VAR_43 = 0x0;
   VAR_44 = 0x77;
   if (VAR_47 != 5825)
    VAR_45 = -(VAR_47 - 18) / 36 + 168;
   else
    VAR_45 = 6;
   VAR_46 = 0xF;
  }

  for (VAR_36 = 0; VAR_36 < 2; VAR_36++) {
   VAR_35 = VAR_36 ? VAR_6 : VAR_5;

   FUNC_4(VAR_31,
    VAR_35 | VAR_7, VAR_43);
   FUNC_4(VAR_31,
    VAR_35 | VAR_18, VAR_44);
   FUNC_4(VAR_31,
    VAR_35 | VAR_24, VAR_45);
   FUNC_4(VAR_31,
    VAR_35 | VAR_16, VAR_46);
   FUNC_4(VAR_31,
    VAR_35 | VAR_26, 0x30);
   FUNC_4(VAR_31,
    VAR_35 | VAR_23, 0xee);
   FUNC_4(VAR_31,
    VAR_35 | VAR_19, 0x03);
   FUNC_4(VAR_31,
    VAR_35 | VAR_9, 0x50);
   FUNC_4(VAR_31,
    VAR_35 | VAR_10, 0x50);
   FUNC_4(VAR_31,
    VAR_35 | VAR_8, 0x30);
  }
 }

 FUNC_5(50);

 FUNC_4(VAR_31, VAR_4, 0x00);
 FUNC_4(VAR_31, VAR_11, 0x38);
 FUNC_4(VAR_31, VAR_11, 0x18);
 FUNC_4(VAR_31, VAR_11, 0x38);
 FUNC_4(VAR_31, VAR_11, 0x39);
 FUNC_5(300);
}
