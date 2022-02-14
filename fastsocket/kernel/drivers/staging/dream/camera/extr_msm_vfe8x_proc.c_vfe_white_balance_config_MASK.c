
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_wb_cfg {int ch2Gain; int ch1Gain; int ch0Gain; } ;
struct vfe_cmd_white_balance_config {int ch2Gain; int ch1Gain; int ch0Gain; int enable; } ;
typedef int cmd ;
struct TYPE_3__ {int whiteBalanceEnable; } ;
struct TYPE_4__ {scalar_t__ vfebase; TYPE_1__ vfeModuleEnableLocal; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vfe_wb_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(struct vfe_cmd_white_balance_config *VAR_2)
{
 struct vfe_wb_cfg VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_1->vfeModuleEnableLocal.whiteBalanceEnable =
  VAR_2->enable;

 VAR_3.ch0Gain = VAR_2->ch0Gain;
 VAR_3.ch1Gain = VAR_2->ch1Gain;
 VAR_3.ch2Gain = VAR_2->ch2Gain;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
