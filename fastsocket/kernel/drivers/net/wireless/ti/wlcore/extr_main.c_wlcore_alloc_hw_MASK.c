
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct wl1271 {int sg_enabled; int hw_pg_ver; int num_tx_desc; int mbox_size; void* priv; int freezable_wq; int * aggr_buf; int dummy_packet; int * fwlog; void* mbox; void* buffer_32; void* aggr_buf_size; int nvs_loading_complete; int flush_mutex; int mutex; int fw_type; int state; int wl_lock; int ** tx_frames; struct wl1271* tx_frames_map; int links_map; int fwlog_waitq; scalar_t__ fwlog_size; scalar_t__ active_link_count; scalar_t__ active_sta_count; int system_hlid; scalar_t__ platform_quirks; scalar_t__ quirks; scalar_t__ ap_fw_ps_map; scalar_t__ ap_ps_map; scalar_t__ recovery_count; int sleep_auth; scalar_t__ flags; int channel_type; int band; int power_level; scalar_t__ rx_counter; int channel; int tx_watchdog_work; int roc_complete_work; int scan_complete_work; int recovery_work; int tx_work; int netstack_work; int elp_work; int deferred_tx_queue; int deferred_rx_queue; TYPE_1__* links; struct ieee80211_hw* hw; int wlvif_list; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {int * tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct ieee80211_hw* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long,unsigned int) ;
 unsigned int FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int) ;
 struct ieee80211_hw* FUNC_14 (int,int *) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (void*) ;
 void* FUNC_19 (int,int) ;
 void* FUNC_20 (size_t,int) ;
 int FUNC_21 (struct wl1271*,int ,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct wl1271*) ;
 int VAR_14 ;
 int FUNC_26 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_27 (struct wl1271*) ;
 int VAR_20 ;
 int VAR_21 ;

struct ieee80211_hw *FUNC_28(size_t VAR_22, u32 VAR_23,
         u32 VAR_24)
{
 struct ieee80211_hw *VAR_25;
 struct wl1271 *VAR_26;
 int VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30;

 FUNC_0(VAR_0 > VAR_11);

 VAR_25 = FUNC_14(sizeof(*VAR_26), &VAR_16);
 if (!VAR_25) {
  FUNC_26("could not alloc ieee80211_hw");
  VAR_29 = -VAR_1;
  goto err_hw_alloc;
 }

 VAR_26 = VAR_25->priv;
 FUNC_21(VAR_26, 0, sizeof(*VAR_26));

 VAR_26->priv = FUNC_20(VAR_22, VAR_3);
 if (!VAR_26->priv) {
  FUNC_26("could not alloc wl priv");
  VAR_29 = -VAR_1;
  goto err_priv_alloc;
 }

 FUNC_3(&VAR_26->wlvif_list);

 VAR_26->hw = VAR_25;

 for (VAR_27 = 0; VAR_27 < VAR_6; VAR_27++)
  for (VAR_28 = 0; VAR_28 < VAR_11; VAR_28++)
   FUNC_23(&VAR_26->links[VAR_28].tx_queue[VAR_27]);

 FUNC_23(&VAR_26->deferred_rx_queue);
 FUNC_23(&VAR_26->deferred_tx_queue);

 FUNC_2(&VAR_26->elp_work, VAR_14);
 FUNC_4(&VAR_26->netstack_work, VAR_15);
 FUNC_4(&VAR_26->tx_work, VAR_19);
 FUNC_4(&VAR_26->recovery_work, VAR_17);
 FUNC_2(&VAR_26->scan_complete_work, VAR_18);
 FUNC_2(&VAR_26->roc_complete_work, VAR_21);
 FUNC_2(&VAR_26->tx_watchdog_work, VAR_20);

 VAR_26->freezable_wq = FUNC_7("wl12xx_wq");
 if (!VAR_26->freezable_wq) {
  VAR_29 = -VAR_1;
  goto err_hw;
 }

 VAR_26->channel = VAR_7;
 VAR_26->rx_counter = 0;
 VAR_26->power_level = VAR_8;
 VAR_26->band = VAR_4;
 VAR_26->channel_type = VAR_5;
 VAR_26->flags = 0;
 VAR_26->sg_enabled = 1;
 VAR_26->sleep_auth = VAR_9;
 VAR_26->recovery_count = 0;
 VAR_26->hw_pg_ver = -1;
 VAR_26->ap_ps_map = 0;
 VAR_26->ap_fw_ps_map = 0;
 VAR_26->quirks = 0;
 VAR_26->platform_quirks = 0;
 VAR_26->system_hlid = VAR_12;
 VAR_26->active_sta_count = 0;
 VAR_26->active_link_count = 0;
 VAR_26->fwlog_size = 0;
 FUNC_17(&VAR_26->fwlog_waitq);


 FUNC_6(VAR_12, VAR_26->links_map);

 FUNC_21(VAR_26->tx_frames_map, 0, sizeof(VAR_26->tx_frames_map));
 for (VAR_27 = 0; VAR_27 < VAR_26->num_tx_desc; VAR_27++)
  VAR_26->tx_frames[VAR_27] = ((void*)0);

 FUNC_24(&VAR_26->wl_lock);

 VAR_26->state = VAR_13;
 VAR_26->fw_type = VAR_10;
 FUNC_22(&VAR_26->mutex);
 FUNC_22(&VAR_26->flush_mutex);
 FUNC_16(&VAR_26->nvs_loading_complete);

 VAR_30 = FUNC_12(VAR_23);
 VAR_26->aggr_buf = (u8 *)FUNC_5(VAR_3, VAR_30);
 if (!VAR_26->aggr_buf) {
  VAR_29 = -VAR_1;
  goto err_wq;
 }
 VAR_26->aggr_buf_size = VAR_23;

 VAR_26->dummy_packet = FUNC_27(VAR_26);
 if (!VAR_26->dummy_packet) {
  VAR_29 = -VAR_1;
  goto err_aggr;
 }


 VAR_26->fwlog = (u8 *)FUNC_13(VAR_3);
 if (!VAR_26->fwlog) {
  VAR_29 = -VAR_1;
  goto err_dummy_packet;
 }

 VAR_26->mbox_size = VAR_24;
 VAR_26->mbox = FUNC_19(VAR_26->mbox_size, VAR_3 | VAR_2);
 if (!VAR_26->mbox) {
  VAR_29 = -VAR_1;
  goto err_fwlog;
 }

 VAR_26->buffer_32 = FUNC_19(sizeof(*VAR_26->buffer_32), VAR_3);
 if (!VAR_26->buffer_32) {
  VAR_29 = -VAR_1;
  goto err_mbox;
 }

 return VAR_25;

err_mbox:
 FUNC_18(VAR_26->mbox);

err_fwlog:
 FUNC_10((unsigned long)VAR_26->fwlog);

err_dummy_packet:
 FUNC_9(VAR_26->dummy_packet);

err_aggr:
 FUNC_11((unsigned long)VAR_26->aggr_buf, VAR_30);

err_wq:
 FUNC_8(VAR_26->freezable_wq);

err_hw:
 FUNC_25(VAR_26);
 FUNC_18(VAR_26->priv);

err_priv_alloc:
 FUNC_15(VAR_25);

err_hw_alloc:

 return FUNC_1(VAR_29);
}
