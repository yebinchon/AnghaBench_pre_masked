
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwl8k_vif {int dummy; } ;
struct mwl8k_sta {int dummy; } ;
struct mwl8k_priv {int radio_on; int radio_short_preamble; int cookie_dma; int * cookie; int pdev; TYPE_1__* device_info; scalar_t__ sta_macids_supported; scalar_t__ ap_macids_supported; int * tx_wait; int stream_lock; int tx_lock; int * hostcmd_wait; scalar_t__ fw_mutex_depth; int * fw_mutex_owner; int fw_mutex; int poll_rx_task; int poll_tx_task; int fw_reload; int watchdog_ba_handle; int finalize_join_worker; int vif_list; scalar_t__ macids_used; scalar_t__ ap_fw; struct ieee80211_hw* hw; } ;
struct mwl8k_dma_data {int dummy; } ;
struct ieee80211_hw {int extra_tx_headroom; int channel_change_time; int flags; int vif_data_size; int sta_data_size; TYPE_2__* wiphy; int queues; } ;
struct ieee80211_cts {int dummy; } ;
struct TYPE_4__ {int n_iface_combinations; int interface_modes; int * iface_combinations; } ;
struct TYPE_3__ {scalar_t__ fw_image_sta; scalar_t__ fw_image_ap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct mwl8k_priv*) ;
 int VAR_11 ;
 int FUNC_8 (struct ieee80211_hw*,int ) ;
 int VAR_12 ;
 int FUNC_9 (struct mwl8k_priv*) ;
 int FUNC_10 (struct ieee80211_hw*,int) ;
 int VAR_13 ;
 int * FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int ,int,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,unsigned long) ;
 int FUNC_16 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_17(struct mwl8k_priv *VAR_14)
{
 struct ieee80211_hw *VAR_15 = VAR_14->hw;
 int VAR_16, VAR_17;

 VAR_17 = FUNC_5(VAR_15);
 FUNC_7(VAR_14);
 if (VAR_17) {
  FUNC_16(VAR_15->wiphy, "Cannot start firmware\n");
  return VAR_17;
 }





 VAR_15->extra_tx_headroom =
  sizeof(struct mwl8k_dma_data) - sizeof(struct ieee80211_cts);

 VAR_15->extra_tx_headroom -= VAR_14->ap_fw ? VAR_7 : 0;

 VAR_15->channel_change_time = 10;

 VAR_15->queues = VAR_4;


 VAR_15->flags |= VAR_3 | VAR_2;





 if (VAR_14->ap_fw)
  VAR_15->flags |= VAR_1;

 VAR_15->vif_data_size = sizeof(struct mwl8k_vif);
 VAR_15->sta_data_size = sizeof(struct mwl8k_sta);

 VAR_14->macids_used = 0;
 FUNC_1(&VAR_14->vif_list);


 VAR_14->radio_on = 0;
 VAR_14->radio_short_preamble = 0;


 FUNC_2(&VAR_14->finalize_join_worker, VAR_9);

 FUNC_2(&VAR_14->watchdog_ba_handle, VAR_13);

 FUNC_2(&VAR_14->fw_reload, VAR_10);


 FUNC_15(&VAR_14->poll_tx_task, VAR_12, (unsigned long)VAR_15);
 FUNC_14(&VAR_14->poll_tx_task);
 FUNC_15(&VAR_14->poll_rx_task, VAR_11, (unsigned long)VAR_15);
 FUNC_14(&VAR_14->poll_rx_task);


 VAR_14->cookie = FUNC_11(VAR_14->pdev, 4, &VAR_14->cookie_dma);
 if (VAR_14->cookie == ((void*)0))
  return -VAR_0;

 FUNC_4(&VAR_14->fw_mutex);
 VAR_14->fw_mutex_owner = ((void*)0);
 VAR_14->fw_mutex_depth = 0;
 VAR_14->hostcmd_wait = ((void*)0);

 FUNC_13(&VAR_14->tx_lock);

 FUNC_13(&VAR_14->stream_lock);

 VAR_14->tx_wait = ((void*)0);

 VAR_17 = FUNC_6(VAR_15);
 if (VAR_17)
  goto err_free_cookie;

 VAR_15->wiphy->interface_modes = 0;

 if (VAR_14->ap_macids_supported || VAR_14->device_info->fw_image_ap) {
  VAR_15->wiphy->interface_modes |= FUNC_0(VAR_5);
  VAR_15->wiphy->interface_modes |= FUNC_0(VAR_6);
  VAR_15->wiphy->iface_combinations = &VAR_8;
  VAR_15->wiphy->n_iface_combinations = 1;
 }

 if (VAR_14->sta_macids_supported || VAR_14->device_info->fw_image_sta)
  VAR_15->wiphy->interface_modes |= FUNC_0(VAR_6);

 VAR_17 = FUNC_3(VAR_15);
 if (VAR_17) {
  FUNC_16(VAR_15->wiphy, "Cannot register device\n");
  goto err_unprobe_hw;
 }

 return 0;

err_unprobe_hw:
 for (VAR_16 = 0; VAR_16 < FUNC_9(VAR_14); VAR_16++)
  FUNC_10(VAR_15, VAR_16);
 FUNC_8(VAR_15, 0);

err_free_cookie:
 if (VAR_14->cookie != ((void*)0))
  FUNC_12(VAR_14->pdev, 4,
    VAR_14->cookie, VAR_14->cookie_dma);

 return VAR_17;
}
