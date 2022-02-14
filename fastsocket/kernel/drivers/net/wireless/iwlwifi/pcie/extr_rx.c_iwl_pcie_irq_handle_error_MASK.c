
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int wait_command_queue; int status; } ;
struct iwl_trans {int op_mode; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ internal_wimax_coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int *) ;
 int FUNC_6 (struct iwl_trans*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iwl_trans *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_0(VAR_6);


 if (VAR_6->cfg->internal_wimax_coex &&
     (!(FUNC_6(VAR_6, VAR_0) &
        VAR_3) ||
      (FUNC_6(VAR_6, VAR_1) &
       VAR_2))) {
  FUNC_1(VAR_5, &VAR_7->status);
  FUNC_3(VAR_6->op_mode);
  FUNC_10(&VAR_7->wait_command_queue);
  return;
 }

 FUNC_4(VAR_6);
 FUNC_5(VAR_6, ((void*)0));

 FUNC_9(VAR_4, &VAR_7->status);
 FUNC_1(VAR_5, &VAR_7->status);
 FUNC_10(&VAR_7->wait_command_queue);

 FUNC_7();
 FUNC_2(VAR_6->op_mode);
 FUNC_8();
}
