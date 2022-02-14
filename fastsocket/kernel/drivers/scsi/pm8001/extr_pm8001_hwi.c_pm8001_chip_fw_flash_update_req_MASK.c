
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct pm8001_ioctl_payload {int func_specific; } ;
struct TYPE_6__ {TYPE_1__* region; } ;
struct pm8001_hba_info {struct pm8001_ccb_info* ccb_info; TYPE_2__ memoryMap; } ;
struct pm8001_ccb_info {size_t ccb_tag; struct fw_control_ex* fw_control_context; } ;
struct TYPE_7__ {scalar_t__ e; int len; } ;
struct TYPE_8__ {TYPE_3__ im_len; int addr; } ;
struct fw_flash_updata_info {int total_image_len; int cur_image_len; int cur_image_offset; TYPE_4__ sgl; } ;
struct fw_control_info {int len; int size; int offset; int buffer; } ;
struct fw_control_ex {int len; int phys_addr; void* virtAddr; struct fw_control_info* fw_control; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int phys_addr; void* virt_ptr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fw_control_ex*) ;
 struct fw_control_ex* FUNC_3 (int,int ) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (struct pm8001_hba_info*,struct fw_flash_updata_info*,size_t) ;
 int FUNC_6 (struct pm8001_hba_info*,size_t*) ;

int
FUNC_7(struct pm8001_hba_info *VAR_3,
 void *VAR_4)
{
 struct fw_flash_updata_info VAR_5;
 struct fw_control_info *VAR_6;
 struct fw_control_ex *VAR_7;
 int VAR_8;
 u32 VAR_9;
 struct pm8001_ccb_info *VAR_10;
 void *VAR_11 = VAR_3->memoryMap.region[VAR_1].virt_ptr;
 dma_addr_t VAR_12 = VAR_3->memoryMap.region[VAR_1].phys_addr;
 struct pm8001_ioctl_payload *VAR_13 = VAR_4;

 VAR_7 = FUNC_3(sizeof(struct fw_control_ex), VAR_2);
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = (struct fw_control_info *)&VAR_13->func_specific;
 FUNC_4(VAR_11, VAR_6->buffer, VAR_6->len);
 VAR_5.sgl.addr = FUNC_1(VAR_12);
 VAR_5.sgl.im_len.len = FUNC_0(VAR_6->len);
 VAR_5.sgl.im_len.e = 0;
 VAR_5.cur_image_offset = VAR_6->offset;
 VAR_5.cur_image_len = VAR_6->len;
 VAR_5.total_image_len = VAR_6->size;
 VAR_7->fw_control = VAR_6;
 VAR_7->virtAddr = VAR_11;
 VAR_7->phys_addr = VAR_12;
 VAR_7->len = VAR_6->len;
 VAR_8 = FUNC_6(VAR_3, &VAR_9);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return VAR_8;
 }
 VAR_10 = &VAR_3->ccb_info[VAR_9];
 VAR_10->fw_control_context = VAR_7;
 VAR_10->ccb_tag = VAR_9;
 VAR_8 = FUNC_5(VAR_3, &VAR_5,
  VAR_9);
 return VAR_8;
}
