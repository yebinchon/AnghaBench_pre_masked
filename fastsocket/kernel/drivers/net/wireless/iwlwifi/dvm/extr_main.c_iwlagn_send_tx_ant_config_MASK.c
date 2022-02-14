
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_tx_ant_config_cmd {int valid; } ;
struct iwl_priv {TYPE_1__* fw; } ;
struct TYPE_2__ {int ucode_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_priv*,int ,int ,int,struct iwl_tx_ant_config_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_3, u8 VAR_4)
{
 struct iwl_tx_ant_config_cmd VAR_5 = {
   .valid = FUNC_2(VAR_4),
 };

 if (FUNC_1(VAR_3->fw->ucode_ver) > 1) {
  FUNC_0(VAR_3, "select valid tx ant: %u\n", VAR_4);
  return FUNC_3(VAR_3,
     VAR_2,
     VAR_0,
     sizeof(struct iwl_tx_ant_config_cmd),
     &VAR_5);
 } else {
  FUNC_0(VAR_3, "TX_ANT_CONFIGURATION_CMD not supported\n");
  return -VAR_1;
 }
}
