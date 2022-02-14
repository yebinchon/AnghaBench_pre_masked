
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {scalar_t__ cur_ucode; int scan_status; int hw; int status; int notif_wait; } ;
struct TYPE_2__ {scalar_t__ restart_fw; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_3)
{
 FUNC_3(&VAR_3->notif_wait);







 if (FUNC_4(VAR_0, &VAR_3->status)) {
  FUNC_0(VAR_3, "Firmware error during reconfiguration! Abort.\n");
 } else if (VAR_3->cur_ucode == VAR_1 &&
     VAR_2.restart_fw) {
  switch (VAR_3->scan_status) {
  case 129:
   break;
  case 128:
   FUNC_2(VAR_3->hw, 1);
   break;
  }

  FUNC_1(VAR_3->hw);
 }
}
