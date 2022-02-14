
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_phy_context_cmd {void* apply_time; void* action; void* id_and_color; } ;
struct iwl_mvm_phy_ctxt {int color; int id; } ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_phy_context_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm_phy_ctxt *VAR_0,
         struct iwl_phy_context_cmd *VAR_1,
         u32 VAR_2, u32 VAR_3)
{
 FUNC_2(VAR_1, 0, sizeof(struct iwl_phy_context_cmd));

 VAR_1->id_and_color = FUNC_1(FUNC_0(VAR_0->id,
           VAR_0->color));
 VAR_1->action = FUNC_1(VAR_2);
 VAR_1->apply_time = FUNC_1(VAR_3);
}
