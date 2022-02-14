
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_time_event_notif {int action; int status; int unique_id; } ;
struct iwl_mvm_time_event_data {int end_jiffies; int running; TYPE_2__* vif; int duration; } ;
struct iwl_mvm {int hw; int status; int time_event_lock; } ;
struct TYPE_3__ {int dtim_period; int assoc; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ bss_conf; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*,struct iwl_mvm_time_event_data*) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct iwl_mvm *VAR_6,
        struct iwl_mvm_time_event_data *VAR_7,
        struct iwl_time_event_notif *VAR_8)
{
 FUNC_11(&VAR_6->time_event_lock);

 FUNC_0(VAR_6, "Handle time event notif - UID = 0x%x action %d\n",
       FUNC_10(VAR_8->unique_id),
       FUNC_10(VAR_8->action));
 FUNC_4(!FUNC_10(VAR_8->status),
    "Failed to schedule time event\n");

 if (FUNC_10(VAR_8->action) & VAR_3) {
  FUNC_0(VAR_6,
        "TE ended - current time %lu, estimated end %lu\n",
        VAR_5, VAR_7->end_jiffies);

  if (VAR_7->vif->type == VAR_1) {
   FUNC_7(VAR_6->hw);
   FUNC_8(VAR_6);
  }





  if (VAR_7->vif->type == VAR_2 &&
      (!VAR_7->vif->bss_conf.assoc ||
       !VAR_7->vif->bss_conf.dtim_period)) {
   FUNC_1(VAR_6,
    "No assocation and the time event is over already...\n");
   FUNC_5(VAR_7->vif);
  }

  FUNC_9(VAR_6, VAR_7);
 } else if (FUNC_10(VAR_8->action) & VAR_4) {
  VAR_7->running = 1;
  VAR_7->end_jiffies = VAR_5 +
   FUNC_3(VAR_7->duration);

  if (VAR_7->vif->type == VAR_1) {
   FUNC_12(VAR_0, &VAR_6->status);
   FUNC_6(VAR_6->hw);
  }
 } else {
  FUNC_2(VAR_6, "Got TE with unknown action\n");
 }
}
