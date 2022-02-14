
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pm8001_ioctl_payload {int length; int func_specific; scalar_t__ id; } ;
struct pm8001_hba_info {int * nvmd_completion; TYPE_1__* fw_image; } ;
struct pm8001_fw_image_header {int image_length; } ;
struct fw_control_info {int len; int size; scalar_t__ retcode; int offset; scalar_t__ buffer; } ;
struct TYPE_4__ {int (* fw_flash_update_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;
struct TYPE_3__ {int size; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct pm8001_hba_info *VAR_8)
{
 struct pm8001_ioctl_payload *VAR_9;
 FUNC_0(VAR_7);
 u8 *VAR_10 = ((void*)0);
 u32 VAR_11 = 0;
 struct fw_control_info *VAR_12;
 u32 VAR_13, VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16, VAR_17;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 struct pm8001_fw_image_header *VAR_20;

 VAR_11 = 1024 * 16 + sizeof(*VAR_9) - 1;
 VAR_10 = FUNC_3(VAR_11, VAR_3);
 VAR_20 = (struct pm8001_fw_image_header *)VAR_8->fw_image->data;
 if (!VAR_10)
  return -VAR_0;
 if (VAR_8->fw_image->size < 28) {
  VAR_18 = VAR_1;
  goto out;
 }

 while (VAR_15 < VAR_8->fw_image->size) {
  VAR_17 =
   *(u32 *)((u8 *)&VAR_20->image_length + VAR_15);
  VAR_16 = FUNC_1(VAR_17);
  VAR_14 = (VAR_16 + VAR_4)/VAR_5;
  if (VAR_14 % VAR_5)
   VAR_14++;
  if (VAR_14 == 0)
   VAR_14++;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_9 = (struct pm8001_ioctl_payload *)VAR_10;
   VAR_9->length = 1024*16;
   VAR_9->id = 0;
   VAR_12 =
         (struct fw_control_info *)&VAR_9->func_specific;
   VAR_12->len = VAR_5;
   VAR_12->size = VAR_16 + VAR_4;
   VAR_12->retcode = 0;
   VAR_12->offset = VAR_13 * VAR_5;



  if (((VAR_14-VAR_13) == 1) &&
   ((VAR_16 + VAR_4) % VAR_5)) {
   VAR_12->len =
    (VAR_16 + VAR_4) % VAR_5;
   FUNC_4((u8 *)VAR_12->buffer,
    (u8 *)VAR_8->fw_image->data + VAR_15,
    (VAR_16 + VAR_4) % VAR_5);
   VAR_15 +=
    (VAR_16 + VAR_4) % VAR_5;
  } else {
   FUNC_4((u8 *)VAR_12->buffer,
    (u8 *)VAR_8->fw_image->data + VAR_15,
    VAR_5);
   VAR_15 += VAR_5;
  }

  VAR_8->nvmd_completion = &VAR_7;
  VAR_18 = VAR_6->fw_flash_update_req(VAR_8, VAR_9);
  FUNC_6(&VAR_7);
  if (VAR_18 || (VAR_12->retcode > VAR_2)) {
   VAR_18 = VAR_12->retcode;
   FUNC_2(VAR_10);
   VAR_10 = ((void*)0);
   break;
  }
 }
 if (VAR_18)
  break;
 VAR_19++;
}
out:
 FUNC_2(VAR_10);
 return VAR_18;
}
