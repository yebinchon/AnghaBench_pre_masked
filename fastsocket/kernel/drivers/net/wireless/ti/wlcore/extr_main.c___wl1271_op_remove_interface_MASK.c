
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int sta_hlid_map; int * ucast_rate_idx; int bcast_rate_idx; int mgmt_rate_idx; void* global_hlid; void* bcast_hlid; } ;
struct TYPE_7__ {int klv_template_id; int p2p_rate_idx; int ap_rate_idx; int basic_rate_idx; void* hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; int connection_loss_work; int rx_streaming_disable_work; int rx_streaming_enable_work; int rx_streaming_timer; void* dev_role_id; void* role_id; TYPE_3__ ap; int list; int * probereq; TYPE_2__ sta; void* dev_hlid; int flags; } ;
struct TYPE_9__ {scalar_t__ sta_sleep_auth; } ;
struct TYPE_10__ {TYPE_4__ conn; } ;
struct TYPE_6__ {scalar_t__ state; int * req; int scanned_ch; } ;
struct wl1271 {scalar_t__ state; scalar_t__ ap_count; int mutex; TYPE_5__ conf; scalar_t__ sta_count; int flags; struct wl12xx_vif* last_wlvif; int hw; struct ieee80211_vif* roc_vif; struct wl12xx_vif* sched_vif; TYPE_1__ scan; struct wl12xx_vif* scan_wlvif; } ;
struct ieee80211_vif {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct wl1271*,scalar_t__) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct wl1271*) ;
 int FUNC_18 (struct wl1271*) ;
 int FUNC_19 (struct wl1271*,void**) ;
 scalar_t__ FUNC_20 (struct wl12xx_vif*) ;
 int FUNC_21 (struct wl1271*,int *) ;
 int FUNC_22 (struct wl1271*) ;
 int FUNC_23 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_24 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_25 (struct ieee80211_vif*) ;
 int FUNC_26 (struct wl1271*,int *) ;

__attribute__((used)) static void FUNC_27(struct wl1271 *VAR_14,
      struct ieee80211_vif *VAR_15,
      bool VAR_16)
{
 struct wl12xx_vif *VAR_17 = FUNC_25(VAR_15);
 int VAR_18, VAR_19;
 bool VAR_20 = (VAR_17->bss_type == VAR_0);

 FUNC_14(VAR_4, "mac80211 remove interface");

 if (!FUNC_11(VAR_13, &VAR_17->flags))
  return;


 if (VAR_14->state == VAR_12)
  return;

 FUNC_16("down");

 if (VAR_14->scan.state != VAR_9 &&
     VAR_14->scan_wlvif == VAR_17) {




  FUNC_22(VAR_14);

  VAR_14->scan.state = VAR_9;
  FUNC_8(VAR_14->scan.scanned_ch, 0, sizeof(VAR_14->scan.scanned_ch));
  VAR_14->scan_wlvif = ((void*)0);
  VAR_14->scan.req = ((void*)0);
  FUNC_5(VAR_14->hw, 1);
 }

 if (VAR_14->sched_vif == VAR_17) {
  FUNC_6(VAR_14->hw);
  VAR_14->sched_vif = ((void*)0);
 }

 if (VAR_14->roc_vif == VAR_15) {
  VAR_14->roc_vif = ((void*)0);
  FUNC_4(VAR_14->hw);
 }

 if (!FUNC_12(VAR_6, &VAR_14->flags)) {

  VAR_19 = FUNC_18(VAR_14);
  if (VAR_19 < 0)
   goto deinit;

  if (VAR_17->bss_type == VAR_2 ||
      VAR_17->bss_type == VAR_1) {
   if (FUNC_20(VAR_17))
    FUNC_23(VAR_14, VAR_17);
  }

  VAR_19 = FUNC_19(VAR_14, &VAR_17->role_id);
  if (VAR_19 < 0)
   goto deinit;

  FUNC_17(VAR_14);
 }
deinit:
 FUNC_24(VAR_14, VAR_17);


 VAR_17->dev_hlid = VAR_10;

 if (VAR_17->bss_type == VAR_2 ||
     VAR_17->bss_type == VAR_1) {
  VAR_17->sta.hlid = VAR_10;
  FUNC_21(VAR_14, &VAR_17->sta.basic_rate_idx);
  FUNC_21(VAR_14, &VAR_17->sta.ap_rate_idx);
  FUNC_21(VAR_14, &VAR_17->sta.p2p_rate_idx);
  FUNC_26(VAR_14, &VAR_17->sta.klv_template_id);
 } else {
  VAR_17->ap.bcast_hlid = VAR_10;
  VAR_17->ap.global_hlid = VAR_10;
  FUNC_21(VAR_14, &VAR_17->ap.mgmt_rate_idx);
  FUNC_21(VAR_14, &VAR_17->ap.bcast_rate_idx);
  for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++)
   FUNC_21(VAR_14,
      &VAR_17->ap.ucast_rate_idx[VAR_18]);
  FUNC_15(VAR_14, VAR_17);
 }

 FUNC_3(VAR_17->probereq);
 VAR_17->probereq = ((void*)0);
 if (VAR_14->last_wlvif == VAR_17)
  VAR_14->last_wlvif = ((void*)0);
 FUNC_7(&VAR_17->list);
 FUNC_8(VAR_17->ap.sta_hlid_map, 0, sizeof(VAR_17->ap.sta_hlid_map));
 VAR_17->role_id = VAR_11;
 VAR_17->dev_role_id = VAR_11;

 if (VAR_20)
  VAR_14->ap_count--;
 else
  VAR_14->sta_count--;





 if (FUNC_12(VAR_6, &VAR_14->flags) &&
     !FUNC_12(VAR_5, &VAR_14->flags))
  goto unlock;

 if (VAR_14->ap_count == 0 && VAR_20 && VAR_14->sta_count) {
  u8 VAR_21 = VAR_14->conf.conn.sta_sleep_auth;

  if (VAR_21 != VAR_8)
   FUNC_13(VAR_14, VAR_21);

  else
   FUNC_13(VAR_14, VAR_7);
 }

unlock:
 FUNC_10(&VAR_14->mutex);

 FUNC_2(&VAR_17->rx_streaming_timer);
 FUNC_1(&VAR_17->rx_streaming_enable_work);
 FUNC_1(&VAR_17->rx_streaming_disable_work);
 FUNC_0(&VAR_17->connection_loss_work);

 FUNC_9(&VAR_14->mutex);
}
