
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 struct wl12xx_vif* FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1,
        struct ieee80211_sta *VAR_2,
        u32 VAR_3)
{
 struct wl12xx_vif *VAR_4 = FUNC_0(VAR_1);
 struct wl1271 *VAR_5 = VAR_0->priv;

 FUNC_1(VAR_5, VAR_4, VAR_2, VAR_3);
}
