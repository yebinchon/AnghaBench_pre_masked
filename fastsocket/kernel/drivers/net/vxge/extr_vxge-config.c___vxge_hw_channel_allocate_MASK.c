
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __vxge_hw_vpath_handle {TYPE_1__* vpath; } ;
struct __vxge_hw_ring {int dummy; } ;
struct __vxge_hw_fifo {int dummy; } ;
struct __vxge_hw_device {int first_vp_id; int common_reg; } ;
struct __vxge_hw_channel {int type; int per_dtr_space; int length; int vp_id; int free_ptr; int reserve_ptr; int * orig_arr; scalar_t__ reserve_top; int * reserve_arr; int * free_arr; int * work_arr; void* userdata; struct __vxge_hw_vpath_handle* vph; struct __vxge_hw_device* devh; int first_vp_id; int common_reg; int item; } ;
typedef enum __vxge_hw_channel_type { ____Placeholder___vxge_hw_channel_type } __vxge_hw_channel_type ;
struct TYPE_2__ {int vp_id; struct __vxge_hw_device* hldev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (struct __vxge_hw_channel*) ;
 void* FUNC_2 (int,int ) ;

struct __vxge_hw_channel*
FUNC_3(struct __vxge_hw_vpath_handle *VAR_1,
      enum __vxge_hw_channel_type VAR_2,
 u32 VAR_3, u32 VAR_4, void *VAR_5)
{
 struct __vxge_hw_channel *VAR_6;
 struct __vxge_hw_device *VAR_7;
 int VAR_8 = 0;
 u32 VAR_9;

 VAR_7 = VAR_1->vpath->hldev;
 VAR_9 = VAR_1->vpath->vp_id;

 switch (VAR_2) {
 case 129:
  VAR_8 = sizeof(struct __vxge_hw_fifo);
  break;
 case 128:
  VAR_8 = sizeof(struct __vxge_hw_ring);
  break;
 default:
  break;
 }

 VAR_6 = FUNC_2(VAR_8, VAR_0);
 if (VAR_6 == ((void*)0))
  goto exit0;
 FUNC_0(&VAR_6->item);

 VAR_6->common_reg = VAR_7->common_reg;
 VAR_6->first_vp_id = VAR_7->first_vp_id;
 VAR_6->type = VAR_2;
 VAR_6->devh = VAR_7;
 VAR_6->vph = VAR_1;
 VAR_6->userdata = VAR_5;
 VAR_6->per_dtr_space = VAR_4;
 VAR_6->length = VAR_3;
 VAR_6->vp_id = VAR_9;

 VAR_6->work_arr = FUNC_2(sizeof(void *)*VAR_3, VAR_0);
 if (VAR_6->work_arr == ((void*)0))
  goto exit1;

 VAR_6->free_arr = FUNC_2(sizeof(void *)*VAR_3, VAR_0);
 if (VAR_6->free_arr == ((void*)0))
  goto exit1;
 VAR_6->free_ptr = VAR_3;

 VAR_6->reserve_arr = FUNC_2(sizeof(void *)*VAR_3, VAR_0);
 if (VAR_6->reserve_arr == ((void*)0))
  goto exit1;
 VAR_6->reserve_ptr = VAR_3;
 VAR_6->reserve_top = 0;

 VAR_6->orig_arr = FUNC_2(sizeof(void *)*VAR_3, VAR_0);
 if (VAR_6->orig_arr == ((void*)0))
  goto exit1;

 return VAR_6;
exit1:
 FUNC_1(VAR_6);

exit0:
 return ((void*)0);
}
