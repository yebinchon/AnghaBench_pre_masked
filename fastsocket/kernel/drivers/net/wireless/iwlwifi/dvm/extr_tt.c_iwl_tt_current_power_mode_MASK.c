
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_tt_mgmt {int tt_power_mode; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; } ;



u8 FUNC_0(struct iwl_priv *VAR_0)
{
 struct iwl_tt_mgmt *VAR_1 = &VAR_0->thermal_throttle;

 return VAR_1->tt_power_mode;
}
