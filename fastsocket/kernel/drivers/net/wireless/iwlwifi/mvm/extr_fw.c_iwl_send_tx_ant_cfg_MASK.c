
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tx_ant_cmd ;
struct iwl_tx_ant_cfg_cmd {int valid; } ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_tx_ant_cfg_cmd*) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_2, u8 VAR_3)
{
 struct iwl_tx_ant_cfg_cmd VAR_4 = {
  .valid = FUNC_1(VAR_3),
 };

 FUNC_0(VAR_2, "select valid tx ant: %u\n", VAR_3);
 return FUNC_2(VAR_2, VAR_1, VAR_0,
        sizeof(VAR_4), &VAR_4);
}
