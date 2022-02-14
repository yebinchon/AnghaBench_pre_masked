
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {scalar_t__ vif_count; int hw; int sta_drained; int fw_key_table; int scan_status; int trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct iwl_mvm*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct iwl_mvm *VAR_3)
{
 FUNC_3(VAR_3->trans);
 FUNC_4(VAR_3->trans, 0);

 VAR_3->scan_status = VAR_1;


 FUNC_1(VAR_3->hw);

 FUNC_0(
  VAR_3->hw, VAR_0,
  VAR_2, VAR_3);

 FUNC_5(VAR_3->fw_key_table, 0, sizeof(VAR_3->fw_key_table));
 FUNC_5(VAR_3->sta_drained, 0, sizeof(VAR_3->sta_drained));

 FUNC_2(VAR_3->hw);

 VAR_3->vif_count = 0;
}
