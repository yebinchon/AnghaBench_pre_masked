
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ intr_type; } ;
struct vxgedev {TYPE_1__ config; struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int device_id; TYPE_4__* handle; } ;
struct TYPE_11__ {TYPE_3__* vpath; } ;
struct TYPE_10__ {TYPE_2__* hldev; } ;
struct TYPE_9__ {int first_vp_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int*,int) ;
 int FUNC_3 (TYPE_4__*,int) ;

void FUNC_4(struct vxgedev *VAR_3, int VAR_4)
{
 struct vxge_vpath *VAR_5 = &VAR_3->vpaths[VAR_4];
 int VAR_6 = 0;
 int VAR_7[4] = {0, 1, 0, 0};
 int VAR_8 = VAR_1;

 FUNC_1(VAR_5->handle);

 if (VAR_3->config.intr_type == VAR_0)
  FUNC_0(VAR_5->handle);
 else {
  FUNC_2(VAR_5->handle, VAR_7,
   VAR_8);

  VAR_6 = VAR_5->device_id * VAR_2;
  FUNC_3(VAR_5->handle, VAR_6);
  FUNC_3(VAR_5->handle, VAR_6 + 1);


  VAR_6 = (VAR_5->handle->vpath->hldev->first_vp_id *
   VAR_2) + VAR_8;
  FUNC_3(VAR_5->handle, VAR_6);
 }
}
