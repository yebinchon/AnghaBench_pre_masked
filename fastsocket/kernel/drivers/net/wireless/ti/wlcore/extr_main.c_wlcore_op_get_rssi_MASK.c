
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
typedef int s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_2,
          struct ieee80211_vif *VAR_3,
          struct ieee80211_sta *VAR_4,
          s8 *VAR_5)
{
 struct wl1271 *VAR_6 = VAR_2->priv;
 struct wl12xx_vif *VAR_7 = FUNC_6(VAR_3);
 int VAR_8 = 0;

 FUNC_3(VAR_0, "mac80211 get_rssi");

 FUNC_0(&VAR_6->mutex);

 if (FUNC_2(VAR_6->state != VAR_1))
  goto out;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 < 0)
  goto out_sleep;

 VAR_8 = FUNC_7(VAR_6, VAR_7, VAR_5);
 if (VAR_8 < 0)
  goto out_sleep;

out_sleep:
 FUNC_4(VAR_6);

out:
 FUNC_1(&VAR_6->mutex);

 return VAR_8;
}
