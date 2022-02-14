
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_1__ sta; int dev_hlid; } ;
struct wl1271 {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sta {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,struct sk_buff*,struct ieee80211_sta*) ;

u8 FUNC_3(struct wl1271 *VAR_3, struct wl12xx_vif *VAR_4,
        struct sk_buff *VAR_5, struct ieee80211_sta *VAR_6)
{
 struct ieee80211_tx_info *VAR_7;

 if (VAR_4->bss_type == VAR_0)
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7->flags & VAR_2) {
  FUNC_1(VAR_1, "tx offchannel");
  return VAR_4->dev_hlid;
 }

 return VAR_4->sta.hlid;
}
