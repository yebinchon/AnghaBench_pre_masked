
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_tid_data {size_t txq_id; int state; int ssn; int next_reclaimed; int seq_number; } ;
struct iwl_mvm_sta {int lock; int sta_id; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int * queue_to_mac80211; int mutex; int trans; int status; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;


 int FUNC_1 (struct iwl_mvm*,char*,int,int,...) ;

 int VAR_2 ;
 int FUNC_2 (struct iwl_mvm*,char*,size_t,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct iwl_mvm *VAR_5, struct ieee80211_vif *VAR_6,
       struct ieee80211_sta *VAR_7, u16 VAR_8)
{
 struct iwl_mvm_sta *VAR_9 = (void *)VAR_7->drv_priv;
 struct iwl_mvm_tid_data *VAR_10 = &VAR_9->tid_data[VAR_8];
 u16 VAR_11;
 int VAR_12;






 if (FUNC_8(VAR_4, &VAR_5->status)) {
  FUNC_3(VAR_6, VAR_7->addr, VAR_8);
  return 0;
 }

 FUNC_6(&VAR_9->lock);

 VAR_11 = VAR_10->txq_id;

 FUNC_1(VAR_5, "Stop AGG: sta %d tid %d q %d state %d\n",
       VAR_9->sta_id, VAR_8, VAR_11, VAR_10->state);

 switch (VAR_10->state) {
 case 130:
  VAR_10->ssn = FUNC_0(VAR_10->seq_number);

  FUNC_1(VAR_5,
        "ssn = %d, next_recl = %d\n",
        VAR_10->ssn, VAR_10->next_reclaimed);


  if (VAR_10->ssn != VAR_10->next_reclaimed) {
   VAR_10->state = VAR_2;
   VAR_12 = 0;
   break;
  }

  VAR_10->ssn = 0xffff;
  FUNC_4(VAR_5->trans, VAR_11);

 case 129:
 case 128:






  FUNC_5(&VAR_5->mutex);
  VAR_5->queue_to_mac80211[VAR_11] = VAR_3;

  FUNC_3(VAR_6, VAR_7->addr, VAR_8);
  VAR_10->state = VAR_1;
  VAR_12 = 0;
  break;
 default:
  FUNC_2(VAR_5,
   "Stopping AGG while state not ON or starting for %d on %d (%d)\n",
   VAR_9->sta_id, VAR_8, VAR_10->state);
  FUNC_2(VAR_5,
   "\ttid_data->txq_id = %d\n", VAR_10->txq_id);
  VAR_12 = -VAR_0;
 }

 FUNC_7(&VAR_9->lock);

 return VAR_12;
}
