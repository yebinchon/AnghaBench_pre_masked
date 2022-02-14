
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ bss_type; int basic_rate_set; int beacon_int; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {int beacon_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wl1271*,int,struct ieee80211_vif*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct wl1271*,int ) ;
 struct wl12xx_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (struct wl1271*,struct ieee80211_vif*,int) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_5,
       struct ieee80211_vif *VAR_6,
       struct ieee80211_bss_conf *VAR_7,
       u32 VAR_8)
{
 struct wl12xx_vif *VAR_9 = FUNC_4(VAR_6);
 bool VAR_10 = (VAR_9->bss_type == VAR_3);
 int VAR_11 = 0;

 if (VAR_8 & VAR_2) {
  FUNC_1(VAR_4, "beacon interval updated: %d",
   VAR_7->beacon_int);

  VAR_9->beacon_int = VAR_7->beacon_int;
 }

 if ((VAR_8 & VAR_0) && VAR_10) {
  u32 VAR_12 = FUNC_3(VAR_5, VAR_9->basic_rate_set);

  FUNC_0(VAR_5, VAR_12, VAR_6);
 }

 if (VAR_8 & VAR_1) {
  VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_10);
  if (VAR_11 < 0)
   goto out;
 }

out:
 if (VAR_11 != 0)
  FUNC_2("beacon info change failed: %d", VAR_11);
 return VAR_11;
}
