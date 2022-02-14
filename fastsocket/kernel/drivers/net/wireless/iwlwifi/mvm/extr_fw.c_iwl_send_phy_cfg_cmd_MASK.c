
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flow_trigger; int event_trigger; } ;
struct iwl_phy_cfg_cmd {int phy_cfg; TYPE_3__ calib_control; } ;
struct iwl_mvm {int cur_ucode; TYPE_2__* fw; } ;
typedef int phy_cfg_cmd ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_5__ {TYPE_1__* default_calib; int phy_config; } ;
struct TYPE_4__ {int flow_trigger; int event_trigger; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_phy_cfg_cmd*) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_2)
{
 struct iwl_phy_cfg_cmd VAR_3;
 enum iwl_ucode_type VAR_4 = VAR_2->cur_ucode;


 VAR_3.phy_cfg = FUNC_1(VAR_2->fw->phy_config);
 VAR_3.calib_control.event_trigger =
  VAR_2->fw->default_calib[VAR_4].event_trigger;
 VAR_3.calib_control.flow_trigger =
  VAR_2->fw->default_calib[VAR_4].flow_trigger;

 FUNC_0(VAR_2, "Sending Phy CFG command: 0x%x\n",
         VAR_3.phy_cfg);

 return FUNC_2(VAR_2, VAR_1, VAR_0,
        sizeof(VAR_3), &VAR_3);
}
