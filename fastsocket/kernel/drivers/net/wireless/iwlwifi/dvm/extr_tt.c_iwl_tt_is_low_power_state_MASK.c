
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_mgmt {scalar_t__ state; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct iwl_priv *VAR_1)
{
 struct iwl_tt_mgmt *VAR_2 = &VAR_1->thermal_throttle;

 if (VAR_2->state >= VAR_0)
  return 1;
 return 0;
}
