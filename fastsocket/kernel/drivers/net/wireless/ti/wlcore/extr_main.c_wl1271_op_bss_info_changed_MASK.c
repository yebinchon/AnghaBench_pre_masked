
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ bss_type; int flags; int connection_loss_work; int role_id; } ;
struct wl1271 {scalar_t__ state; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct ieee80211_bss_conf {int enable_beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_6 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_7 (int ,char*,int ,int) ;
 int FUNC_8 (struct wl1271*) ;
 int FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_11 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_6,
           struct ieee80211_vif *VAR_7,
           struct ieee80211_bss_conf *VAR_8,
           u32 VAR_9)
{
 struct wl1271 *VAR_10 = VAR_6->priv;
 struct wl12xx_vif *VAR_11 = FUNC_11(VAR_7);
 bool VAR_12 = (VAR_11->bss_type == VAR_2);
 int VAR_13;

 FUNC_7(VAR_3, "mac80211 bss info role %d changed 0x%x",
       VAR_11->role_id, (int)VAR_9);





 if (!VAR_12 && (VAR_9 & VAR_0))
  FUNC_0(&VAR_11->connection_loss_work);

 if (VAR_12 && (VAR_9 & VAR_1) &&
     !VAR_8->enable_beacon)
  FUNC_10(VAR_10);

 FUNC_1(&VAR_10->mutex);

 if (FUNC_4(VAR_10->state != VAR_4))
  goto out;

 if (FUNC_4(!FUNC_3(VAR_5, &VAR_11->flags)))
  goto out;

 VAR_13 = FUNC_9(VAR_10);
 if (VAR_13 < 0)
  goto out;

 if (VAR_12)
  FUNC_5(VAR_10, VAR_7, VAR_8, VAR_9);
 else
  FUNC_6(VAR_10, VAR_7, VAR_8, VAR_9);

 FUNC_8(VAR_10);

out:
 FUNC_2(&VAR_10->mutex);
}
