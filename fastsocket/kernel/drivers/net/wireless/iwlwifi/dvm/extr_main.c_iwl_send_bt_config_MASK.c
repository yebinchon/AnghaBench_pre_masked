
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {scalar_t__ bt_enable_flag; } ;
struct iwl_bt_cmd {scalar_t__ flags; int kill_cts_mask; int kill_ack_mask; int max_kill; int lead_time; } ;
struct TYPE_2__ {int bt_coex_active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_priv*,char*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct iwl_priv*,int ,int ,int,struct iwl_bt_cmd*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_7)
{
 struct iwl_bt_cmd VAR_8 = {
  .lead_time = VAR_2,
  .max_kill = VAR_3,
  .kill_ack_mask = 0,
  .kill_cts_mask = 0,
 };

 if (!VAR_6.bt_coex_active)
  VAR_8.flags = VAR_0;
 else
  VAR_8.flags = VAR_1;

 VAR_7->bt_enable_flag = VAR_8.flags;
 FUNC_0(VAR_7, "BT coex %s\n",
  (VAR_8.flags == VAR_0) ? "disable" : "active");

 if (FUNC_2(VAR_7, VAR_5,
        VAR_4, sizeof(struct iwl_bt_cmd), &VAR_8))
  FUNC_1(VAR_7, "failed to send BT Coex Config\n");
}
