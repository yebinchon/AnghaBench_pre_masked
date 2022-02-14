
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_tid_data {size_t txq_id; int state; } ;
struct iwl_mvm_sta {int lock; int sta_id; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int * queue_to_mac80211; int trans; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
typedef enum iwl_mvm_agg_state { ____Placeholder_iwl_mvm_agg_state } iwl_mvm_agg_state ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,size_t,size_t,int) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct iwl_mvm*,int ,int) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct iwl_mvm *VAR_3, struct ieee80211_vif *VAR_4,
       struct ieee80211_sta *VAR_5, u16 VAR_6)
{
 struct iwl_mvm_sta *VAR_7 = (void *)VAR_5->drv_priv;
 struct iwl_mvm_tid_data *VAR_8 = &VAR_7->tid_data[VAR_6];
 u16 VAR_9;
 enum iwl_mvm_agg_state VAR_10;





 FUNC_5(&VAR_7->lock);
 VAR_9 = VAR_8->txq_id;
 FUNC_1(VAR_3, "Flush AGG: sta %d tid %d q %d state %d\n",
       VAR_7->sta_id, VAR_6, VAR_9, VAR_8->state);
 VAR_10 = VAR_8->state;
 VAR_8->state = VAR_0;
 FUNC_6(&VAR_7->lock);

 if (VAR_10 >= VAR_1) {
  if (FUNC_3(VAR_3, FUNC_0(VAR_9), 1))
   FUNC_2(VAR_3, "Couldn't flush the AGG queue\n");

  FUNC_4(VAR_3->trans, VAR_8->txq_id);
 }

 VAR_3->queue_to_mac80211[VAR_8->txq_id] =
    VAR_2;

 return 0;
}
