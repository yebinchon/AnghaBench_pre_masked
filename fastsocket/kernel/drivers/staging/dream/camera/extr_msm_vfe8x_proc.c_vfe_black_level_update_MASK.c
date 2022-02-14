
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_black_level_config {int oddOddAdjustment; int oddEvenAdjustment; int evenOddAdjustment; int evenEvenAdjustment; int enable; } ;
struct vfe_blacklevel_cfg {int oddOddAdjustment; int oddEvenAdjustment; int evenOddAdjustment; int evenEvenAdjustment; } ;
typedef int cmd ;
struct TYPE_3__ {int blackLevelCorrectionEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_blacklevel_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_black_level_config *VAR_2)
{
 struct vfe_blacklevel_cfg VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_1->vfeModuleEnableLocal.blackLevelCorrectionEnable = VAR_2->enable;

 VAR_3.evenEvenAdjustment = VAR_2->evenEvenAdjustment;
 VAR_3.evenOddAdjustment = VAR_2->evenOddAdjustment;
 VAR_3.oddEvenAdjustment = VAR_2->oddEvenAdjustment;
 VAR_3.oddOddAdjustment = VAR_2->oddOddAdjustment;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
