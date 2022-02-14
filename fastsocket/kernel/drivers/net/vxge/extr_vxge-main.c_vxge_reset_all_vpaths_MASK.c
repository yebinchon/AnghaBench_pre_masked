
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxgedev {int no_of_vpath; TYPE_1__* vpaths; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {scalar_t__ handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct vxgedev*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

enum vxge_hw_status FUNC_4(struct vxgedev *VAR_2)
{
 int VAR_3;
 enum vxge_hw_status VAR_4 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->no_of_vpath; VAR_3++)
  if (VAR_2->vpaths[VAR_3].handle) {
   if (FUNC_3(VAR_2->vpaths[VAR_3].handle)
     == VAR_1) {
    if (FUNC_0(VAR_2) &&
     FUNC_2(
      VAR_2->vpaths[VAR_3].handle)
      != VAR_1) {
     FUNC_1(VAR_0,
      "vxge_hw_vpath_recover_"
      "from_reset failed for vpath: "
      "%d", VAR_3);
     return VAR_4;
    }
   } else {
    FUNC_1(VAR_0,
     "vxge_hw_vpath_reset failed for "
     "vpath:%d", VAR_3);
     return VAR_4;
   }
  }
 return VAR_4;
}
