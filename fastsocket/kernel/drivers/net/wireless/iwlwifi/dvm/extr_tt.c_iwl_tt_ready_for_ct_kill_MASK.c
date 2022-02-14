
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_mgmt {scalar_t__ state; } ;
struct iwl_priv {int status; struct iwl_tt_mgmt thermal_throttle; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_priv*,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct iwl_priv *VAR_4 = (struct iwl_priv *)VAR_3;
 struct iwl_tt_mgmt *VAR_5 = &VAR_4->thermal_throttle;

 if (FUNC_3(VAR_2, &VAR_4->status))
  return;


 if (VAR_5->state != VAR_0) {
  FUNC_0(VAR_4, "entering CT_KILL state when "
    "temperature timer expired\n");
  VAR_5->state = VAR_0;
  FUNC_2(VAR_1, &VAR_4->status);
  FUNC_1(VAR_4, 1);
 }
}
