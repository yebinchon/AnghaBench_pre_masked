
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans_config {int bc_table_dword; int cmd_fifo; int cmd_queue; int command_names; int queue_watchdog_timeout; int rx_buf_size_8k; int n_no_reclaim_cmds; int const* no_reclaim_cmds; struct iwl_op_mode* op_mode; } ;
struct iwl_trans {int rx_mpdu_cmd_hdr_size; int hw_rev; int rx_mpdu_cmd; int dev; } ;
struct iwl_scan_cmd {int dummy; } ;
struct iwl_scan_channel {int dummy; } ;
struct iwl_rx_mpdu_res_start {int dummy; } ;
struct iwl_op_mode {struct iwl_trans* trans; int * ops; } ;
struct iwl_mvm {struct ieee80211_hw* hw; int scan_cmd; int phy_db; struct iwl_fw const* fw; struct iwl_trans* trans; int mutex; struct iwl_cfg const* cfg; int notif_wait; int sta_drained_wk; int roc_done_wk; int async_handlers_wk; int time_event_lock; int async_handlers_list; int time_event_list; int async_handlers_lock; int dev; } ;
struct TYPE_8__ {int flags; int max_probe_length; } ;
struct iwl_fw {char* fw_version; TYPE_3__ ucode_capa; } ;
struct iwl_cfg {int name; TYPE_1__* base_params; } ;
struct ieee80211_hw {TYPE_2__* wiphy; struct iwl_op_mode* priv; } ;
struct dentry {int dummy; } ;
struct TYPE_10__ {int init_dbg; } ;
struct TYPE_9__ {int wd_disable; int amsdu_size_8K; } ;
struct TYPE_7__ {int fw_version; } ;
struct TYPE_6__ {int wd_timeout; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,char*,...) ;
 int FUNC_4 (struct iwl_mvm*,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_mvm* FUNC_5 (struct iwl_op_mode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;

 struct ieee80211_hw* FUNC_7 (int,int *) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct iwl_mvm*,struct dentry*) ;
 int VAR_9 ;
 int FUNC_11 (struct iwl_mvm*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct iwl_trans*) ;
 int FUNC_15 (struct iwl_mvm*,int) ;
 int FUNC_16 (struct iwl_trans*,struct iwl_trans_config*) ;
 int FUNC_17 (struct iwl_trans*) ;
 int FUNC_18 (struct iwl_trans*,int) ;
 TYPE_5__ VAR_13 ;
 TYPE_4__ VAR_14 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int,char*,char*) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static struct iwl_op_mode *
FUNC_26(struct iwl_trans *VAR_15, const struct iwl_cfg *VAR_16,
        const struct iwl_fw *VAR_17, struct dentry *VAR_18)
{
 struct ieee80211_hw *VAR_19;
 struct iwl_op_mode *VAR_20;
 struct iwl_mvm *VAR_21;
 struct iwl_trans_config VAR_22 = {};
 static const u8 VAR_23[] = {
  128,
 };
 int VAR_24, VAR_25;




 VAR_19 = FUNC_7(sizeof(struct iwl_op_mode) +
    sizeof(struct iwl_mvm),
    &VAR_9);
 if (!VAR_19)
  return ((void*)0);

 VAR_20 = VAR_19->priv;
 VAR_20->ops = &VAR_10;
 VAR_20->trans = VAR_15;

 VAR_21 = FUNC_5(VAR_20);
 VAR_21->dev = VAR_15->dev;
 VAR_21->trans = VAR_15;
 VAR_21->cfg = VAR_16;
 VAR_21->fw = VAR_17;
 VAR_21->hw = VAR_19;

 FUNC_21(&VAR_21->mutex);
 FUNC_25(&VAR_21->async_handlers_lock);
 FUNC_1(&VAR_21->time_event_list);
 FUNC_1(&VAR_21->async_handlers_list);
 FUNC_25(&VAR_21->time_event_lock);

 FUNC_2(&VAR_21->async_handlers_wk, VAR_7);
 FUNC_2(&VAR_21->roc_done_wk, VAR_11);
 FUNC_2(&VAR_21->sta_drained_wk, VAR_12);

 FUNC_6(VAR_21->hw, VAR_21->trans->dev);





 VAR_22.op_mode = VAR_20;
 VAR_22.no_reclaim_cmds = VAR_23;
 VAR_22.n_no_reclaim_cmds = FUNC_0(VAR_23);
 VAR_22.rx_buf_size_8k = VAR_14.amsdu_size_8K;

 if (VAR_21->fw->ucode_capa.flags & VAR_3)
  VAR_22.bc_table_dword = 1;

 if (!VAR_14.wd_disable)
  VAR_22.queue_watchdog_timeout = VAR_16->base_params->wd_timeout;
 else
  VAR_22.queue_watchdog_timeout = VAR_4;

 VAR_22.command_names = VAR_8;

 VAR_22.cmd_queue = VAR_2;
 VAR_22.cmd_fifo = VAR_1;

 FUNC_24(VAR_21->hw->wiphy->fw_version,
   sizeof(VAR_21->hw->wiphy->fw_version),
   "%s", VAR_17->fw_version);


 FUNC_16(VAR_21->trans, &VAR_22);

 VAR_15->rx_mpdu_cmd = VAR_6;
 VAR_15->rx_mpdu_cmd_hdr_size = sizeof(struct iwl_rx_mpdu_res_start);


 FUNC_12(&VAR_21->notif_wait);


 VAR_21->phy_db = FUNC_14(VAR_15);
 if (!VAR_21->phy_db) {
  FUNC_3(VAR_21, "Cannot init phy_db\n");
  goto out_free;
 }

 FUNC_4(VAR_21, "Detected %s, REV=0x%X\n",
   VAR_21->cfg->name, VAR_21->trans->hw_rev);

 VAR_24 = FUNC_17(VAR_21->trans);
 if (VAR_24)
  goto out_free;

 FUNC_22(&VAR_21->mutex);
 VAR_24 = FUNC_15(VAR_21, 1);
 FUNC_23(&VAR_21->mutex);
 if (VAR_24 && !VAR_13.init_dbg) {
  FUNC_3(VAR_21, "Failed to run INIT ucode: %d\n", VAR_24);
  goto out_free;
 }


 if (!VAR_13.init_dbg)
  FUNC_18(VAR_21->trans, 0);

 VAR_25 = sizeof(struct iwl_scan_cmd) +
  VAR_21->fw->ucode_capa.max_probe_length +
  (VAR_5 * sizeof(struct iwl_scan_channel));
 VAR_21->scan_cmd = FUNC_20(VAR_25, VAR_0);
 if (!VAR_21->scan_cmd)
  goto out_free;

 VAR_24 = FUNC_11(VAR_21);
 if (VAR_24)
  goto out_free;

 VAR_24 = FUNC_10(VAR_21, VAR_18);
 if (VAR_24)
  goto out_unregister;

 return VAR_20;

 out_unregister:
 FUNC_9(VAR_21->hw);
 out_free:
 FUNC_13(VAR_21->phy_db);
 FUNC_19(VAR_21->scan_cmd);
 FUNC_18(VAR_15, 1);
 FUNC_8(VAR_21->hw);
 return ((void*)0);
}
