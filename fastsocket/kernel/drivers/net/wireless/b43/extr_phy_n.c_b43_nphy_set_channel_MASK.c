
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_channel {scalar_t__ band; int center_freq; int hw_value; } ;
struct b43_phy {int rev; int channel_type; int channel_freq; int channel; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_nphy_channeltab_entry_rev3 {int phy_regs; } ;
struct b43_nphy_channeltab_entry_rev2 {int phy_regs; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int *,struct ieee80211_channel*) ;
 struct b43_nphy_channeltab_entry_rev2* FUNC_2 (struct b43_wldev*,int ) ;
 struct b43_nphy_channeltab_entry_rev3* FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev2 const*) ;
 int FUNC_7 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev3 const*) ;
 int FUNC_8 (struct b43_wldev*,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct b43_wldev *VAR_7,
    struct ieee80211_channel *VAR_8,
    enum nl80211_channel_type VAR_9)
{
 struct b43_phy *VAR_10 = &VAR_7->phy;

 const struct b43_nphy_channeltab_entry_rev2 *VAR_11 = ((void*)0);
 const struct b43_nphy_channeltab_entry_rev3 *VAR_12 = ((void*)0);

 u8 VAR_13;

 if (VAR_7->phy.rev >= 3) {
  VAR_12 = FUNC_3(VAR_7,
       VAR_8->center_freq);
  if (!VAR_12)
   return -VAR_3;
 } else {
  VAR_11 = FUNC_2(VAR_7,
       VAR_8->hw_value);
  if (!VAR_11)
   return -VAR_3;
 }



 VAR_10->channel = VAR_8->hw_value;
 VAR_10->channel_freq = VAR_8->center_freq;

 if (FUNC_0(VAR_10->channel_type) !=
  FUNC_0(VAR_9))
  ;

 if (VAR_9 == VAR_6)
  FUNC_5(VAR_7, VAR_1,
    VAR_2);
 else if (VAR_9 == VAR_5)
  FUNC_4(VAR_7, VAR_1,
    ~VAR_2);

 if (VAR_7->phy.rev >= 3) {
  VAR_13 = (VAR_8->band == VAR_4) ? 4 : 0;
  FUNC_8(VAR_7, 0x08, 0xFFFB, VAR_13);
  FUNC_7(VAR_7, VAR_12);
  FUNC_1(VAR_7, &(VAR_12->phy_regs), VAR_8);
 } else {
  VAR_13 = (VAR_8->band == VAR_4) ? 0x0020 : 0x0050;
  FUNC_8(VAR_7, VAR_0, 0xFF8F, VAR_13);
  FUNC_6(VAR_7, VAR_11);
  FUNC_1(VAR_7, &(VAR_11->phy_regs), VAR_8);
 }

 return 0;
}
