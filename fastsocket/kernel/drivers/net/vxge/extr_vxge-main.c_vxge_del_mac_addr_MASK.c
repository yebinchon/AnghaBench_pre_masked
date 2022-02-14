
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int device_id; int handle; } ;
struct macInfo {size_t vpath_no; int macmask; int macaddr; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vxge_vpath*,struct macInfo*) ;

enum vxge_hw_status FUNC_3(struct vxgedev *VAR_2, struct macInfo *VAR_3)
{
 enum vxge_hw_status VAR_4 = VAR_1;
 struct vxge_vpath *VAR_5;

 VAR_5 = &VAR_2->vpaths[VAR_3->vpath_no];
 VAR_4 = FUNC_1(VAR_5->handle, VAR_3->macaddr,
      VAR_3->macmask);
 if (VAR_4 != VAR_1) {
  FUNC_0(VAR_0,
   "DA config delete entry failed for vpath:%d",
   VAR_5->device_id);
 } else
  FUNC_2(VAR_5, VAR_3);
 return VAR_4;
}
