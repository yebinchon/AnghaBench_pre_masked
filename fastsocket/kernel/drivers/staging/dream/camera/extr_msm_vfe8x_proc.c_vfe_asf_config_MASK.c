
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_asf_config {int cropLastPixel; int cropFirstPixel; int cropLastLine; int cropFirstLine; int * filter2Coefficients; int * filter1Coefficients; int sharpThreshE5; int sharpThreshE4; int sharpThreshE3; int sharpThreshE2; int normalizeFactor; int sharpK2; int sharpK1; int sharpThreshE1; int cropEnable; int smoothCoefSurr; int smoothCoefCenter; int sharpMode; int smoothFilterEnabled; int enable; } ;
struct vfe_asfcrop_cfg {int lastPixel; int firstPixel; int lastLine; int firstLine; int F2Coeff8; int F2Coeff7; int F2Coeff6; int F2Coeff5; int F2Coeff4; int F2Coeff3; int F2Coeff2; int F2Coeff1; int F2Coeff0; int F1Coeff8; int F1Coeff7; int F1Coeff6; int F1Coeff5; int F1Coeff4; int F1Coeff3; int F1Coeff2; int F1Coeff1; int F1Coeff0; int sharpThresholdE5; int sharpThresholdE4; int sharpThresholdE3; int sharpThresholdE2; int normalizeFactor; int sharpDegreeK2; int sharpDegreeK1; int sharpThresholdE1; int cropEnable; int smoothCoeff1; int smoothCoeff0; int sharpMode; int smoothEnable; } ;
struct vfe_asf_update {int lastPixel; int firstPixel; int lastLine; int firstLine; int F2Coeff8; int F2Coeff7; int F2Coeff6; int F2Coeff5; int F2Coeff4; int F2Coeff3; int F2Coeff2; int F2Coeff1; int F2Coeff0; int F1Coeff8; int F1Coeff7; int F1Coeff6; int F1Coeff5; int F1Coeff4; int F1Coeff3; int F1Coeff2; int F1Coeff1; int F1Coeff0; int sharpThresholdE5; int sharpThresholdE4; int sharpThresholdE3; int sharpThresholdE2; int normalizeFactor; int sharpDegreeK2; int sharpDegreeK1; int sharpThresholdE1; int cropEnable; int smoothCoeff1; int smoothCoeff0; int sharpMode; int smoothEnable; } ;
typedef int cmd2 ;
typedef int cmd ;
struct TYPE_3__ {int asfEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct vfe_asfcrop_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_asf_config *VAR_3)
{
 struct vfe_asf_update VAR_4;
 struct vfe_asfcrop_cfg VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 VAR_2->vfeModuleEnableLocal.asfEnable = VAR_3->enable;

 VAR_4.smoothEnable = VAR_3->smoothFilterEnabled;
 VAR_4.sharpMode = VAR_3->sharpMode;
 VAR_4.smoothCoeff0 = VAR_3->smoothCoefCenter;
 VAR_4.smoothCoeff1 = VAR_3->smoothCoefSurr;
 VAR_4.cropEnable = VAR_3->cropEnable;
 VAR_4.sharpThresholdE1 = VAR_3->sharpThreshE1;
 VAR_4.sharpDegreeK1 = VAR_3->sharpK1;
 VAR_4.sharpDegreeK2 = VAR_3->sharpK2;
 VAR_4.normalizeFactor = VAR_3->normalizeFactor;
 VAR_4.sharpThresholdE2 = VAR_3->sharpThreshE2;
 VAR_4.sharpThresholdE3 = VAR_3->sharpThreshE3;
 VAR_4.sharpThresholdE4 = VAR_3->sharpThreshE4;
 VAR_4.sharpThresholdE5 = VAR_3->sharpThreshE5;
 VAR_4.F1Coeff0 = VAR_3->filter1Coefficients[0];
 VAR_4.F1Coeff1 = VAR_3->filter1Coefficients[1];
 VAR_4.F1Coeff2 = VAR_3->filter1Coefficients[2];
 VAR_4.F1Coeff3 = VAR_3->filter1Coefficients[3];
 VAR_4.F1Coeff4 = VAR_3->filter1Coefficients[4];
 VAR_4.F1Coeff5 = VAR_3->filter1Coefficients[5];
 VAR_4.F1Coeff6 = VAR_3->filter1Coefficients[6];
 VAR_4.F1Coeff7 = VAR_3->filter1Coefficients[7];
 VAR_4.F1Coeff8 = VAR_3->filter1Coefficients[8];
 VAR_4.F2Coeff0 = VAR_3->filter2Coefficients[0];
 VAR_4.F2Coeff1 = VAR_3->filter2Coefficients[1];
 VAR_4.F2Coeff2 = VAR_3->filter2Coefficients[2];
 VAR_4.F2Coeff3 = VAR_3->filter2Coefficients[3];
 VAR_4.F2Coeff4 = VAR_3->filter2Coefficients[4];
 VAR_4.F2Coeff5 = VAR_3->filter2Coefficients[5];
 VAR_4.F2Coeff6 = VAR_3->filter2Coefficients[6];
 VAR_4.F2Coeff7 = VAR_3->filter2Coefficients[7];
 VAR_4.F2Coeff8 = VAR_3->filter2Coefficients[8];

 FUNC_1(VAR_2->vfebase + VAR_0,
  (uint32_t *)&VAR_4, sizeof(VAR_4));

 VAR_5 = VAR_3->cropFirstLine;
 VAR_5 = VAR_3->cropLastLine;
 VAR_5 = VAR_3->cropFirstPixel;
 VAR_5 = VAR_3->cropLastPixel;

 FUNC_1(VAR_2->vfebase + VAR_1,
  (uint32_t *)&VAR_5, sizeof(VAR_5));
}
