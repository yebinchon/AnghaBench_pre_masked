
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_time_event_cmd {int id; int duration; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm_time_event_data {scalar_t__ id; int list; void* duration; struct ieee80211_vif* vif; } ;
struct iwl_mvm {int time_event_lock; int notif_wait; int time_event_list; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,void*) ;
 int FUNC_2 (struct iwl_mvm*,char*,int) ;
 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct iwl_notification_wait*,int const*,int ,int ,struct iwl_mvm_time_event_data*) ;
 int FUNC_6 (struct iwl_mvm*,int const,int ,int,struct iwl_time_event_cmd*) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_mvm_time_event_data*) ;
 int VAR_3 ;
 int FUNC_8 (int *,struct iwl_notification_wait*) ;
 int FUNC_9 (int *,struct iwl_notification_wait*,int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct iwl_mvm *VAR_4,
           struct ieee80211_vif *VAR_5,
           struct iwl_mvm_time_event_data *VAR_6,
           struct iwl_time_event_cmd *VAR_7)
{
 static const u8 VAR_8[] = { 128 };
 struct iwl_notification_wait VAR_9;
 int VAR_10;

 FUNC_12(&VAR_4->mutex);

 FUNC_1(VAR_4, "Add new TE, duration %d TU\n",
       FUNC_10(VAR_7->duration));

 FUNC_13(&VAR_4->time_event_lock);
 if (FUNC_3(VAR_6->id != VAR_2)) {
  FUNC_14(&VAR_4->time_event_lock);
  return -VAR_1;
 }
 VAR_6->vif = VAR_5;
 VAR_6->duration = FUNC_10(VAR_7->duration);
 VAR_6->id = FUNC_10(VAR_7->id);
 FUNC_11(&VAR_6->list, &VAR_4->time_event_list);
 FUNC_14(&VAR_4->time_event_lock);
 FUNC_5(&VAR_4->notif_wait, &VAR_9,
       VAR_8,
       FUNC_0(VAR_8),
       VAR_3, VAR_6);

 VAR_10 = FUNC_6(VAR_4, 128, VAR_0,
       sizeof(*VAR_7), VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_4, "Couldn't send TIME_EVENT_CMD: %d\n", VAR_10);
  FUNC_8(&VAR_4->notif_wait, &VAR_9);
  goto out_clear_te;
 }


 VAR_10 = FUNC_9(&VAR_4->notif_wait, &VAR_9, 1);

 FUNC_4(VAR_10);

 if (VAR_10) {
 out_clear_te:
  FUNC_13(&VAR_4->time_event_lock);
  FUNC_7(VAR_4, VAR_6);
  FUNC_14(&VAR_4->time_event_lock);
 }
 return VAR_10;
}
