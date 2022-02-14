
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_chroma_subsample_config {int cropHeightFirstLine; int cropHeightLastLine; int cropWidthFirstPixel; int cropWidthLastPixel; int cropEnable; int vsubSampleEnable; int hsubSampleEnable; int vCosited; int hCosited; int vCositedPhase; int hCositedPhase; int enable; } ;
struct vfe_chromasubsample_cfg {int cropHeightFirstLine; int cropHeightLastLine; int cropWidthFirstPixel; int cropWidthLastPixel; int cropEnable; int vsubSampleEnable; int hsubSampleEnable; int vCosited; int hCosited; int vCositedPhase; int hCositedPhase; } ;
typedef int cmd ;
struct TYPE_3__ {int chromaSubsampleEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_chromasubsample_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(
 struct vfe_cmd_chroma_subsample_config *VAR_2)
{
 struct vfe_chromasubsample_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.chromaSubsampleEnable = VAR_2->enable;

 VAR_3.hCositedPhase = VAR_2->hCositedPhase;
 VAR_3.vCositedPhase = VAR_2->vCositedPhase;
 VAR_3.hCosited = VAR_2->hCosited;
 VAR_3.vCosited = VAR_2->vCosited;
 VAR_3.hsubSampleEnable = VAR_2->hsubSampleEnable;
 VAR_3.vsubSampleEnable = VAR_2->vsubSampleEnable;
 VAR_3.cropEnable = VAR_2->cropEnable;
 VAR_3.cropWidthLastPixel = VAR_2->cropWidthLastPixel;
 VAR_3.cropWidthFirstPixel = VAR_2->cropWidthFirstPixel;
 VAR_3.cropHeightLastLine = VAR_2->cropHeightLastLine;
 VAR_3.cropHeightFirstLine = VAR_2->cropHeightFirstLine;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
