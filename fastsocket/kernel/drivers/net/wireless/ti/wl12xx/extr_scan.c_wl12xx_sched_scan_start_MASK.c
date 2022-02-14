
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_sched_scan_ies {int dummy; } ;
struct cfg80211_sched_scan_request {int dummy; } ;


 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_sched_scan_request*,struct ieee80211_sched_scan_ies*) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_2(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1,
       struct cfg80211_sched_scan_request *VAR_2,
       struct ieee80211_sched_scan_ies *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1);
}
