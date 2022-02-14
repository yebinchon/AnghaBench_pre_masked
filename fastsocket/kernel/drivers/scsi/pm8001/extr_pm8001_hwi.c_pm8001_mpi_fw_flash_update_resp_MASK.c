
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct pm8001_hba_info {int nvmd_completion; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_ccb_info {int ccb_tag; int * task; TYPE_2__* fw_control_context; } ;
struct fw_flash_Update_resp {int status; int tag; } ;
struct fw_control_ex {int dummy; } ;
typedef int fw_control_context ;
struct TYPE_4__ {TYPE_1__* fw_control; } ;
struct TYPE_3__ {size_t retcode; } ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct fw_control_ex*,TYPE_2__*,int) ;
 int FUNC_4 (struct pm8001_hba_info*,size_t) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct pm8001_hba_info *VAR_0,
  void *VAR_1)
{
 u32 VAR_2;
 struct fw_control_ex VAR_3;
 struct fw_flash_Update_resp *VAR_4 =
  (struct fw_flash_Update_resp *)(VAR_1 + 4);
 u32 VAR_5 = FUNC_2(VAR_4->tag);
 struct pm8001_ccb_info *VAR_6 = &VAR_0->ccb_info[VAR_5];
 VAR_2 = FUNC_2(VAR_4->status);
 FUNC_3(&VAR_3,
  VAR_6->fw_control_context,
  sizeof(VAR_3));
 switch (VAR_2) {
 case 136:
  FUNC_0(VAR_0,
  FUNC_5(": FLASH_UPDATE_COMPLETE_PENDING_REBOOT\n"));
  break;
 case 130:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_IN_PROGRESS\n"));
  break;
 case 132:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_HDR_ERR\n"));
  break;
 case 128:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_OFFSET_ERR\n"));
  break;
 case 135:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_CRC_ERR\n"));
  break;
 case 129:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_LENGTH_ERR\n"));
  break;
 case 131:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_HW_ERR\n"));
  break;
 case 133:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_DNLD_NOT_SUPPORTED\n"));
  break;
 case 134:
  FUNC_0(VAR_0,
   FUNC_5(": FLASH_UPDATE_DISABLED\n"));
  break;
 default:
  FUNC_0(VAR_0,
   FUNC_5("No matched status = %d\n", VAR_2));
  break;
 }
 VAR_6->fw_control_context->fw_control->retcode = VAR_2;
 FUNC_1(VAR_0->nvmd_completion);
 VAR_6->task = ((void*)0);
 VAR_6->ccb_tag = 0xFFFFFFFF;
 FUNC_4(VAR_0, VAR_5);
 return 0;
}
