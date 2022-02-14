
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct __vxge_hw_vpath_handle {TYPE_2__* vpath; } ;
struct TYPE_6__ {scalar_t__ intr_mode; } ;
struct __vxge_hw_device {TYPE_1__* common_reg; TYPE_3__ config; } ;
struct TYPE_5__ {struct __vxge_hw_device* hldev; } ;
struct TYPE_4__ {int * clear_msix_mask_vect; int * clr_msix_one_shot_vec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;

void
FUNC_3(struct __vxge_hw_vpath_handle *VAR_1, int VAR_2)
{
 struct __vxge_hw_device *VAR_3 = VAR_1->vpath->hldev;
 if (VAR_3->config.intr_mode ==
   VAR_0) {
  FUNC_0(
   (u32)FUNC_1(FUNC_2(VAR_2 >> 2), 0, 32),
    &VAR_3->common_reg->
     clr_msix_one_shot_vec[VAR_2%4]);
 } else {
  FUNC_0(
   (u32)FUNC_1(FUNC_2(VAR_2 >> 2), 0, 32),
    &VAR_3->common_reg->
     clear_msix_mask_vect[VAR_2%4]);
 }

 return;
}
