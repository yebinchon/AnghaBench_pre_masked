
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_module_enable {int scaler2CbcrEnable; int scaler2YEnable; int chromaSubsampleEnable; int chromaSuppressionEnable; int asfEnable; int chromaEnhanEnable; int rgbLUTEnable; int lumaAdaptationEnable; int skinToneEnable; int yHistEnable; int colorCorrectionEnable; int whiteBalanceEnable; int mainScalerEnable; int cropEnable; int statsEnable; int demosaicEnable; int chromaUpsampleEnable; int demuxEnable; int lensRollOffEnable; int blackLevelCorrectionEnable; } ;
struct vfe_mod_enable {int scaler2CbcrEnable; int scaler2YEnable; int chromaSubsampleEnable; int chromaSuppressionEnable; int asfEnable; int chromaEnhanEnable; int rgbLUTEnable; int lumaAdaptationEnable; int skinToneEnable; int yHistEnable; int colorCorrectionEnable; int whiteBalanceEnable; int mainScalerEnable; int cropEnable; int statsEnable; int demosaicEnable; int chromaUpsampleEnable; int demuxEnable; int lensRollOffEnable; int blackLevelCorrectionEnable; } ;
typedef int ena ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_mod_enable*,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_module_enable *VAR_2)
{
 struct vfe_mod_enable VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.blackLevelCorrectionEnable = VAR_2->blackLevelCorrectionEnable;
 VAR_3.lensRollOffEnable = VAR_2->lensRollOffEnable;
 VAR_3.demuxEnable = VAR_2->demuxEnable;
 VAR_3.chromaUpsampleEnable = VAR_2->chromaUpsampleEnable;
 VAR_3.demosaicEnable = VAR_2->demosaicEnable;
 VAR_3.statsEnable = VAR_2->statsEnable;
 VAR_3.cropEnable = VAR_2->cropEnable;
 VAR_3.mainScalerEnable = VAR_2->mainScalerEnable;
 VAR_3.whiteBalanceEnable = VAR_2->whiteBalanceEnable;
 VAR_3.colorCorrectionEnable = VAR_2->colorCorrectionEnable;
 VAR_3.yHistEnable = VAR_2->yHistEnable;
 VAR_3.skinToneEnable = VAR_2->skinToneEnable;
 VAR_3.lumaAdaptationEnable = VAR_2->lumaAdaptationEnable;
 VAR_3.rgbLUTEnable = VAR_2->rgbLUTEnable;
 VAR_3.chromaEnhanEnable = VAR_2->chromaEnhanEnable;
 VAR_3.asfEnable = VAR_2->asfEnable;
 VAR_3.chromaSuppressionEnable = VAR_2->chromaSuppressionEnable;
 VAR_3.chromaSubsampleEnable = VAR_2->chromaSubsampleEnable;
 VAR_3.scaler2YEnable = VAR_2->scaler2YEnable;
 VAR_3.scaler2CbcrEnable = VAR_2->scaler2CbcrEnable;

 FUNC_1(*((uint32_t *)&VAR_3), VAR_1->vfebase + VAR_0);
}
