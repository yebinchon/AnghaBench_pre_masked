
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_restriction {int rx_stream; } ;
struct iwl_tt_mgmt {int state; struct iwl_tt_restriction* restriction; int advanced_tt; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; } ;
typedef enum iwl_antenna_ok { ____Placeholder_iwl_antenna_ok } iwl_antenna_ok ;


 int VAR_0 ;

enum iwl_antenna_ok FUNC_0(struct iwl_priv *VAR_1)
{
 struct iwl_tt_mgmt *VAR_2 = &VAR_1->thermal_throttle;
 struct iwl_tt_restriction *VAR_3;

 if (!VAR_1->thermal_throttle.advanced_tt)
  return VAR_0;
 VAR_3 = VAR_2->restriction + VAR_2->state;
 return VAR_3->rx_stream;
}
