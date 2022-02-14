
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_demosaic_cfg {int greenDiffThreshold; int redDiffThreshold; int blueDiffThreshold; int maxValue; int minValue; int ratio; int lpThreshold; int slopeShift; int fmaxThreshold; int fminThreshold; int abfShift; int forceAbfOn; int badPixelCorrEnable; int abfEnable; } ;
struct vfe_demosaic_bpc_cfg {int greenDiffThreshold; int redDiffThreshold; int blueDiffThreshold; int maxValue; int minValue; int ratio; int lpThreshold; int slopeShift; int fmaxThreshold; int fminThreshold; int abfShift; int forceAbfOn; int badPixelCorrEnable; int abfEnable; } ;
struct vfe_demosaic_abf_cfg {int greenDiffThreshold; int redDiffThreshold; int blueDiffThreshold; int maxValue; int minValue; int ratio; int lpThreshold; int slopeShift; int fmaxThreshold; int fminThreshold; int abfShift; int forceAbfOn; int badPixelCorrEnable; int abfEnable; } ;
struct TYPE_7__ {int greenDiffThreshold; int redDiffThreshold; int blueDiffThreshold; int fmaxThreshold; int fminThreshold; int enable; } ;
struct TYPE_6__ {int max; int min; int ratio; int lpThreshold; int shift; int forceOn; int enable; } ;
struct vfe_cmd_demosaic_config {TYPE_3__ bpcConfig; TYPE_2__ abfConfig; int slopeShift; int enable; } ;
typedef int cmd_bpc ;
typedef int cmd_abf ;
typedef int cmd ;
struct TYPE_5__ {int demosaicEnable; } ;
struct TYPE_8__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (struct vfe_demosaic_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_demosaic_config *VAR_4)
{
 struct vfe_demosaic_cfg VAR_5;
 struct vfe_demosaic_bpc_cfg VAR_6;
 struct vfe_demosaic_abf_cfg VAR_7;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 VAR_3->vfeModuleEnableLocal.demosaicEnable = VAR_4->enable;

 VAR_5.abfEnable = VAR_4->abfConfig.enable;
 VAR_5.badPixelCorrEnable = VAR_4->bpcConfig.enable;
 VAR_5.forceAbfOn = VAR_4->abfConfig.forceOn;
 VAR_5.abfShift = VAR_4->abfConfig.shift;
 VAR_5.fminThreshold = VAR_4->bpcConfig.fminThreshold;
 VAR_5.fmaxThreshold = VAR_4->bpcConfig.fmaxThreshold;
 VAR_5.slopeShift = VAR_4->slopeShift;

 FUNC_1(VAR_3->vfebase + VAR_2,
  (uint32_t *)&VAR_5, sizeof(VAR_5));

 VAR_7.lpThreshold = VAR_4->abfConfig.lpThreshold;
 VAR_7.ratio = VAR_4->abfConfig.ratio;
 VAR_7.minValue = VAR_4->abfConfig.min;
 VAR_7.maxValue = VAR_4->abfConfig.max;

 FUNC_1(VAR_3->vfebase + VAR_0,
  (uint32_t *)&VAR_7, sizeof(VAR_7));

 VAR_6.blueDiffThreshold = VAR_4->bpcConfig.blueDiffThreshold;
 VAR_6.redDiffThreshold = VAR_4->bpcConfig.redDiffThreshold;
 VAR_6.greenDiffThreshold = VAR_4->bpcConfig.greenDiffThreshold;

 FUNC_1(VAR_3->vfebase + VAR_1,
  (uint32_t *)&VAR_6, sizeof(VAR_6));
}
