
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_hba_info {struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {size_t device_id; int dcompletion; } ;
struct pm8001_ccb_info {int ccb_tag; int * task; struct pm8001_device* device; } ;
struct dev_reg_resp {int device_id; int status; int tag; } ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct pm8001_hba_info*,size_t) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct pm8001_hba_info *VAR_0, void *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;
 struct pm8001_ccb_info *VAR_5;
 struct pm8001_device *VAR_6;
 struct dev_reg_resp *VAR_7 =
  (struct dev_reg_resp *)(VAR_1 + 4);

 VAR_4 = FUNC_2(VAR_7->tag);
 VAR_5 = &VAR_0->ccb_info[VAR_4];
 VAR_6 = VAR_5->device;
 VAR_2 = FUNC_2(VAR_7->status);
 VAR_3 = FUNC_2(VAR_7->device_id);
 FUNC_0(VAR_0,
  FUNC_4(" register device is status = %d\n", VAR_2));
 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_0, FUNC_4("DEVREG_SUCCESS\n"));
  VAR_6->device_id = VAR_3;
  break;
 case 132:
  FUNC_0(VAR_0,
   FUNC_4("DEVREG_FAILURE_OUT_OF_RESOURCE\n"));
  break;
 case 135:
  FUNC_0(VAR_0,
     FUNC_4("DEVREG_FAILURE_DEVICE_ALREADY_REGISTERED\n"));
  break;
 case 133:
  FUNC_0(VAR_0,
   FUNC_4("DEVREG_FAILURE_INVALID_PHY_ID\n"));
  break;
 case 131:
  FUNC_0(VAR_0,
     FUNC_4("DEVREG_FAILURE_PHY_ID_ALREADY_REGISTERED\n"));
  break;
 case 130:
  FUNC_0(VAR_0,
   FUNC_4("DEVREG_FAILURE_PORT_ID_OUT_OF_RANGE\n"));
  break;
 case 129:
  FUNC_0(VAR_0,
   FUNC_4("DEVREG_FAILURE_PORT_NOT_VALID_STATE\n"));
  break;
 case 134:
  FUNC_0(VAR_0,
         FUNC_4("DEVREG_FAILURE_DEVICE_TYPE_NOT_VALID\n"));
  break;
 default:
  FUNC_0(VAR_0,
   FUNC_4("DEVREG_FAILURE_DEVICE_TYPE_NOT_UNSORPORTED\n"));
  break;
 }
 FUNC_1(VAR_6->dcompletion);
 VAR_5->task = ((void*)0);
 VAR_5->ccb_tag = 0xFFFFFFFF;
 FUNC_3(VAR_0, VAR_4);
 return 0;
}
