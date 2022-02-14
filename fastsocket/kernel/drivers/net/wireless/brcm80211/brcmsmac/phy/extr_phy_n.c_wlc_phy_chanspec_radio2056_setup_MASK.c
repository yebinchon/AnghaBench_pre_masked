
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u16 ;
struct radio_regs {scalar_t__ init_a; scalar_t__ init_g; } ;
struct chan_info_nphy_radio205x {int RF_SYN_pll_vcocal1; int RF_SYN_pll_vcocal2; int RF_SYN_pll_refdiv; int RF_SYN_pll_mmd2; int RF_SYN_pll_mmd1; int RF_SYN_pll_loopfilter1; int RF_SYN_pll_loopfilter2; int RF_SYN_pll_loopfilter3; int RF_SYN_pll_loopfilter4; int RF_SYN_pll_loopfilter5; int RF_SYN_reserved_addr27; int RF_SYN_reserved_addr28; int RF_SYN_reserved_addr29; int RF_SYN_logen_VCOBUF1; int RF_SYN_logen_MIXER2; int RF_SYN_logen_BUF3; int RF_SYN_logen_BUF4; int RF_RX0_lnaa_tune; int RF_RX0_lnag_tune; int RF_TX0_intpaa_boost_tune; int RF_TX0_intpag_boost_tune; int RF_TX0_pada_boost_tune; int RF_TX0_padg_boost_tune; int RF_TX0_pgaa_boost_tune; int RF_TX0_pgag_boost_tune; int RF_TX0_mixa_boost_tune; int RF_TX0_mixg_boost_tune; int RF_RX1_lnaa_tune; int RF_RX1_lnag_tune; int RF_TX1_intpaa_boost_tune; int RF_TX1_intpag_boost_tune; int RF_TX1_pada_boost_tune; int RF_TX1_padg_boost_tune; int RF_TX1_pgaa_boost_tune; int RF_TX1_pgag_boost_tune; int RF_TX1_mixa_boost_tune; int RF_TX1_mixg_boost_tune; } ;
struct TYPE_3__ {int radiorev; scalar_t__ phy_corenum; int phy_rev; } ;
struct brcms_phy {scalar_t__ bw; int phy_pabias; TYPE_2__* sh; TYPE_1__ pubpi; int radio_chanspec; } ;
struct TYPE_4__ {int boardflags2; scalar_t__ chip; scalar_t__ chippkg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
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
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_6 (struct brcms_phy*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 scalar_t__ VAR_62 ;
 int FUNC_7 (struct brcms_phy*,int ,int ,scalar_t__,int ,int) ;
 struct radio_regs* VAR_63 ;
 struct radio_regs* VAR_64 ;
 struct radio_regs* VAR_65 ;
 struct radio_regs* VAR_66 ;
 struct radio_regs* VAR_67 ;
 struct radio_regs* VAR_68 ;
 struct radio_regs* VAR_69 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_11(struct brcms_phy *VAR_70,
     const struct chan_info_nphy_radio205x *VAR_71)
{
 const struct radio_regs *VAR_72 = ((void*)0);

 FUNC_10(VAR_70,
   VAR_45 | VAR_31,
   VAR_71->RF_SYN_pll_vcocal1);
 FUNC_10(VAR_70, VAR_46 | VAR_31,
   VAR_71->RF_SYN_pll_vcocal2);
 FUNC_10(VAR_70, VAR_44 | VAR_31,
   VAR_71->RF_SYN_pll_refdiv);
 FUNC_10(VAR_70, VAR_43 | VAR_31,
   VAR_71->RF_SYN_pll_mmd2);
 FUNC_10(VAR_70, VAR_42 | VAR_31,
   VAR_71->RF_SYN_pll_mmd1);
 FUNC_10(VAR_70, VAR_37 | VAR_31,
   VAR_71->RF_SYN_pll_loopfilter1);
 FUNC_10(VAR_70, VAR_38 | VAR_31,
   VAR_71->RF_SYN_pll_loopfilter2);
 FUNC_10(VAR_70, VAR_39 | VAR_31,
   VAR_71->RF_SYN_pll_loopfilter3);
 FUNC_10(VAR_70, VAR_40 | VAR_31,
   VAR_71->RF_SYN_pll_loopfilter4);
 FUNC_10(VAR_70, VAR_41 | VAR_31,
   VAR_71->RF_SYN_pll_loopfilter5);
 FUNC_10(VAR_70, VAR_47 | VAR_31,
   VAR_71->RF_SYN_reserved_addr27);
 FUNC_10(VAR_70, VAR_48 | VAR_31,
   VAR_71->RF_SYN_reserved_addr28);
 FUNC_10(VAR_70, VAR_49 | VAR_31,
   VAR_71->RF_SYN_reserved_addr29);
 FUNC_10(VAR_70, VAR_35 | VAR_31,
   VAR_71->RF_SYN_logen_VCOBUF1);
 FUNC_10(VAR_70, VAR_34 | VAR_31,
   VAR_71->RF_SYN_logen_MIXER2);
 FUNC_10(VAR_70, VAR_32 | VAR_31,
   VAR_71->RF_SYN_logen_BUF3);
 FUNC_10(VAR_70, VAR_33 | VAR_31,
   VAR_71->RF_SYN_logen_BUF4);

 FUNC_10(VAR_70,
   VAR_29 | VAR_27,
   VAR_71->RF_RX0_lnaa_tune);
 FUNC_10(VAR_70, VAR_30 | VAR_27,
   VAR_71->RF_RX0_lnag_tune);
 FUNC_10(VAR_70, VAR_52 | VAR_50,
   VAR_71->RF_TX0_intpaa_boost_tune);
 FUNC_10(VAR_70, VAR_53 | VAR_50,
   VAR_71->RF_TX0_intpag_boost_tune);
 FUNC_10(VAR_70, VAR_56 | VAR_50,
   VAR_71->RF_TX0_pada_boost_tune);
 FUNC_10(VAR_70, VAR_57 | VAR_50,
   VAR_71->RF_TX0_padg_boost_tune);
 FUNC_10(VAR_70, VAR_58 | VAR_50,
   VAR_71->RF_TX0_pgaa_boost_tune);
 FUNC_10(VAR_70, VAR_59 | VAR_50,
   VAR_71->RF_TX0_pgag_boost_tune);
 FUNC_10(VAR_70, VAR_54 | VAR_50,
   VAR_71->RF_TX0_mixa_boost_tune);
 FUNC_10(VAR_70, VAR_55 | VAR_50,
   VAR_71->RF_TX0_mixg_boost_tune);

 FUNC_10(VAR_70,
   VAR_29 | VAR_28,
   VAR_71->RF_RX1_lnaa_tune);
 FUNC_10(VAR_70, VAR_30 | VAR_28,
   VAR_71->RF_RX1_lnag_tune);
 FUNC_10(VAR_70, VAR_52 | VAR_51,
   VAR_71->RF_TX1_intpaa_boost_tune);
 FUNC_10(VAR_70, VAR_53 | VAR_51,
   VAR_71->RF_TX1_intpag_boost_tune);
 FUNC_10(VAR_70, VAR_56 | VAR_51,
   VAR_71->RF_TX1_pada_boost_tune);
 FUNC_10(VAR_70, VAR_57 | VAR_51,
   VAR_71->RF_TX1_padg_boost_tune);
 FUNC_10(VAR_70, VAR_58 | VAR_51,
   VAR_71->RF_TX1_pgaa_boost_tune);
 FUNC_10(VAR_70, VAR_59 | VAR_51,
   VAR_71->RF_TX1_pgag_boost_tune);
 FUNC_10(VAR_70, VAR_54 | VAR_51,
   VAR_71->RF_TX1_mixa_boost_tune);
 FUNC_10(VAR_70, VAR_55 | VAR_51,
   VAR_71->RF_TX1_mixg_boost_tune);

 if (FUNC_5(VAR_70->pubpi.phy_rev, 3))
  VAR_72 = VAR_63;
 else if (FUNC_5(VAR_70->pubpi.phy_rev, 4))
  VAR_72 = VAR_64;
 else {
  switch (VAR_70->pubpi.radiorev) {
  case 5:
   VAR_72 = VAR_66;
   break;
  case 6:
   VAR_72 = VAR_67;
   break;
  case 7:
  case 9:
   VAR_72 = VAR_68;
   break;
  case 8:
   VAR_72 = VAR_69;
   break;
  case 11:
   VAR_72 = VAR_65;
   break;
  }
 }
 if (FUNC_2(VAR_70->radio_chanspec))
  FUNC_10(VAR_70, VAR_36 |
    VAR_31,
    (u16) VAR_72[0x49 - 2].init_g);
 else
  FUNC_10(VAR_70, VAR_36 |
    VAR_31,
    (u16) VAR_72[0x49 - 2].init_a);

 if (VAR_70->sh->boardflags2 & VAR_6) {
  if (FUNC_2(VAR_70->radio_chanspec)) {
   FUNC_10(VAR_70, VAR_37 |
     VAR_31, 0x1f);
   FUNC_10(VAR_70, VAR_38 |
     VAR_31, 0x1f);

   if ((VAR_70->sh->chip == VAR_2) ||
       (VAR_70->sh->chip == VAR_3)) {
    FUNC_10(VAR_70,
      VAR_40 |
      VAR_31, 0x14);
    FUNC_10(VAR_70,
      VAR_36 |
      VAR_31, 0x00);
   } else {
    FUNC_10(VAR_70,
      VAR_40 |
      VAR_31, 0xb);
    FUNC_10(VAR_70,
      VAR_36 |
      VAR_31, 0x14);
   }
  }
 }

 if ((VAR_70->sh->boardflags2 & VAR_7) &&
     (FUNC_2(VAR_70->radio_chanspec))) {
  FUNC_10(VAR_70,
    VAR_37 | VAR_31,
    0x1f);
  FUNC_10(VAR_70,
    VAR_38 | VAR_31,
    0x1f);
  FUNC_10(VAR_70,
    VAR_40 | VAR_31,
    0xb);
  FUNC_10(VAR_70, VAR_36 | VAR_31,
    0x20);
 }

 if (VAR_70->sh->boardflags2 & VAR_5) {
  if (FUNC_3(VAR_70->radio_chanspec)) {
   FUNC_10(VAR_70, VAR_37 |
     VAR_31, 0x1f);
   FUNC_10(VAR_70, VAR_38 |
     VAR_31, 0x1f);
   FUNC_10(VAR_70, VAR_40 |
     VAR_31, 0x5);
   FUNC_10(VAR_70, VAR_36 |
     VAR_31, 0xc);
  }
 }

 if (FUNC_6(VAR_70) && FUNC_2(VAR_70->radio_chanspec)) {
  u16 VAR_73;
  u16 VAR_74;
  u16 VAR_75;
  u16 VAR_76;
  u16 VAR_77, VAR_78;
  uint VAR_79;

  for (VAR_79 = 0; VAR_79 < VAR_70->pubpi.phy_corenum; VAR_79++) {

   if (FUNC_4(VAR_70->pubpi.phy_rev, 5)) {

    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_21, 0xcc);

    if ((VAR_70->sh->chip == VAR_2) ||
        (VAR_70->sh->chip == VAR_3)) {
     VAR_77 = 0x40;
     VAR_78 = 0x45;
     VAR_73 = 0x5;
     VAR_75 = 0x33;
     VAR_74 = 0x77;
     VAR_76 = 0x55;
    } else {
     VAR_77 = 0x25;
     VAR_78 = 0x20;

     if ((VAR_70->sh->chip == VAR_0 ||
          VAR_70->sh->chip == VAR_1) &&
         VAR_70->sh->chippkg == VAR_4) {
      VAR_77 = 0x2a;
      VAR_78 = 0x38;
     }

     VAR_73 = 0x4;
     VAR_75 = 0x03;
     VAR_74 = 0x77;
     VAR_76 = 0x65;
    }

    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_15, VAR_77);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_14, VAR_77);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_13, VAR_78);

    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_12,
       VAR_73);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_25,
       VAR_75);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_20,
       VAR_74);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_17,
       VAR_76);
   } else {

    VAR_77 = (VAR_70->bw == VAR_62) ?
           0x40 : 0x20;

    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_15, VAR_77);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_14, VAR_77);
    FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79,
       VAR_13, 0x30);
   }
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_79, VAR_22,
      0xee);
  }
 }

 if (FUNC_6(VAR_70) && FUNC_5(VAR_70->pubpi.phy_rev, 6)
     && FUNC_3(VAR_70->radio_chanspec)) {
  u16 VAR_80;
  u16 VAR_81;
  u16 VAR_82;
  u16 VAR_83;
  u16 VAR_84, VAR_85, VAR_86;
  uint VAR_87;

  VAR_84 = FUNC_0(FUNC_1(VAR_70->radio_chanspec));

  if (VAR_84 < 5150) {

   VAR_80 = 0xa;
   VAR_81 = 0x77;
   VAR_82 = 0xf;
   VAR_83 = 0xf;
  } else if (VAR_84 < 5340) {

   VAR_80 = 0x8;
   VAR_81 = 0x77;
   VAR_82 = 0xfb;
   VAR_83 = 0xf;
  } else if (VAR_84 < 5650) {

   VAR_80 = 0x0;
   VAR_81 = 0x77;
   VAR_82 = 0xb;
   VAR_83 = 0xf;
  } else {

   VAR_80 = 0x0;
   VAR_81 = 0x77;
   if (VAR_84 != 5825)
    VAR_82 = -(int)(VAR_84 - 18) / 36 + 168;
   else
    VAR_82 = 6;

   VAR_83 = 0xf;
  }

  for (VAR_87 = 0; VAR_87 < VAR_70->pubpi.phy_corenum; VAR_87++) {
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_8, VAR_80);
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_18, VAR_81);
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_24, VAR_82);
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_16, VAR_83);

   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_61, 0x30);
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_23, 0xee);

   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_19, 0x3);

   VAR_86 = 0x30;

   if ((VAR_70->sh->chip == VAR_0 ||
        VAR_70->sh->chip == VAR_1) &&
       VAR_70->sh->chippkg == VAR_4)
    VAR_86 = 0x35;

   VAR_85 = (VAR_70->phy_pabias == 0) ? 0x30 : VAR_70->phy_pabias;

   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_10, VAR_85);
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_11, VAR_85);
   FUNC_7(VAR_70, VAR_26, VAR_60, VAR_87,
      VAR_9, VAR_86);
  }
 }

 FUNC_8(50);

 FUNC_9(VAR_70);
}
