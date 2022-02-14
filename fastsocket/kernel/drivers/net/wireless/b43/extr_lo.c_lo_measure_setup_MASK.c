
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ssb_sprom {int boardflags_lo; } ;
struct lo_g_saved_values {int reg_3F4; int reg_3E2; int radio_7A; int phy_syncctl; int radio_52; void* phy_cck_06; void* phy_cck_30; void* phy_dacctl; void* phy_cck_2A; void* phy_pgactl; void* radio_43; void* phy_crs0; void* phy_cck_3E; void* phy_classctl; void* phy_rfoverval; void* phy_rfover; void* phy_analogoverval; void* phy_analogover; void* phy_hpwr_tssictl; void* phy_cck_14; void* phy_dacctl_hwpctl; void* phy_extg_01; void* phy_lo_mask; } ;
struct b43_phy {scalar_t__ type; int radio_ver; int radio_rev; int rev; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; TYPE_1__* dev; } ;
struct b43_txpower_lo_control {int txctl_measured_time; } ;
struct b43_phy_g {struct b43_txpower_lo_control* lo_control; } ;
struct TYPE_2__ {struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int ) ;
 scalar_t__ FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 void* FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int) ;
 void* FUNC_9 (struct b43_wldev*,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (struct b43_wldev*,int) ;
 int FUNC_12 (struct b43_wldev*,int,int) ;
 int FUNC_13 (struct b43_phy*) ;
 scalar_t__ VAR_15 ;
 int FUNC_14 (struct b43_wldev*) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct b43_wldev *VAR_16,
        struct lo_g_saved_values *VAR_17)
{
 struct ssb_sprom *VAR_18 = VAR_16->dev->bus_sprom;
 struct b43_phy *VAR_19 = &VAR_16->phy;
 struct b43_phy_g *VAR_20 = VAR_19->g;
 struct b43_txpower_lo_control *VAR_21 = VAR_20->lo_control;
 u16 VAR_22;

 if (FUNC_4(VAR_16)) {
  VAR_17->phy_lo_mask = FUNC_6(VAR_16, VAR_10);
  VAR_17->phy_extg_01 = FUNC_6(VAR_16, FUNC_1(0x01));
  VAR_17->phy_dacctl_hwpctl = FUNC_6(VAR_16, VAR_8);
  VAR_17->phy_cck_14 = FUNC_6(VAR_16, FUNC_0(0x14));
  VAR_17->phy_hpwr_tssictl = FUNC_6(VAR_16, VAR_9);

  FUNC_7(VAR_16, VAR_9, 0x100);
  FUNC_7(VAR_16, FUNC_1(0x01), 0x40);
  FUNC_7(VAR_16, VAR_8, 0x40);
  FUNC_7(VAR_16, FUNC_0(0x14), 0x200);
 }
 if (VAR_19->type == VAR_2 &&
     VAR_19->radio_ver == 0x2050 && VAR_19->radio_rev < 6) {
  FUNC_8(VAR_16, FUNC_0(0x16), 0x410);
  FUNC_8(VAR_16, FUNC_0(0x17), 0x820);
 }
 if (VAR_19->rev >= 2) {
  VAR_17->phy_analogover = FUNC_6(VAR_16, VAR_4);
  VAR_17->phy_analogoverval =
      FUNC_6(VAR_16, VAR_5);
  VAR_17->phy_rfover = FUNC_6(VAR_16, VAR_12);
  VAR_17->phy_rfoverval = FUNC_6(VAR_16, VAR_13);
  VAR_17->phy_classctl = FUNC_6(VAR_16, VAR_6);
  VAR_17->phy_cck_3E = FUNC_6(VAR_16, FUNC_0(0x3E));
  VAR_17->phy_crs0 = FUNC_6(VAR_16, VAR_7);

  FUNC_5(VAR_16, VAR_6, 0xFFFC);
  FUNC_5(VAR_16, VAR_7, 0x7FFF);
  FUNC_7(VAR_16, VAR_4, 0x0003);
  FUNC_5(VAR_16, VAR_5, 0xFFFC);
  if (VAR_19->type == VAR_3) {
   if ((VAR_19->rev >= 7) &&
       (VAR_18->boardflags_lo & VAR_0)) {
    FUNC_8(VAR_16, VAR_12, 0x933);
   } else {
    FUNC_8(VAR_16, VAR_12, 0x133);
   }
  } else {
   FUNC_8(VAR_16, VAR_12, 0);
  }
  FUNC_8(VAR_16, FUNC_0(0x3E), 0);
 }
 VAR_17->reg_3F4 = FUNC_11(VAR_16, 0x3F4);
 VAR_17->reg_3E2 = FUNC_11(VAR_16, 0x3E2);
 VAR_17->radio_43 = FUNC_9(VAR_16, 0x43);
 VAR_17->radio_7A = FUNC_9(VAR_16, 0x7A);
 VAR_17->phy_pgactl = FUNC_6(VAR_16, VAR_11);
 VAR_17->phy_cck_2A = FUNC_6(VAR_16, FUNC_0(0x2A));
 VAR_17->phy_syncctl = FUNC_6(VAR_16, VAR_14);
 VAR_17->phy_dacctl = FUNC_6(VAR_16, VAR_8);

