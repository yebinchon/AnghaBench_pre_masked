
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_hardware_context {int fw_hal_version; int op_mode; } ;
struct qlcnic_adapter {int state; int * nic_ops; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;

 VAR_4->op_mode = VAR_0;
 FUNC_0(&VAR_3->pdev->dev,
   "HAL Version: %d Non Privileged SRIOV function\n",
   VAR_4->fw_hal_version);
 VAR_3->nic_ops = &VAR_2;
 FUNC_1(VAR_1, &VAR_3->state);
 return;
}
