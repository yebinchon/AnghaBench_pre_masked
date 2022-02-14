
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; int * req; int scanned_ch; } ;
struct wl1271 {scalar_t__ state; int scan_complete_work; int mutex; int hw; TYPE_2__ scan; int * scan_wlvif; TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_3__ {int (* scan_stop ) (struct wl1271*,struct wl12xx_vif*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wl1271*) ;
 int FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_11 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_4,
         struct ieee80211_vif *VAR_5)
{
 struct wl1271 *VAR_6 = VAR_4->priv;
 struct wl12xx_vif *VAR_7 = FUNC_11(VAR_5);
 int VAR_8;

 FUNC_7(VAR_0, "mac80211 cancel hw scan");

 FUNC_3(&VAR_6->mutex);

 if (FUNC_6(VAR_6->state != VAR_3))
  goto out;

 if (VAR_6->scan.state == VAR_2)
  goto out;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8 < 0)
  goto out;

 if (VAR_6->scan.state != VAR_1) {
  VAR_8 = VAR_6->ops->scan_stop(VAR_6, VAR_7);
  if (VAR_8 < 0)
   goto out_sleep;
 }





 FUNC_10(VAR_6);

 VAR_6->scan.state = VAR_2;
 FUNC_2(VAR_6->scan.scanned_ch, 0, sizeof(VAR_6->scan.scanned_ch));
 VAR_6->scan_wlvif = ((void*)0);
 VAR_6->scan.req = ((void*)0);
 FUNC_1(VAR_6->hw, 1);

out_sleep:
 FUNC_8(VAR_6);
out:
 FUNC_4(&VAR_6->mutex);

 FUNC_0(&VAR_6->scan_complete_work);
}
