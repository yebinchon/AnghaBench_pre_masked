
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct iwl_mvm_vif {scalar_t__ id; scalar_t__ tsf_id; } ;
struct iwl_mvm_mac_iface_iterator_data {int found_vif; scalar_t__ preferred_tsf; int available_tsf_ids; struct ieee80211_vif* vif; int available_mac_ids; int used_hw_queues; } ;
struct ieee80211_vif {scalar_t__* hw_queue; scalar_t__ cab_queue; int type; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, u8 *VAR_4,
           struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm_mac_iface_iterator_data *VAR_6 = VAR_3;
 struct iwl_mvm_vif *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8;


 if (VAR_5 == VAR_6->vif) {
  VAR_6->found_vif = 1;
  return;
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (VAR_5->hw_queue[VAR_8] != VAR_0)
   FUNC_1(VAR_5->hw_queue[VAR_8], VAR_6->used_hw_queues);

 if (VAR_5->cab_queue != VAR_0)
  FUNC_1(VAR_5->cab_queue, VAR_6->used_hw_queues);
 FUNC_0(VAR_7->id, VAR_6->available_mac_ids);
 switch (VAR_6->vif->type) {
 case 128:







  if (VAR_5->type == 129) {
   if (VAR_6->preferred_tsf == VAR_2 &&
       FUNC_3(VAR_7->tsf_id, VAR_6->available_tsf_ids))
    VAR_6->preferred_tsf = VAR_7->tsf_id;
   return;
  }
  break;
 case 129:
  if (VAR_5->type == 128 ||
      VAR_5->type == 129) {
   if (VAR_6->preferred_tsf == VAR_2 &&
       FUNC_3(VAR_7->tsf_id, VAR_6->available_tsf_ids))
    VAR_6->preferred_tsf = VAR_7->tsf_id;
   return;
  }
  break;
 default:







  break;
 }







 FUNC_0(VAR_7->tsf_id, VAR_6->available_tsf_ids);

 if (VAR_6->preferred_tsf == VAR_7->tsf_id)
  VAR_6->preferred_tsf = VAR_2;
}
