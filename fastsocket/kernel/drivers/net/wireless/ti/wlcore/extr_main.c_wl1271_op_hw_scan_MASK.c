
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271 {scalar_t__ state; int mutex; int roc_map; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct cfg80211_scan_request {TYPE_1__* ssids; scalar_t__ n_ssids; } ;
struct TYPE_2__ {size_t ssid_len; int * ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*,struct ieee80211_vif*,int *,size_t,struct cfg80211_scan_request*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_5,
        struct ieee80211_vif *VAR_6,
        struct cfg80211_scan_request *VAR_7)
{
 struct wl1271 *VAR_8 = VAR_5->priv;
 int VAR_9;
 u8 *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;

 FUNC_4(VAR_0, "mac80211 hw scan");

 if (VAR_7->n_ssids) {
  VAR_10 = VAR_7->ssids[0].ssid;
  VAR_11 = VAR_7->ssids[0].ssid_len;
 }

 FUNC_1(&VAR_8->mutex);

 if (FUNC_3(VAR_8->state != VAR_4)) {





  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 < 0)
  goto out;


 if (FUNC_0(VAR_8->roc_map, VAR_3) < VAR_3) {

  VAR_9 = -VAR_2;
  goto out_sleep;
 }

 VAR_9 = FUNC_7(VAR_5->priv, VAR_6, VAR_10, VAR_11, VAR_7);
out_sleep:
 FUNC_5(VAR_8);
out:
 FUNC_2(&VAR_8->mutex);

 return VAR_9;
}