 if (!FUNC_13(VAR_19)) {
  VAR_17->radio_52 = FUNC_9(VAR_16, 0x52);
  VAR_17->radio_52 &= 0x00F0;
 }
 if (VAR_19->type == VAR_2) {
  VAR_17->phy_cck_30 = FUNC_6(VAR_16, FUNC_0(0x30));
  VAR_17->phy_cck_06 = FUNC_6(VAR_16, FUNC_0(0x06));
  FUNC_8(VAR_16, FUNC_0(0x30), 0x00FF);
  FUNC_8(VAR_16, FUNC_0(0x06), 0x3F3F);
 } else {
  FUNC_12(VAR_16, 0x3E2, FUNC_11(VAR_16, 0x3E2)
       | 0x8000);
 }
 FUNC_12(VAR_16, 0x3F4, FUNC_11(VAR_16, 0x3F4)
      & 0xF000);

 VAR_22 =
     (VAR_19->type == VAR_3) ? VAR_10 : FUNC_0(0x2E);
 FUNC_8(VAR_16, VAR_22, 0x007F);

 VAR_22 = VAR_17->phy_syncctl;
 FUNC_8(VAR_16, VAR_14, VAR_22 & 0xFF7F);
 VAR_22 = VAR_17->radio_7A;
 FUNC_10(VAR_16, 0x007A, VAR_22 & 0xFFF0);

 FUNC_8(VAR_16, FUNC_0(0x2A), 0x8A3);
 if (VAR_19->type == VAR_3 ||
     (VAR_19->type == VAR_2 &&
      VAR_19->radio_ver == 0x2050 && VAR_19->radio_rev >= 6)) {
  FUNC_8(VAR_16, FUNC_0(0x2B), 0x1003);
 } else
  FUNC_8(VAR_16, FUNC_0(0x2B), 0x0802);
 if (VAR_19->rev >= 2)
  FUNC_2(VAR_16, 0, 1);
 FUNC_3(VAR_16, 6, 0);
 FUNC_9(VAR_16, 0x51);
 if (VAR_19->type == VAR_3)
  FUNC_8(VAR_16, FUNC_0(0x2F), 0);


 if (FUNC_15(VAR_21->txctl_measured_time,
   VAR_15 - VAR_1))
  FUNC_14(VAR_16);

 if (VAR_19->type == VAR_3 && VAR_19->rev >= 3) {
  FUNC_8(VAR_16, VAR_10, 0xC078);
 } else {
  if (VAR_19->type == VAR_2)
   FUNC_8(VAR_16, FUNC_0(0x2E), 0x8078);
  else
   FUNC_8(VAR_16, VAR_10, 0x8078);
 }
}
