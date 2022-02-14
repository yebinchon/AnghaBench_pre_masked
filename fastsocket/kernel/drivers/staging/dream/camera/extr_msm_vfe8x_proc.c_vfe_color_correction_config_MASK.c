
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_color_correction_cfg {int coefQFactor; int k2; int k1; int k0; int c8; int c7; int c6; int c5; int c4; int c3; int c2; int c1; int c0; } ;
struct vfe_cmd_color_correction_config {int coefQFactor; int K2; int K1; int K0; int C8; int C7; int C6; int C5; int C4; int C3; int C2; int C1; int C0; int enable; } ;
typedef int cmd ;
struct TYPE_3__ {int colorCorrectionEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_color_correction_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(
 struct vfe_cmd_color_correction_config *VAR_2)
{
 struct vfe_color_correction_cfg VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_1->vfeModuleEnableLocal.colorCorrectionEnable = VAR_2->enable;

 VAR_3.c0 = VAR_2->C0;
 VAR_3.c1 = VAR_2->C1;
 VAR_3.c2 = VAR_2->C2;
 VAR_3.c3 = VAR_2->C3;
 VAR_3.c4 = VAR_2->C4;
 VAR_3.c5 = VAR_2->C5;
 VAR_3.c6 = VAR_2->C6;
 VAR_3.c7 = VAR_2->C7;
 VAR_3.c8 = VAR_2->C8;

 VAR_3.k0 = VAR_2->K0;
 VAR_3.k1 = VAR_2->K1;
 VAR_3.k2 = VAR_2->K2;

 VAR_3.coefQFactor = VAR_2->coefQFactor;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
