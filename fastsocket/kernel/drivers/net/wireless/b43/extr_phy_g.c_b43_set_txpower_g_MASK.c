
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43_phy {int radio_ver; int radio_rev; struct b43_phy_g* g; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct b43_txpower_lo_control {int tx_bias; int tx_magn; } ;
struct b43_rfatt {int att; } ;
struct TYPE_2__ {int with_padmix; } ;
struct b43_phy_g {int tx_control; TYPE_1__ bbatt; TYPE_1__ rfatt; struct b43_txpower_lo_control* lo_control; } ;
struct b43_bbatt {int att; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_6 (int ,char*,int,int,int,int,int) ;
 scalar_t__ FUNC_7 (struct b43_phy*) ;
 int FUNC_8 (TYPE_1__*,struct b43_rfatt const*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_4,
         const struct b43_bbatt *VAR_5,
         const struct b43_rfatt *VAR_6, u8 VAR_7)
{
 struct b43_phy *VAR_8 = &VAR_4->phy;
 struct b43_phy_g *VAR_9 = VAR_8->g;
 struct b43_txpower_lo_control *VAR_10 = VAR_9->lo_control;
 u16 VAR_11, VAR_12;
 u16 VAR_13, VAR_14;

 VAR_11 = VAR_5->att;
 VAR_12 = VAR_6->att;
 VAR_13 = VAR_10->tx_bias;
 VAR_14 = VAR_10->tx_magn;
 if (FUNC_9(VAR_13 == 0xFF))
  VAR_13 = 0;



 VAR_9->tx_control = VAR_7;
 FUNC_8(&VAR_9->rfatt, VAR_6, sizeof(*VAR_6));
 VAR_9->rfatt.with_padmix = !!(VAR_7 & VAR_3);
 FUNC_8(&VAR_9->bbatt, VAR_5, sizeof(*VAR_5));

 if (FUNC_0(VAR_4, VAR_0)) {
  FUNC_6(VAR_4->wl, "Tuning TX-power to bbatt(%u), "
         "rfatt(%u), tx_control(0x%02X), "
         "tx_bias(0x%02X), tx_magn(0x%02X)\n",
         VAR_11, VAR_12, VAR_7, VAR_13, VAR_14);
 }

 FUNC_1(VAR_4, VAR_11);
 FUNC_5(VAR_4, VAR_1, VAR_2, VAR_12);
 if (VAR_8->radio_ver == 0x2050 && VAR_8->radio_rev == 8) {
  FUNC_4(VAR_4, 0x43,
      (VAR_12 & 0x000F) | (VAR_7 & 0x0070));
 } else {
  FUNC_3(VAR_4, 0x43, 0xFFF0, (VAR_12 & 0x000F));
  FUNC_3(VAR_4, 0x52, ~0x0070, (VAR_7 & 0x0070));
 }
 if (FUNC_7(VAR_8)) {
  FUNC_4(VAR_4, 0x52, VAR_14 | VAR_13);
 } else {
  FUNC_3(VAR_4, 0x52, 0xFFF0, (VAR_13 & 0x000F));
 }
 FUNC_2(VAR_4);
}
