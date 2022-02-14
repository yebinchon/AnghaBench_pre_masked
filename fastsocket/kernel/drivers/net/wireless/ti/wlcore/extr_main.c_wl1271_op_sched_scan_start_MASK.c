
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; struct wl12xx_vif* sched_vif; TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sched_scan_ies {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct cfg80211_sched_scan_request {int dummy; } ;
struct TYPE_2__ {int (* sched_scan_start ) (struct wl1271*,struct wl12xx_vif*,struct cfg80211_sched_scan_request*,struct ieee80211_sched_scan_ies*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_sched_scan_request*,struct ieee80211_sched_scan_ies*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_7 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4,
          struct cfg80211_sched_scan_request *VAR_5,
          struct ieee80211_sched_scan_ies *VAR_6)
{
 struct wl1271 *VAR_7 = VAR_3->priv;
 struct wl12xx_vif *VAR_8 = FUNC_7(VAR_4);
 int VAR_9;

 FUNC_4(VAR_0, "wl1271_op_sched_scan_start");

 FUNC_0(&VAR_7->mutex);

 if (FUNC_3(VAR_7->state != VAR_2)) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = VAR_7->ops->sched_scan_start(VAR_7, VAR_8, VAR_5, VAR_6);
 if (VAR_9 < 0)
  goto out_sleep;

 VAR_7->sched_vif = VAR_8;

out_sleep:
 FUNC_5(VAR_7);
out:
 FUNC_1(&VAR_7->mutex);
 return VAR_9;
}
