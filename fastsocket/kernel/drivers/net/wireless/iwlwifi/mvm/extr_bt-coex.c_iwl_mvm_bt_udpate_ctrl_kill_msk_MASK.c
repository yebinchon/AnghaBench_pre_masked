
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_bt_coex_profile_notif {int dummy; } ;
struct iwl_mvm {int bt_kill_msk; int mutex; struct iwl_bt_coex_profile_notif last_bt_notif; } ;
struct iwl_bt_coex_cmd {int valid_bit_msk; void* kill_cts_msk; void* kill_ack_msk; } ;
typedef enum iwl_bt_kill_msk { ____Placeholder_iwl_bt_kill_msk } iwl_bt_kill_msk ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct iwl_bt_coex_profile_notif*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct iwl_mvm*,char*,int,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_bt_coex_cmd*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iwl_mvm *VAR_12,
        bool VAR_13)
{
 enum iwl_bt_kill_msk VAR_14;
 struct iwl_bt_coex_cmd VAR_15 = {};
 struct iwl_bt_coex_profile_notif *VAR_16 = &VAR_12->last_bt_notif;

 FUNC_5(&VAR_12->mutex);

 if (VAR_13) {

  VAR_14 = VAR_3;
 } else {

  if (FUNC_0(VAR_16, 3, VAR_8) ||
      FUNC_0(VAR_16, 3, VAR_0) ||
      FUNC_0(VAR_16, 3, VAR_9))
   VAR_14 = VAR_4;
  else
   VAR_14 = VAR_2;
 }

 FUNC_1(VAR_12,
         "Update kill_msk: %d - SCO %sactive A2DP %sactive SNIFF %sactive\n",
         VAR_14,
         FUNC_0(VAR_16, 3, VAR_8) ? "" : "in",
         FUNC_0(VAR_16, 3, VAR_0) ? "" : "in",
         FUNC_0(VAR_16, 3, VAR_9) ? "" : "in");


 if (VAR_14 == VAR_12->bt_kill_msk)
  return 0;

 VAR_12->bt_kill_msk = VAR_14;
 VAR_15.kill_ack_msk = FUNC_3(VAR_10[VAR_14]);
 VAR_15.kill_cts_msk = FUNC_3(VAR_11[VAR_14]);
 VAR_15.valid_bit_msk = FUNC_2(VAR_5 | VAR_6);

 FUNC_1(VAR_12, "bt_kill_msk = %d\n", VAR_14);
 return FUNC_4(VAR_12, VAR_1, VAR_7,
        sizeof(VAR_15), &VAR_15);
}
