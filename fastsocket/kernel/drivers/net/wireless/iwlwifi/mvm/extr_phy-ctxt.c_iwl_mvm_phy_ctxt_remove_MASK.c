
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_phy_context_cmd {int dummy; } ;
struct iwl_mvm_phy_ctxt {int id; } ;
struct iwl_mvm {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm_phy_ctxt*,struct iwl_phy_context_cmd*,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_phy_context_cmd*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_mvm *VAR_3, struct iwl_mvm_phy_ctxt *VAR_4)
{
 struct iwl_phy_context_cmd VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3->mutex);

 FUNC_1(VAR_4, &VAR_5, VAR_1, 0);
 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_0,
       sizeof(struct iwl_phy_context_cmd),
       &VAR_5);
 if (VAR_6)
  FUNC_0(VAR_3, "Failed to send PHY remove: ctxt id=%d\n",
   VAR_4->id);
}
