
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_demosaic_cfg {int fmaxThreshold; int fminThreshold; int badPixelCorrEnable; } ;
struct vfe_demosaic_bpc_cfg {int greenDiffThreshold; int redDiffThreshold; int blueDiffThreshold; } ;
struct TYPE_3__ {int greenDiffThreshold; int redDiffThreshold; int blueDiffThreshold; int fmaxThreshold; int fminThreshold; int enable; } ;
struct vfe_cmd_demosaic_bpc_update {TYPE_1__ bpcUpdate; } ;
typedef int cmdbpc ;
typedef int cmd ;
struct TYPE_4__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct vfe_demosaic_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *,int) ;

void FUNC_3(struct vfe_cmd_demosaic_bpc_update *VAR_3)
{
 struct vfe_demosaic_cfg VAR_4;
 struct vfe_demosaic_bpc_cfg VAR_5;
 uint32_t VAR_6;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 VAR_6 = FUNC_1(VAR_2->vfebase + VAR_1);

 VAR_4 = *((struct vfe_demosaic_cfg *)(&VAR_6));
 VAR_4.badPixelCorrEnable = VAR_3->bpcUpdate.enable;
 VAR_4.fminThreshold = VAR_3->bpcUpdate.fminThreshold;
 VAR_4.fmaxThreshold = VAR_3->bpcUpdate.fmaxThreshold;

 FUNC_2(VAR_2->vfebase + VAR_1,
  (uint32_t *)&VAR_4, sizeof(VAR_4));

 VAR_5.blueDiffThreshold = VAR_3->bpcUpdate.blueDiffThreshold;
 VAR_5.redDiffThreshold = VAR_3->bpcUpdate.redDiffThreshold;
 VAR_5.greenDiffThreshold = VAR_3->bpcUpdate.greenDiffThreshold;

 FUNC_2(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_5, sizeof(VAR_5));
}
