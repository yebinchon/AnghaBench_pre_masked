
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_time_event_cmd {void* notify; void* repeat; void* duration; void* max_delay; void* max_frags; void* interval; void* is_present; void* dep_policy; void* apply_time; void* id; void* id_and_color; void* action; } ;
struct iwl_mvm_time_event_data {scalar_t__ running; } ;
struct iwl_mvm_vif {int color; int id; struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int roc_done_wk; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mvm_time_event_data*,struct iwl_time_event_cmd*) ;
 struct iwl_mvm_vif* FUNC_7 (struct ieee80211_vif*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iwl_mvm *VAR_8, struct ieee80211_vif *VAR_9,
     int VAR_10, enum ieee80211_roc_type VAR_11)
{
 struct iwl_mvm_vif *VAR_12 = FUNC_7(VAR_9);
 struct iwl_mvm_time_event_data *VAR_13 = &VAR_12->time_event_data;
 struct iwl_time_event_cmd VAR_14 = {};

 FUNC_8(&VAR_8->mutex);
 if (VAR_13->running) {
  FUNC_1(VAR_8, "P2P_DEVICE remain on channel already running\n");
  return -VAR_0;
 }





 FUNC_5(&VAR_8->roc_done_wk);

 VAR_14.action = FUNC_4(VAR_2);
 VAR_14.id_and_color =
  FUNC_4(FUNC_0(VAR_12->id, VAR_12->color));

 switch (VAR_11) {
 case 128:
  VAR_14.id = FUNC_4(VAR_4);
  break;
 case 129:
  VAR_14.id = FUNC_4(VAR_3);
  break;
 default:
  FUNC_3(1, "Got an invalid ROC type\n");
  return -VAR_1;
 }

 VAR_14.apply_time = FUNC_4(0);
 VAR_14.dep_policy = FUNC_4(VAR_5);
 VAR_14.is_present = FUNC_4(1);
 VAR_14.interval = FUNC_4(1);







 VAR_14.max_frags = FUNC_4(FUNC_2(VAR_10)/20);
 VAR_14.max_delay = FUNC_4(FUNC_2(VAR_10/2));
 VAR_14.duration = FUNC_4(FUNC_2(VAR_10));
 VAR_14.repeat = FUNC_4(1);
 VAR_14.notify = FUNC_4(VAR_7 |
          VAR_6);

 return FUNC_6(VAR_8, VAR_9, VAR_13, &VAR_14);
}
