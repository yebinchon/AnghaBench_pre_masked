
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_asf_update {int * filter2Coefficients; int * filter1Coefficients; int sharpThreshE5; int sharpThreshE4; int sharpThreshE3; int sharpThreshE2; int normalizeFactor; int sharpK2; int sharpK1; int sharpThreshE1; int cropEnable; int smoothCoefSurr; int smoothCoefCenter; int sharpMode; int smoothFilterEnabled; int enable; } ;
struct vfe_asf_update {int F2Coeff8; int F2Coeff7; int F2Coeff6; int F2Coeff5; int F2Coeff4; int F2Coeff3; int F2Coeff2; int F2Coeff1; int F2Coeff0; int F1Coeff8; int F1Coeff7; int F1Coeff6; int F1Coeff5; int F1Coeff4; int F1Coeff3; int F1Coeff2; int F1Coeff1; int F1Coeff0; int sharpThresholdE5; int sharpThresholdE4; int sharpThresholdE3; int sharpThresholdE2; int normalizeFactor; int sharpDegreeK2; int sharpDegreeK1; int sharpThresholdE1; int cropEnable; int smoothCoeff0; int smoothCoeff1; int sharpMode; int smoothEnable; } ;
typedef int cmd ;
struct TYPE_3__ {int asfEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_asf_update*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_asf_update *VAR_2)
{
 struct vfe_asf_update VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.asfEnable = VAR_2->enable;

 VAR_3.smoothEnable = VAR_2->smoothFilterEnabled;
 VAR_3.sharpMode = VAR_2->sharpMode;
 VAR_3.smoothCoeff1 = VAR_2->smoothCoefCenter;
 VAR_3.smoothCoeff0 = VAR_2->smoothCoefSurr;
 VAR_3.cropEnable = VAR_2->cropEnable;
 VAR_3.sharpThresholdE1 = VAR_2->sharpThreshE1;
 VAR_3.sharpDegreeK1 = VAR_2->sharpK1;
 VAR_3.sharpDegreeK2 = VAR_2->sharpK2;
 VAR_3.normalizeFactor = VAR_2->normalizeFactor;
 VAR_3.sharpThresholdE2 = VAR_2->sharpThreshE2;
 VAR_3.sharpThresholdE3 = VAR_2->sharpThreshE3;
 VAR_3.sharpThresholdE4 = VAR_2->sharpThreshE4;
 VAR_3.sharpThresholdE5 = VAR_2->sharpThreshE5;
 VAR_3.F1Coeff0 = VAR_2->filter1Coefficients[0];
 VAR_3.F1Coeff1 = VAR_2->filter1Coefficients[1];
 VAR_3.F1Coeff2 = VAR_2->filter1Coefficients[2];
 VAR_3.F1Coeff3 = VAR_2->filter1Coefficients[3];
 VAR_3.F1Coeff4 = VAR_2->filter1Coefficients[4];
 VAR_3.F1Coeff5 = VAR_2->filter1Coefficients[5];
 VAR_3.F1Coeff6 = VAR_2->filter1Coefficients[6];
 VAR_3.F1Coeff7 = VAR_2->filter1Coefficients[7];
 VAR_3.F1Coeff8 = VAR_2->filter1Coefficients[8];
 VAR_3.F2Coeff0 = VAR_2->filter2Coefficients[0];
 VAR_3.F2Coeff1 = VAR_2->filter2Coefficients[1];
 VAR_3.F2Coeff2 = VAR_2->filter2Coefficients[2];
 VAR_3.F2Coeff3 = VAR_2->filter2Coefficients[3];
 VAR_3.F2Coeff4 = VAR_2->filter2Coefficients[4];
 VAR_3.F2Coeff5 = VAR_2->filter2Coefficients[5];
 VAR_3.F2Coeff6 = VAR_2->filter2Coefficients[6];
 VAR_3.F2Coeff7 = VAR_2->filter2Coefficients[7];
 VAR_3.F2Coeff8 = VAR_2->filter2Coefficients[8];

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
