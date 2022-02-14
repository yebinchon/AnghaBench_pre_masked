
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl12xx_vif {scalar_t__ bss_type; int flags; int list; int role_id; struct wl1271* wl; } ;
struct wl1271 {scalar_t__ state; int mutex; int sta_count; int ap_count; int wlvif_list; TYPE_1__* addresses; int recovery_work; int flags; } ;
struct vif_counter_data {int dummy; } ;
struct ieee80211_vif {int driver_flags; int addr; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct wl1271*,int ,scalar_t__,int *) ;
 int FUNC_13 (struct wl1271*) ;
 scalar_t__ FUNC_14 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_15 (struct ieee80211_hw*,struct ieee80211_vif*,struct vif_counter_data*) ;
 int FUNC_16 (struct wl1271*) ;
 int FUNC_17 (struct wl1271*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_18 (struct wl1271*,struct vif_counter_data,int) ;
 struct wl12xx_vif* FUNC_19 (struct ieee80211_vif*) ;
 int FUNC_20 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_21(struct ieee80211_hw *VAR_12,
       struct ieee80211_vif *VAR_13)
{
 struct wl1271 *VAR_14 = VAR_12->priv;
 struct wl12xx_vif *VAR_15 = FUNC_19(VAR_13);
 struct vif_counter_data VAR_16;
 int VAR_17 = 0;
 u8 VAR_18;

 VAR_13->driver_flags |= VAR_5 |
        VAR_6;

 FUNC_7(VAR_1, "mac80211 add interface type %d mac %pM",
       FUNC_0(VAR_13), VAR_13->addr);

 FUNC_15(VAR_12, VAR_13, &VAR_16);

 FUNC_3(&VAR_14->mutex);
 VAR_17 = FUNC_10(VAR_14);
 if (VAR_17 < 0)
  goto out_unlock;






 if (FUNC_6(VAR_8, &VAR_14->flags) ||
     FUNC_6(VAR_11, &VAR_15->flags)) {
  VAR_17 = -VAR_2;
  goto out;
 }


 VAR_17 = FUNC_17(VAR_14, VAR_13);
 if (VAR_17 < 0)
  goto out;

 VAR_15->wl = VAR_14;
 VAR_18 = FUNC_14(VAR_14, VAR_15);
 if (VAR_18 == VAR_9) {
  VAR_17 = -VAR_3;
  goto out;
 }

 VAR_17 = FUNC_20(VAR_14, VAR_15);
 if (VAR_17 < 0)
  goto out;

 if (FUNC_18(VAR_14, VAR_16, 1)) {
  FUNC_13(VAR_14);
  FUNC_5(VAR_7, &VAR_14->flags);
  FUNC_4(&VAR_14->mutex);
  FUNC_11(&VAR_14->recovery_work);
  return 0;
 }





 if (VAR_14->state == VAR_10) {




  FUNC_2(VAR_14->addresses[0].addr, VAR_13->addr, VAR_4);

  VAR_17 = FUNC_16(VAR_14);
  if (VAR_17 < 0)
   goto out;
 }

 VAR_17 = FUNC_12(VAR_14, VAR_13->addr,
         VAR_18, &VAR_15->role_id);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_8(VAR_14, VAR_13);
 if (VAR_17 < 0)
  goto out;

 FUNC_1(&VAR_15->list, &VAR_14->wlvif_list);
 FUNC_5(VAR_11, &VAR_15->flags);

 if (VAR_15->bss_type == VAR_0)
  VAR_14->ap_count++;
 else
  VAR_14->sta_count++;
out:
 FUNC_9(VAR_14);
out_unlock:
 FUNC_4(&VAR_14->mutex);

 return VAR_17;
}
