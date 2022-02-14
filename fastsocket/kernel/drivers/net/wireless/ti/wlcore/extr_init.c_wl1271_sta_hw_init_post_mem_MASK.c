
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,int) ;
 struct wl12xx_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_0,
           struct ieee80211_vif *VAR_1)
{
 struct wl12xx_vif *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_2, 0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
