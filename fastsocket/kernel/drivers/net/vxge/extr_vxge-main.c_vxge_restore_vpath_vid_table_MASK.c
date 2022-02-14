
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vxgedev {scalar_t__ vlgrp; } ;
struct vxge_vpath {int handle; scalar_t__ is_open; struct vxgedev* vdev; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

enum vxge_hw_status FUNC_2(struct vxge_vpath *VAR_2)
{
 enum vxge_hw_status VAR_3 = VAR_1;
 struct vxgedev *VAR_4 = VAR_2->vdev;
 u16 VAR_5;

 if (VAR_4->vlgrp && VAR_2->is_open) {

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!FUNC_0(VAR_4->vlgrp, VAR_5))
    continue;

   VAR_3 = FUNC_1(VAR_2->handle, VAR_5);
  }
 }

 return VAR_3;
}
