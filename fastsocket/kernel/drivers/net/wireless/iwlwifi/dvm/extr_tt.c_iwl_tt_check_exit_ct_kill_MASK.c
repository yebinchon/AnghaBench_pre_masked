
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_mgmt {scalar_t__ state; int ct_kill_toggle; int ct_kill_exit_tm; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; int trans; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int,unsigned long*) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_9)
{
 struct iwl_priv *VAR_10 = (struct iwl_priv *)VAR_9;
 struct iwl_tt_mgmt *VAR_11 = &VAR_10->thermal_throttle;
 unsigned long VAR_12;

 if (FUNC_6(VAR_7, &VAR_10->status))
  return;

 if (VAR_11->state == VAR_6) {
  if (VAR_10->thermal_throttle.ct_kill_toggle) {
   FUNC_4(VAR_10->trans, VAR_1,
        VAR_2);
   VAR_10->thermal_throttle.ct_kill_toggle = 0;
  } else {
   FUNC_4(VAR_10->trans, VAR_3,
        VAR_2);
   VAR_10->thermal_throttle.ct_kill_toggle = 1;
  }
  FUNC_1(VAR_10->trans, VAR_0);
  if (FUNC_2(VAR_10->trans, 0, &VAR_12))
   FUNC_3(VAR_10->trans, &VAR_12);




  FUNC_0(VAR_10, "schedule ct_kill exit timer\n");
  FUNC_5(&VAR_10->thermal_throttle.ct_kill_exit_tm,
     VAR_8 + VAR_4 * VAR_5);
 }
}
