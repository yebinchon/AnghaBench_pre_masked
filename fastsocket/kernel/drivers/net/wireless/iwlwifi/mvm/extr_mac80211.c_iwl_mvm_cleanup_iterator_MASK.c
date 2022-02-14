
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int uploaded; int * phy_ctxt; int time_event_data; int color; int ap_sta_id; } ;
struct iwl_mvm {int time_event_lock; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, u8 *VAR_3,
         struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm *VAR_5 = VAR_2;
 struct iwl_mvm_vif *VAR_6 = FUNC_1(VAR_4);

 VAR_6->uploaded = 0;
 VAR_6->ap_sta_id = VAR_0;


 VAR_6->color++;

 FUNC_2(&VAR_5->time_event_lock);
 FUNC_0(VAR_5, &VAR_6->time_event_data);
 FUNC_3(&VAR_5->time_event_lock);

 if (VAR_4->type != VAR_1)
  VAR_6->phy_ctxt = ((void*)0);
}
