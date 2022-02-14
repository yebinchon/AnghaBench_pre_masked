
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_tid_data {scalar_t__ ssn; scalar_t__ next_reclaimed; int state; size_t txq_id; } ;
struct iwl_mvm_sta {int lock; struct ieee80211_vif* vif; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int * queue_to_mac80211; int trans; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__) ;


 int VAR_2 ;
 int FUNC_1 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_2 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_3,
          struct ieee80211_sta *VAR_4, u8 VAR_5)
{
 struct iwl_mvm_sta *VAR_6 = (void *)VAR_4->drv_priv;
 struct iwl_mvm_tid_data *VAR_7 = &VAR_6->tid_data[VAR_5];
 struct ieee80211_vif *VAR_8 = VAR_6->vif;

 FUNC_4(&VAR_6->lock);

 if (VAR_7->ssn != VAR_7->next_reclaimed)
  return;

 switch (VAR_7->state) {
 case 129:
  FUNC_0(VAR_3,
        "Can continue addBA flow ssn = next_recl = %d\n",
        VAR_7->next_reclaimed);
  VAR_7->state = VAR_1;
  FUNC_1(VAR_8, VAR_4->addr, VAR_5);
  break;

 case 128:
  FUNC_0(VAR_3,
        "Can continue DELBA flow ssn = next_recl = %d\n",
        VAR_7->next_reclaimed);
  FUNC_3(VAR_3->trans, VAR_7->txq_id);
  VAR_7->state = VAR_0;





  VAR_3->queue_to_mac80211[VAR_7->txq_id] =
     VAR_2;
  FUNC_2(VAR_8, VAR_4->addr, VAR_5);
  break;

 default:
  break;
 }
}
