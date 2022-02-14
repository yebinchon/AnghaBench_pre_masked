
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ power_level; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_conf {scalar_t__ power_level; } ;


 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1,
        struct ieee80211_conf *VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (VAR_2->power_level != VAR_1->power_level) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2->power_level);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_1->power_level = VAR_2->power_level;
 }

 return 0;
}
