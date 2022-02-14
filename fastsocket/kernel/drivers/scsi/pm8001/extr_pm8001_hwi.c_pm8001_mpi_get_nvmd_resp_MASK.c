
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_4__ {TYPE_1__* region; } ;
struct pm8001_hba_info {int nvmd_completion; TYPE_2__ memoryMap; int sas_addr; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_ccb_info {int ccb_tag; int * task; struct fw_control_ex* fw_control_context; } ;
struct get_nvm_data_resp {int ir_tda_bn_dps_das_nvm; int dlen_status; int tag; } ;
struct fw_control_ex {int len; int usrAddr; } ;
struct TYPE_3__ {int * virt_ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct pm8001_hba_info*,size_t) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(struct pm8001_hba_info *VAR_12, void *VAR_13)
{
 struct fw_control_ex *VAR_14;
 struct get_nvm_data_resp *VAR_15 =
  (struct get_nvm_data_resp *)(VAR_13 + 4);
 u32 VAR_16 = FUNC_3(VAR_15->tag);
 struct pm8001_ccb_info *VAR_17 = &VAR_12->ccb_info[VAR_16];
 u32 VAR_18 = FUNC_3(VAR_15->dlen_status);
 u32 VAR_19 =
  FUNC_3(VAR_15->ir_tda_bn_dps_das_nvm);
 void *VAR_20 = VAR_12->memoryMap.region[VAR_5].virt_ptr;
 VAR_14 = VAR_17->fw_control_context;

 FUNC_1(VAR_12, FUNC_6("Get nvm data complete!\n"));
 if ((VAR_18 & VAR_7) != 0) {
  FUNC_0(VAR_12,
   FUNC_6("Get nvm data error!\n"));
  FUNC_2(VAR_12->nvmd_completion);
  return;
 }

 if (VAR_19 & VAR_4) {

  FUNC_1(VAR_12,
   FUNC_6("Get NVMD success, IR=1\n"));
  if ((VAR_19 & VAR_8) == VAR_10) {
   if (VAR_19 == 0x80a80200) {
    FUNC_4(VAR_12->sas_addr,
          ((u8 *)VAR_20 + 4),
           VAR_9);
    FUNC_1(VAR_12,
     FUNC_6("Get SAS address"
     " from VPD successfully!\n"));
   }
  } else if (((VAR_19 & VAR_8) == VAR_1)
   || ((VAR_19 & VAR_8) == VAR_11) ||
   ((VAR_19 & VAR_8) == VAR_2)) {
    ;
  } else if (((VAR_19 & VAR_8) == VAR_0)
   || ((VAR_19 & VAR_8) == VAR_3)) {
   ;
  } else {

   FUNC_1(VAR_12,
    FUNC_6("(IR=1)Wrong Device type 0x%x\n",
    VAR_19));
  }
 } else {
  FUNC_1(VAR_12,
   FUNC_6("Get NVMD success, IR=0, dataLen=%d\n",
   (VAR_18 & VAR_6) >> 24));
 }
 FUNC_4(VAR_14->usrAddr,
  VAR_12->memoryMap.region[VAR_5].virt_ptr,
  VAR_14->len);
 FUNC_2(VAR_12->nvmd_completion);
 VAR_17->task = ((void*)0);
 VAR_17->ccb_tag = 0xFFFFFFFF;
 FUNC_5(VAR_12, VAR_16);
}
