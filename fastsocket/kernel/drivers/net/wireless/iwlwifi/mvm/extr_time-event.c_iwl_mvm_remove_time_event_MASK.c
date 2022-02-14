
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int time_cmd ;
struct iwl_time_event_cmd {void* id; void* id_and_color; void* action; } ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_time_event_data {scalar_t__ uid; scalar_t__ id; } ;
struct iwl_mvm {int time_event_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_time_event_cmd*) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_mvm_time_event_data*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct iwl_mvm *VAR_4,
          struct iwl_mvm_vif *VAR_5,
          struct iwl_mvm_time_event_data *VAR_6)
{
 struct iwl_time_event_cmd VAR_7 = {};
 u32 VAR_8, VAR_9;
 int VAR_10;





 FUNC_7(&VAR_4->time_event_lock);


 VAR_9 = VAR_6->uid;
 VAR_8 = VAR_6->id;




 FUNC_5(VAR_4, VAR_6);
 FUNC_8(&VAR_4->time_event_lock);






 if (VAR_8 == VAR_2) {
  FUNC_1(VAR_4, "TE 0x%x has already ended\n", VAR_9);
  return;
 }


 VAR_7.id = FUNC_3(VAR_9);
 VAR_7.action = FUNC_3(VAR_1);
 VAR_7.id_and_color =
  FUNC_3(FUNC_0(VAR_5->id, VAR_5->color));

 FUNC_1(VAR_4, "Removing TE 0x%x\n", FUNC_6(VAR_7.id));
 VAR_10 = FUNC_4(VAR_4, VAR_3, VAR_0,
       sizeof(VAR_7), &VAR_7);
 if (FUNC_2(VAR_10))
  return;
}
