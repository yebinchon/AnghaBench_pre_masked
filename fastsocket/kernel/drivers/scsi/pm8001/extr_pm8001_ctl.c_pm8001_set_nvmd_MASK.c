
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pm8001_ioctl_payload {int length; int minor_function; scalar_t__ id; int func_specific; } ;
struct pm8001_hba_info {int * nvmd_completion; TYPE_1__* fw_image; } ;
struct TYPE_4__ {int (* set_nvmd_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;
struct TYPE_3__ {int size; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pm8001_hba_info *VAR_5)
{
 struct pm8001_ioctl_payload *VAR_6;
 FUNC_0(VAR_4);
 u8 *VAR_7 = ((void*)0);
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;

 VAR_8 = 1024 * 5 + sizeof(*VAR_6) - 1;
 VAR_7 = FUNC_2(VAR_8, VAR_2);
 if (!VAR_7)
  return -VAR_0;
 if ((VAR_5->fw_image->size <= 0) ||
     (VAR_5->fw_image->size > 4096)) {
  VAR_9 = VAR_1;
  goto out;
 }
 VAR_6 = (struct pm8001_ioctl_payload *)VAR_7;
 FUNC_3((u8 *)&VAR_6->func_specific, (u8 *)VAR_5->fw_image->data,
    VAR_5->fw_image->size);
 VAR_6->length = VAR_5->fw_image->size;
 VAR_6->id = 0;
 VAR_6->minor_function = 0x1;
 VAR_5->nvmd_completion = &VAR_4;
 VAR_9 = VAR_3->set_nvmd_req(VAR_5, VAR_6);
 FUNC_5(&VAR_4);
out:
 FUNC_1(VAR_7);
 return VAR_9;
}
