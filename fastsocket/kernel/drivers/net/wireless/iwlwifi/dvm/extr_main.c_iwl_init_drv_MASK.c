
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int smps; } ;
struct iwl_priv {int dynamic_frag_thresh; int bt_duration; int bt_on_thresh; int bt_valid; int kill_cts_mask; int kill_ack_mask; TYPE_4__* cfg; int * contexts; int rx_statistics_jiffies; int ucode_owner; scalar_t__ agg_tids_count; int missed_beacon_threshold; TYPE_2__ current_ht_config; int iw_mode; int plcp_delta_threshold; int band; int calib_results; int mutex; int sta_lock; } ;
struct TYPE_8__ {TYPE_3__* bt_params; TYPE_1__* base_params; } ;
struct TYPE_7__ {scalar_t__ advanced_bt_coexist; } ;
struct TYPE_5__ {int plcp_delta_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*,int *) ;
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_13)
{
 FUNC_4(&VAR_13->sta_lock);

 FUNC_3(&VAR_13->mutex);

 FUNC_0(&VAR_13->calib_results);

 VAR_13->band = VAR_3;

 VAR_13->plcp_delta_threshold =
  VAR_13->cfg->base_params->plcp_delta_threshold;

 VAR_13->iw_mode = VAR_11;
 VAR_13->current_ht_config.smps = VAR_4;
 VAR_13->missed_beacon_threshold = VAR_8;
 VAR_13->agg_tids_count = 0;

 VAR_13->ucode_owner = VAR_9;

 VAR_13->rx_statistics_jiffies = VAR_12;


 FUNC_2(VAR_13, &VAR_13->contexts[VAR_10]);

 FUNC_1(VAR_13);


 if (VAR_13->cfg->bt_params &&
     VAR_13->cfg->bt_params->advanced_bt_coexist) {
  VAR_13->kill_ack_mask = VAR_6;
  VAR_13->kill_cts_mask = VAR_7;
  VAR_13->bt_valid = VAR_5;
  VAR_13->bt_on_thresh = VAR_2;
  VAR_13->bt_duration = VAR_0;
  VAR_13->dynamic_frag_thresh = VAR_1;
 }

 return 0;
}
