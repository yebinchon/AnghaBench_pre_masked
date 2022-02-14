
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_cmd_bus_pm_start {int output1CbcrWrPmEnable; int output1YWrPmEnable; int output2CbcrWrPmEnable; int output2YWrPmEnable; } ;
struct VFE_Bus_Pm_ConfigCmdType {int output1CbcrWrPmEnable; int output1YWrPmEnable; int output2CbcrWrPmEnable; int output2YWrPmEnable; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct VFE_Bus_Pm_ConfigCmdType*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_2(struct vfe_cmd_bus_pm_start *VAR_2)
{
 struct VFE_Bus_Pm_ConfigCmdType VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(struct VFE_Bus_Pm_ConfigCmdType));

 VAR_3.output2YWrPmEnable = VAR_2->output2YWrPmEnable;
 VAR_3.output2CbcrWrPmEnable = VAR_2->output2CbcrWrPmEnable;
 VAR_3.output1YWrPmEnable = VAR_2->output1YWrPmEnable;
 VAR_3.output1CbcrWrPmEnable = VAR_2->output1CbcrWrPmEnable;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
