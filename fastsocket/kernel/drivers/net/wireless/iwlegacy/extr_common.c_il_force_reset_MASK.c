
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_force_reset {scalar_t__ last_force_reset_jiffies; int reset_success_count; int reset_reject_count; scalar_t__ reset_duration; int reset_request_count; } ;
struct il_priv {int restart; int workqueue; int status; int wait_command_queue; TYPE_2__* cfg; struct il_force_reset force_reset; } ;
struct TYPE_4__ {TYPE_1__* mod_params; } ;
struct TYPE_3__ {int restart_fw; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct il_priv *VAR_6, bool VAR_7)
{
 struct il_force_reset *VAR_8;

 if (FUNC_5(VAR_2, &VAR_6->status))
  return -VAR_1;

 VAR_8 = &VAR_6->force_reset;
 VAR_8->reset_request_count++;
 if (!VAR_7) {
  if (VAR_8->last_force_reset_jiffies &&
      FUNC_6(VAR_8->last_force_reset_jiffies +
          VAR_8->reset_duration, VAR_5)) {
   FUNC_0("force reset rejected\n");
   VAR_8->reset_reject_count++;
   return -VAR_0;
  }
 }
 VAR_8->reset_success_count++;
 VAR_8->last_force_reset_jiffies = VAR_5;
 if (!VAR_7 && !VAR_6->cfg->mod_params->restart_fw) {
  FUNC_0("Cancel firmware reload based on "
         "module parameter setting\n");
  return 0;
 }

 FUNC_1("On demand firmware reload\n");


 FUNC_4(VAR_3, &VAR_6->status);
 FUNC_7(&VAR_6->wait_command_queue);




 FUNC_2(VAR_4, &VAR_6->status);
 FUNC_3(VAR_6->workqueue, &VAR_6->restart);

 return 0;
}
