
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct b43_phy {int rev; int radio_rev; scalar_t__ gmode; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_3__* dev; struct b43_phy phy; } ;
struct b43_phy_g {int initval; int* nrssi; TYPE_1__* lo_control; } ;
struct TYPE_6__ {int chip_id; int chip_pkg; TYPE_2__* bus_sprom; } ;
struct TYPE_5__ {int boardflags_lo; } ;
struct TYPE_4__ {int tx_bias; int tx_magn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*,int) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (struct b43_wldev*) ;
 int FUNC_13 (struct b43_wldev*) ;
 int FUNC_14 (struct b43_wldev*,int ,int) ;
 int FUNC_15 (struct b43_wldev*,int ,int,int) ;
 int FUNC_16 (struct b43_wldev*,int ) ;
 int FUNC_17 (struct b43_wldev*,int ,int) ;
 int FUNC_18 (struct b43_wldev*,int ,int) ;
 int FUNC_19 (struct b43_wldev*) ;
 int FUNC_20 (struct b43_wldev*,int,int,int) ;
 int FUNC_21 (struct b43_wldev*,int) ;
 int FUNC_22 (struct b43_wldev*,int,int) ;
 scalar_t__ FUNC_23 (struct b43_phy*) ;
 scalar_t__ FUNC_24 (struct b43_phy*) ;

__attribute__((used)) static void FUNC_25(struct b43_wldev *VAR_10)
{
 struct b43_phy *VAR_11 = &VAR_10->phy;
 struct b43_phy_g *VAR_12 = VAR_11->g;
 u16 VAR_13;

 if (VAR_11->rev == 1)
  FUNC_12(VAR_10);
 else
  FUNC_13(VAR_10);

 if (VAR_11->rev >= 2 || VAR_11->gmode)
  FUNC_11(VAR_10);

 if (VAR_11->rev >= 2) {
  FUNC_18(VAR_10, VAR_3, 0);
  FUNC_18(VAR_10, VAR_4, 0);
 }
 if (VAR_11->rev == 2) {
  FUNC_18(VAR_10, VAR_8, 0);
  FUNC_18(VAR_10, VAR_7, 0xC0);
 }
 if (VAR_11->rev > 5) {
  FUNC_18(VAR_10, VAR_8, 0x400);
  FUNC_18(VAR_10, VAR_7, 0xC0);
 }
 if (VAR_11->gmode || VAR_11->rev >= 2) {
  VAR_13 = FUNC_16(VAR_10, VAR_9);
  VAR_13 &= VAR_2;
  if (VAR_13 == 3 || VAR_13 == 5) {
   FUNC_18(VAR_10, FUNC_2(0xC2), 0x1816);
   FUNC_18(VAR_10, FUNC_2(0xC3), 0x8006);
  }
  if (VAR_13 == 5) {
   FUNC_15(VAR_10, FUNC_2(0xCC), 0x00FF, 0x1F00);
  }
 }
 if ((VAR_11->rev <= 2 && VAR_11->gmode) || VAR_11->rev >= 2)
  FUNC_18(VAR_10, FUNC_2(0x7E), 0x78);
 if (VAR_11->radio_rev == 8) {
  FUNC_17(VAR_10, FUNC_1(0x01), 0x80);
  FUNC_17(VAR_10, FUNC_2(0x3E), 0x4);
 }
 if (FUNC_23(VAR_11))
  FUNC_4(VAR_10);

 if (VAR_11->radio_rev != 8) {
  if (VAR_12->initval == 0xFFFF)
   VAR_12->initval = FUNC_19(VAR_10);
  else
   FUNC_22(VAR_10, 0x0078, VAR_12->initval);
 }
 FUNC_8(VAR_10);
 if (FUNC_24(VAR_11)) {
  FUNC_22(VAR_10, 0x52,
      (FUNC_21(VAR_10, 0x52) & 0xFF00)
      | VAR_12->lo_control->tx_bias | VAR_12->
      lo_control->tx_magn);
 } else {
  FUNC_20(VAR_10, 0x52, 0xFFF0, VAR_12->lo_control->tx_bias);
 }
 if (VAR_11->rev >= 6) {
  FUNC_15(VAR_10, FUNC_0(0x36), 0x0FFF, (VAR_12->lo_control->tx_bias << 12));
 }
 if (VAR_10->dev->bus_sprom->boardflags_lo & VAR_0)
  FUNC_18(VAR_10, FUNC_0(0x2E), 0x8075);
 else
  FUNC_18(VAR_10, FUNC_0(0x2E), 0x807F);
 if (VAR_11->rev < 2)
  FUNC_18(VAR_10, FUNC_0(0x2F), 0x101);
 else
  FUNC_18(VAR_10, FUNC_0(0x2F), 0x202);
 if (VAR_11->gmode || VAR_11->rev >= 2) {
  FUNC_7(VAR_10);
  FUNC_18(VAR_10, VAR_6, 0x8078);
 }

 if (!(VAR_10->dev->bus_sprom->boardflags_lo & VAR_1)) {






  FUNC_9(VAR_10, 0xFFFF);
  FUNC_6(VAR_10);
 } else if (VAR_11->gmode || VAR_11->rev >= 2) {
  if (VAR_12->nrssi[0] == -1000) {
   FUNC_3(VAR_12->nrssi[1] != -1000);
   FUNC_5(VAR_10);
  } else
   FUNC_6(VAR_10);
 }
 if (VAR_11->radio_rev == 8)
  FUNC_18(VAR_10, FUNC_1(0x05), 0x3230);
 FUNC_10(VAR_10);



 if ((VAR_10->dev->chip_id == 0x4306
      && VAR_10->dev->chip_pkg == 2) || 0) {
  FUNC_14(VAR_10, VAR_5, 0xBFFF);
  FUNC_14(VAR_10, FUNC_2(0xC3), 0x7FFF);
 }
}
