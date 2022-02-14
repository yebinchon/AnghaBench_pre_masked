
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_time_event_cmd {void* notify; void* repeat; void* duration; void* interval_reciprocal; void* interval; void* max_delay; void* max_frags; void* is_present; int dep_policy; void* apply_time; void* id; void* id_and_color; void* action; } ;
struct iwl_mvm_time_event_data {scalar_t__ end_jiffies; int uid; scalar_t__ running; } ;
struct iwl_mvm_vif {int color; int id; struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int trans; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mvm_time_event_data*,struct iwl_time_event_cmd*) ;
 struct iwl_mvm_vif* FUNC_7 (struct ieee80211_vif*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

void FUNC_12(struct iwl_mvm *VAR_8,
        struct ieee80211_vif *VAR_9,
        u32 VAR_10, u32 VAR_11)
{
 struct iwl_mvm_vif *VAR_12 = FUNC_7(VAR_9);
 struct iwl_mvm_time_event_data *VAR_13 = &VAR_12->time_event_data;
 struct iwl_time_event_cmd VAR_14 = {};

 FUNC_10(&VAR_8->mutex);

 if (VAR_13->running &&
     FUNC_11(VAR_13->end_jiffies,
         VAR_7 + FUNC_2(VAR_11))) {
  FUNC_1(VAR_8, "We have enough time in the current TE: %u\n",
        FUNC_9(VAR_13->end_jiffies - VAR_7));
  return;
 }

 if (VAR_13->running) {
  FUNC_1(VAR_8, "extend 0x%x: only %u ms left\n",
        VAR_13->uid,
        FUNC_9(VAR_13->end_jiffies - VAR_7));
  FUNC_5(VAR_8, VAR_9);
 }

 VAR_14.action = FUNC_3(VAR_1);
 VAR_14.id_and_color =
  FUNC_3(FUNC_0(VAR_12->id, VAR_12->color));
 VAR_14.id = FUNC_3(VAR_2);

 VAR_14.apply_time =
  FUNC_3(FUNC_8(VAR_8->trans, VAR_0));

 VAR_14.dep_policy = VAR_4;
 VAR_14.is_present = FUNC_3(1);
 VAR_14.max_frags = FUNC_3(VAR_3);
 VAR_14.max_delay = FUNC_3(500);

 VAR_14.interval = FUNC_3(1);
 VAR_14.interval_reciprocal = FUNC_3(FUNC_4(1));
 VAR_14.duration = FUNC_3(VAR_10);
 VAR_14.repeat = FUNC_3(1);
 VAR_14.notify = FUNC_3(VAR_6 |
          VAR_5);

 FUNC_6(VAR_8, VAR_9, VAR_13, &VAR_14);
}
