
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271_station {int hlid; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; scalar_t__ aid; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*,int ) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_1,
     struct wl12xx_vif *VAR_2,
     struct ieee80211_sta *VAR_3)
{
 struct wl1271_station *VAR_4;
 int VAR_5 = 0;
 u8 VAR_6;

 FUNC_1(VAR_0, "mac80211 add sta %d", (int)VAR_3->aid);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = (struct wl1271_station *)VAR_3->drv_priv;
 VAR_6 = VAR_4->hlid;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_5 < 0)
  FUNC_2(VAR_1, VAR_2, VAR_6);

 return VAR_5;
}
