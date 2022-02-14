
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int hw; TYPE_1__* nvm_sections; int nvm_data; int * phy_db; int trans; int scan_cmd; } ;
struct TYPE_2__ {int data; } ;


 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct iwl_op_mode *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_4(VAR_2);

 FUNC_2(VAR_2->hw);

 FUNC_7(VAR_2->scan_cmd);

 FUNC_6(VAR_2->trans, 1);

 FUNC_5(VAR_2->phy_db);
 VAR_2->phy_db = ((void*)0);

 FUNC_3(VAR_2->nvm_data);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_7(VAR_2->nvm_sections[VAR_3].data);

 FUNC_1(VAR_2->hw);
}
