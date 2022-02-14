
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int center_freq; } ;
struct b43_phy {int radio_ver; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_ht_channeltab_e_radio2059 {int phy_regs; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int *,struct ieee80211_channel*) ;
 struct b43_phy_ht_channeltab_e_radio2059* FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,struct b43_phy_ht_channeltab_e_radio2059 const*) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_1,
      struct ieee80211_channel *VAR_2,
      enum nl80211_channel_type VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_1->phy;

 const struct b43_phy_ht_channeltab_e_radio2059 *VAR_5 = ((void*)0);

 if (VAR_4->radio_ver == 0x2059) {
  VAR_5 = FUNC_1(VAR_1,
       VAR_2->center_freq);
  if (!VAR_5)
   return -VAR_0;
 } else {
  return -VAR_0;
 }



 if (VAR_4->radio_ver == 0x2059) {
  FUNC_2(VAR_1, VAR_5);
  FUNC_0(VAR_1, &(VAR_5->phy_regs),
      VAR_2);
 } else {
  return -VAR_0;
 }

 return 0;
}
