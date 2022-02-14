
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct pm8001_ioctl_payload {size_t minor_function; size_t length; scalar_t__ func_specific; } ;
struct TYPE_4__ {TYPE_1__* region; } ;
struct pm8001_hba_info {TYPE_2__ memoryMap; struct pm8001_ccb_info* ccb_info; struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_ccb_info {size_t ccb_tag; struct fw_control_ex* fw_control_context; } ;
struct inbound_queue_table {int dummy; } ;
struct get_nvm_data_req {void* resp_addr_lo; void* resp_addr_hi; void* resp_len; void* len_ir_vpdd; void* tag; } ;
struct fw_control_ex {size_t len; int * usrAddr; } ;
typedef int nvmd_req ;
struct TYPE_3__ {size_t phys_addr_hi; size_t phys_addr_lo; } ;



 int VAR_0 ;

 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (struct fw_control_ex*) ;
 struct fw_control_ex* FUNC_2 (int,int ) ;
 int FUNC_3 (struct get_nvm_data_req*,int ,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct get_nvm_data_req*,int ) ;
 int FUNC_5 (struct pm8001_hba_info*,size_t*) ;

int FUNC_6(struct pm8001_hba_info *VAR_5,
 void *VAR_6)
{
 u32 VAR_7 = VAR_4;
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10;
 struct pm8001_ccb_info *VAR_11;
 struct inbound_queue_table *VAR_12;
 struct get_nvm_data_req VAR_13;
 struct fw_control_ex *VAR_14;
 struct pm8001_ioctl_payload *VAR_15 = VAR_6;

 VAR_8 = VAR_15->minor_function;
 VAR_14 = FUNC_2(sizeof(struct fw_control_ex), VAR_1);
 if (!VAR_14)
  return -VAR_0;
 VAR_14->usrAddr = (u8 *)VAR_15->func_specific;
 VAR_14->len = VAR_15->length;
 VAR_12 = &VAR_5->inbnd_q_tbl[0];
 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 VAR_9 = FUNC_5(VAR_5, &VAR_10);
 if (VAR_9) {
  FUNC_1(VAR_14);
  return VAR_9;
 }
 VAR_11 = &VAR_5->ccb_info[VAR_10];
 VAR_11->ccb_tag = VAR_10;
 VAR_11->fw_control_context = VAR_14;
 VAR_13.tag = FUNC_0(VAR_10);

 switch (VAR_8) {
 case 129: {
  u32 VAR_16, VAR_17;
  VAR_16 = 0xa8;
  VAR_17 = 2;

  VAR_13.len_ir_vpdd = FUNC_0(VAR_2 | VAR_16 << 16 |
   VAR_17 << 8 | 129);
  VAR_13.resp_len = FUNC_0(VAR_15->length);
  VAR_13.resp_addr_hi =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_hi);
  VAR_13.resp_addr_lo =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_lo);
  break;
 }
 case 131: {
  VAR_13.len_ir_vpdd = FUNC_0(VAR_2 | 131);
  VAR_13.resp_len = FUNC_0(VAR_15->length);
  VAR_13.resp_addr_hi =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_hi);
  VAR_13.resp_addr_lo =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_lo);
  break;
 }
 case 128: {
  VAR_13.len_ir_vpdd = FUNC_0(VAR_2 | 128);
  VAR_13.resp_len = FUNC_0(VAR_15->length);
  VAR_13.resp_addr_hi =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_hi);
  VAR_13.resp_addr_lo =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_lo);
  break;
 }
 case 130: {
  VAR_13.len_ir_vpdd = FUNC_0(VAR_2 | 130);
  VAR_13.resp_len = FUNC_0(VAR_15->length);
  VAR_13.resp_addr_hi =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_hi);
  VAR_13.resp_addr_lo =
      FUNC_0(VAR_5->memoryMap.region[VAR_3].phys_addr_lo);
  break;
 }
 default:
  break;
 }
 VAR_9 = FUNC_4(VAR_5, VAR_12, VAR_7, &VAR_13, 0);
 return VAR_9;
}
