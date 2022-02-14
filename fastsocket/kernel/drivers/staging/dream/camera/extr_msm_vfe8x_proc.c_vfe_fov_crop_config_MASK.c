
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_fov_crop_cfg {int firstLine; int lastLine; int firstPixel; int lastPixel; } ;
struct vfe_cmd_fov_crop_config {int firstLine; int lastLine; int firstPixel; int lastPixel; int enable; } ;
typedef int cmd ;
struct TYPE_3__ {int cropEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_fov_crop_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_fov_crop_config *VAR_2)
{
 struct vfe_fov_crop_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.cropEnable = VAR_2->enable;


 VAR_3.lastPixel = VAR_2->lastPixel;
 VAR_3.firstPixel = VAR_2->firstPixel;


 VAR_3.lastLine = VAR_2->lastLine;
 VAR_3.firstLine = VAR_2->firstLine;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
