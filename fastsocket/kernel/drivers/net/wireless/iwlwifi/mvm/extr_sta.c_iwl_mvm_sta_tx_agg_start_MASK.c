
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_tid_data {scalar_t__ state; size_t ssn; int txq_id; scalar_t__ next_reclaimed; int seq_number; } ;
struct iwl_mvm_sta {int lock; int sta_id; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {scalar_t__* queue_to_mac80211; int mutex; } ;
struct ieee80211_vif {scalar_t__* hw_queue; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,size_t,int,size_t,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t* VAR_10 ;

int FUNC_8(struct iwl_mvm *VAR_11, struct ieee80211_vif *VAR_12,
        struct ieee80211_sta *VAR_13, u16 VAR_14, u16 *VAR_15)
{
 struct iwl_mvm_sta *VAR_16 = (void *)VAR_13->drv_priv;
 struct iwl_mvm_tid_data *VAR_17;
 int VAR_18;

 if (FUNC_3(VAR_14 >= VAR_7))
  return -VAR_0;

 if (VAR_16->tid_data[VAR_14].state != VAR_3) {
  FUNC_2(VAR_11, "Start AGG when state is not IWL_AGG_OFF %d!\n",
   VAR_16->tid_data[VAR_14].state);
  return -VAR_2;
 }

 FUNC_5(&VAR_11->mutex);

 for (VAR_18 = VAR_8;
      VAR_18 <= VAR_9; VAR_18++)
  if (VAR_11->queue_to_mac80211[VAR_18] ==
      VAR_6)
   break;

 if (VAR_18 > VAR_9) {
  FUNC_2(VAR_11, "Failed to allocate agg queue\n");
  return -VAR_1;
 }


 VAR_11->queue_to_mac80211[VAR_18] = VAR_12->hw_queue[VAR_10[VAR_14]];

 FUNC_6(&VAR_16->lock);
 VAR_17 = &VAR_16->tid_data[VAR_14];
 VAR_17->ssn = FUNC_0(VAR_17->seq_number);
 VAR_17->txq_id = VAR_18;
 *VAR_15 = VAR_17->ssn;

 FUNC_1(VAR_11,
       "Start AGG: sta %d tid %d queue %d - ssn = %d, next_recl = %d\n",
       VAR_16->sta_id, VAR_14, VAR_18, VAR_17->ssn,
       VAR_17->next_reclaimed);

 if (VAR_17->ssn == VAR_17->next_reclaimed) {
  VAR_17->state = VAR_4;
  FUNC_4(VAR_12, VAR_13->addr, VAR_14);
 } else {
  VAR_17->state = VAR_5;
 }

 FUNC_7(&VAR_16->lock);

 return 0;
}
