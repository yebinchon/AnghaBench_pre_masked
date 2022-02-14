
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int roc_map; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,int ,int,int ) ;

int FUNC_4(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1, u8 VAR_2,
        enum ieee80211_band VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(FUNC_2(VAR_2, VAR_0->roc_map)))
  return 0;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  goto out;

 FUNC_1(VAR_2, VAR_0->roc_map);
out:
 return VAR_5;
}
