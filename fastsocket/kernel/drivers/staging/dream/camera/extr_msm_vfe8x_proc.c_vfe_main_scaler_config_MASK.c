
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_main_scaler_cfg {int vertPhaseInit; int vertMNInit; int vertInterResolution; int vertPhaseMult; int outHeight; int inHeight; int horizPhaseInit; int horizMNInit; int horizInterResolution; int horizPhaseMult; int outWidth; int inWidth; int vEnable; int hEnable; } ;
struct TYPE_11__ {int phaseInit; int MNCounterInit; } ;
struct TYPE_10__ {int interpolationResolution; int phaseMultiplicationFactor; int outputSize; int inputSize; int enable; } ;
struct TYPE_9__ {int phaseInit; int MNCounterInit; } ;
struct TYPE_8__ {int interpolationResolution; int phaseMultiplicationFactor; int outputSize; int inputSize; int enable; } ;
struct vfe_cmd_main_scaler_config {TYPE_5__ MNInitV; TYPE_4__ vconfig; TYPE_3__ MNInitH; TYPE_2__ hconfig; int enable; } ;
typedef int cmd ;
struct TYPE_7__ {int mainScalerEnable; } ;
struct TYPE_12__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_0 (struct vfe_main_scaler_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_main_scaler_config *VAR_2)
{
 struct vfe_main_scaler_cfg VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.mainScalerEnable = VAR_2->enable;

 VAR_3.hEnable = VAR_2->hconfig.enable;
 VAR_3.vEnable = VAR_2->vconfig.enable;
 VAR_3.inWidth = VAR_2->hconfig.inputSize;
 VAR_3.outWidth = VAR_2->hconfig.outputSize;
 VAR_3.horizPhaseMult = VAR_2->hconfig.phaseMultiplicationFactor;
 VAR_3.horizInterResolution = VAR_2->hconfig.interpolationResolution;
 VAR_3.horizMNInit = VAR_2->MNInitH.MNCounterInit;
 VAR_3.horizPhaseInit = VAR_2->MNInitH.phaseInit;
 VAR_3.inHeight = VAR_2->vconfig.inputSize;
 VAR_3.outHeight = VAR_2->vconfig.outputSize;
 VAR_3.vertPhaseMult = VAR_2->vconfig.phaseMultiplicationFactor;
 VAR_3.vertInterResolution = VAR_2->vconfig.interpolationResolution;
 VAR_3.vertMNInit = VAR_2->MNInitV.MNCounterInit;
 VAR_3.vertPhaseInit = VAR_2->MNInitV.phaseInit;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
