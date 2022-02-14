
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int ap_sta_id; int color; int id; } ;
struct iwl_mvm_sta {int sta_id; int tid_data; int tfd_queue_msk; scalar_t__ tid_disable_agg; int max_agg_bufsize; struct ieee80211_vif* vif; int mac_id_n_color; int lock; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int * pending_frames; int status; int mutex; } ;
struct ieee80211_vif {scalar_t__* hw_queue; scalar_t__ type; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 struct iwl_mvm_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,struct ieee80211_sta*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct iwl_mvm *VAR_7,
      struct ieee80211_vif *VAR_8,
      struct ieee80211_sta *VAR_9)
{
 struct iwl_mvm_vif *VAR_10 = FUNC_6(VAR_8);
 struct iwl_mvm_sta *VAR_11 = (void *)VAR_9->drv_priv;
 int VAR_12, VAR_13, VAR_14;

 FUNC_7(&VAR_7->mutex);

 if (!FUNC_11(VAR_4, &VAR_7->status))
  VAR_14 = FUNC_4(VAR_7);
 else
  VAR_14 = VAR_11->sta_id;

 if (FUNC_2(VAR_14 == VAR_3))
  return -VAR_0;

 FUNC_10(&VAR_11->lock);

 VAR_11->sta_id = VAR_14;
 VAR_11->mac_id_n_color = FUNC_1(VAR_10->id,
            VAR_10->color);
 VAR_11->vif = VAR_8;
 VAR_11->max_agg_bufsize = VAR_5;


 FUNC_3(&VAR_7->pending_frames[VAR_14], 0);
 VAR_11->tid_disable_agg = 0;
 VAR_11->tfd_queue_msk = 0;
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  if (VAR_8->hw_queue[VAR_12] != VAR_1)
   VAR_11->tfd_queue_msk |= FUNC_0(VAR_8->hw_queue[VAR_12]);


 FUNC_8(VAR_11->tid_data, 0, sizeof(VAR_11->tid_data));

 VAR_13 = FUNC_5(VAR_7, VAR_9, 0);
 if (VAR_13)
  return VAR_13;


 if (VAR_8->type == VAR_6 &&
     VAR_10->ap_sta_id == VAR_3)
  VAR_10->ap_sta_id = VAR_14;

 FUNC_9(VAR_7->fw_id_to_mac_id[VAR_14], VAR_9);

 return 0;
}
