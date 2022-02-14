
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ieee80211_channel {int hw_value; scalar_t__ band; } ;
struct b43_phy {int rev; int channel_type; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; TYPE_1__* dev; } ;
struct b43_phy_n_sfo_cfg {int dummy; } ;
struct b43_phy_n {scalar_t__ spur_avoid; scalar_t__ aband_spurwar_en; int txpwrctrl; } ;
struct TYPE_2__ {int chip_id; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,struct b43_phy_n_sfo_cfg const*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*,int ,int) ;
 int FUNC_10 (struct b43_wldev*,int ) ;
 int FUNC_11 (struct b43_wldev*,int ,int) ;
 int FUNC_12 (struct b43_wldev*,int ,int) ;
 int FUNC_13 (struct b43_wldev*,int ) ;
 int FUNC_14 (struct b43_wldev*,int ,int) ;
 int FUNC_15 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_16(struct b43_wldev *VAR_14,
    const struct b43_phy_n_sfo_cfg *VAR_15,
    struct ieee80211_channel *VAR_16)
{
 struct b43_phy *VAR_17 = &VAR_14->phy;
 struct b43_phy_n *VAR_18 = VAR_14->phy.n;
 int VAR_19 = VAR_16->hw_value;

 u16 VAR_20;
 u32 VAR_21;

 VAR_20 =
  FUNC_10(VAR_14, VAR_3) & VAR_4;
 if (VAR_16->band == VAR_13 && !VAR_20) {
  VAR_21 = FUNC_13(VAR_14, VAR_0);
  FUNC_15(VAR_14, VAR_0, VAR_21 | 4);
  FUNC_11(VAR_14, VAR_8, 0xC000);
  FUNC_15(VAR_14, VAR_0, VAR_21);
  FUNC_11(VAR_14, VAR_3, VAR_4);
 } else if (VAR_16->band == VAR_12 && VAR_20) {
  FUNC_9(VAR_14, VAR_3, ~VAR_4);
  VAR_21 = FUNC_13(VAR_14, VAR_0);
  FUNC_15(VAR_14, VAR_0, VAR_21 | 4);
  FUNC_9(VAR_14, VAR_8, 0x3FFF);
  FUNC_15(VAR_14, VAR_0, VAR_21);
 }

 FUNC_1(VAR_14, VAR_15);

 if (VAR_16->hw_value == 14) {
  FUNC_3(VAR_14, 2, 0);
  FUNC_11(VAR_14, VAR_9, 0x0800);
 } else {
  FUNC_3(VAR_14, 2, 2);
  if (VAR_16->band == VAR_12)
   FUNC_9(VAR_14, VAR_9, ~0x840);
 }

 if (!VAR_18->txpwrctrl)
  FUNC_8(VAR_14);

 if (VAR_14->phy.rev < 3)
  FUNC_2(VAR_14);

 FUNC_7(VAR_14);

 if (VAR_14->phy.rev >= 3 &&
     VAR_14->phy.n->spur_avoid != VAR_10) {
  bool VAR_22 = 0;
  if (VAR_14->phy.n->spur_avoid == VAR_11) {
   VAR_22 = 1;
  } else if (!FUNC_0(VAR_17->channel_type)) {
   if ((VAR_19 >= 5 && VAR_19 <= 8) || VAR_19 == 13 || VAR_19 == 14)
    VAR_22 = 1;
  } else {
   if (VAR_18->aband_spurwar_en &&
       (VAR_19 == 38 || VAR_19 == 102 || VAR_19 == 118))
    VAR_22 = VAR_14->dev->chip_id == 0x4716;
  }

  FUNC_4(VAR_14, VAR_22);

  if (VAR_14->dev->chip_id == 43222 || VAR_14->dev->chip_id == 43224 ||
      VAR_14->dev->chip_id == 43225) {
   FUNC_14(VAR_14, VAR_2,
        VAR_22 ? 0x5341 : 0x8889);
   FUNC_14(VAR_14, VAR_1, 0x8);
  }

  if (VAR_14->phy.rev == 3 || VAR_14->phy.rev == 4)
   ;

  if (VAR_22)
   FUNC_11(VAR_14, VAR_5, VAR_6);
  else
   FUNC_9(VAR_14, VAR_5,
         ~VAR_6 & 0xFFFF);

  FUNC_5(VAR_14);


 }

 FUNC_12(VAR_14, VAR_7, 0x3830);

 if (VAR_17->rev >= 3)
  FUNC_6(VAR_14);
}
