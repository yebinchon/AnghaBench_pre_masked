
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct __vxge_hw_vpath_handle {TYPE_3__* vpath; } ;
struct TYPE_6__ {TYPE_2__* hldev; int vp_id; } ;
struct TYPE_5__ {TYPE_1__* common_reg; } ;
struct TYPE_4__ {int set_msix_mask_all_vect; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct __vxge_hw_vpath_handle *VAR_0)
{

 FUNC_0(
  (u32)FUNC_1(FUNC_2(VAR_0->vpath->vp_id), 0, 32),
  &VAR_0->vpath->hldev->common_reg->set_msix_mask_all_vect);

 return;
}
