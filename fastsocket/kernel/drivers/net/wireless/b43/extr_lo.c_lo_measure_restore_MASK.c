
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lo_g_saved_values {int phy_pgactl; int phy_cck_2A; int phy_syncctl; int phy_dacctl; int radio_52; int phy_cck_30; int phy_cck_06; int phy_analogover; int phy_analogoverval; int phy_classctl; int phy_rfover; int phy_rfoverval; int phy_cck_3E; int phy_crs0; int phy_lo_mask; int phy_extg_01; int phy_dacctl_hwpctl; int phy_cck_14; int phy_hpwr_tssictl; int old_channel; int reg_3E2; int radio_7A; int radio_43; int reg_3F4; } ;
struct b43_phy {int rev; scalar_t__ type; int radio_ver; int radio_rev; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int pga_gain; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 scalar_t__ FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int,int ) ;
 int FUNC_7 (struct b43_wldev*,int,int ) ;
 int FUNC_8 (struct b43_phy*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_13,
          struct lo_g_saved_values *VAR_14)
{
 struct b43_phy *VAR_15 = &VAR_13->phy;
 struct b43_phy_g *VAR_16 = VAR_15->g;
 u16 VAR_17;

 if (VAR_15->rev >= 2) {
  FUNC_4(VAR_13, VAR_9, 0xE300);
  VAR_17 = (VAR_16->pga_gain << 8);
  FUNC_4(VAR_13, VAR_11, VAR_17 | 0xA0);
  FUNC_9(5);
  FUNC_4(VAR_13, VAR_11, VAR_17 | 0xA2);
  FUNC_9(2);
  FUNC_4(VAR_13, VAR_11, VAR_17 | 0xA3);
 } else {
  VAR_17 = (VAR_16->pga_gain | 0xEFA0);
  FUNC_4(VAR_13, VAR_9, VAR_17);
 }
 if (VAR_15->type == VAR_1) {
  if (VAR_15->rev >= 3)
   FUNC_4(VAR_13, FUNC_0(0x2E), 0xC078);
  else
   FUNC_4(VAR_13, FUNC_0(0x2E), 0x8078);
  if (VAR_15->rev >= 2)
   FUNC_4(VAR_13, FUNC_0(0x2F), 0x0202);
  else
   FUNC_4(VAR_13, FUNC_0(0x2F), 0x0101);
 }
 FUNC_7(VAR_13, 0x3F4, VAR_14->reg_3F4);
 FUNC_4(VAR_13, VAR_9, VAR_14->phy_pgactl);
 FUNC_4(VAR_13, FUNC_0(0x2A), VAR_14->phy_cck_2A);
 FUNC_4(VAR_13, VAR_12, VAR_14->phy_syncctl);
 FUNC_4(VAR_13, VAR_6, VAR_14->phy_dacctl);
 FUNC_6(VAR_13, 0x43, VAR_14->radio_43);
 FUNC_6(VAR_13, 0x7A, VAR_14->radio_7A);
 if (!FUNC_8(VAR_15)) {
  VAR_17 = VAR_14->radio_52;
  FUNC_5(VAR_13, 0x52, 0xFF0F, VAR_17);
 }
 FUNC_7(VAR_13, 0x3E2, VAR_14->reg_3E2);
 if (VAR_15->type == VAR_0 &&
     VAR_15->radio_ver == 0x2050 && VAR_15->radio_rev <= 5) {
  FUNC_4(VAR_13, FUNC_0(0x30), VAR_14->phy_cck_30);
  FUNC_4(VAR_13, FUNC_0(0x06), VAR_14->phy_cck_06);
 }
 if (VAR_15->rev >= 2) {
  FUNC_4(VAR_13, VAR_2, VAR_14->phy_analogover);
  FUNC_4(VAR_13, VAR_3,
         VAR_14->phy_analogoverval);
  FUNC_4(VAR_13, VAR_4, VAR_14->phy_classctl);
  FUNC_4(VAR_13, VAR_10, VAR_14->phy_rfover);
  FUNC_4(VAR_13, VAR_11, VAR_14->phy_rfoverval);
  FUNC_4(VAR_13, FUNC_0(0x3E), VAR_14->phy_cck_3E);
  FUNC_4(VAR_13, VAR_5, VAR_14->phy_crs0);
 }
 if (FUNC_3(VAR_13)) {
  VAR_17 = (VAR_14->phy_lo_mask & 0xBFFF);
  FUNC_4(VAR_13, VAR_8, VAR_17);
  FUNC_4(VAR_13, FUNC_1(0x01), VAR_14->phy_extg_01);
  FUNC_4(VAR_13, VAR_6, VAR_14->phy_dacctl_hwpctl);
  FUNC_4(VAR_13, FUNC_0(0x14), VAR_14->phy_cck_14);
  FUNC_4(VAR_13, VAR_7, VAR_14->phy_hpwr_tssictl);
 }
 FUNC_2(VAR_13, VAR_14->old_channel, 1);
}
