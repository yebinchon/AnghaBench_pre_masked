
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,int *) ;
 struct wl12xx_vif* FUNC_7 (struct ieee80211_vif*) ;

__attribute__((used)) static u64 FUNC_8(struct ieee80211_hw *VAR_3,
        struct ieee80211_vif *VAR_4)
{

 struct wl1271 *VAR_5 = VAR_3->priv;
 struct wl12xx_vif *VAR_6 = FUNC_7(VAR_4);
 u64 VAR_7 = VAR_1;
 int VAR_8;

 FUNC_3(VAR_0, "mac80211 get tsf");

 FUNC_0(&VAR_5->mutex);

 if (FUNC_2(VAR_5->state != VAR_2))
  goto out;

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_6(VAR_5, VAR_6, &VAR_7);
 if (VAR_8 < 0)
  goto out_sleep;

out_sleep:
 FUNC_4(VAR_5);

out:
 FUNC_1(&VAR_5->mutex);
 return VAR_7;
}
