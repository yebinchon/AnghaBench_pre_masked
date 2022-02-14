
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delay; int status; } ;
struct qlcnic_hardware_context {int msix_supported; scalar_t__ reset_context; TYPE_1__ idc; int mbx_lock; } ;
struct qlcnic_adapter {int state; int idc_aen_work; TYPE_2__* pdev; int flags; scalar_t__ need_fw_reset; scalar_t__ fw_fail_cnt; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct qlcnic_adapter *VAR_6, int VAR_7)
{
 struct qlcnic_hardware_context *VAR_8 = VAR_6->ahw;
 int VAR_9;

 FUNC_7(&VAR_8->mbx_lock);
 FUNC_6(VAR_2, &VAR_8->idc.status);
 FUNC_6(VAR_3, &VAR_8->idc.status);
 VAR_8->idc.delay = VAR_1;
 VAR_8->reset_context = 0;
 VAR_6->fw_fail_cnt = 0;
 VAR_8->msix_supported = 1;
 VAR_6->need_fw_reset = 0;
 VAR_6->flags |= VAR_0;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;

 if (FUNC_3(VAR_6))
  FUNC_2(&VAR_6->pdev->dev, "failed to read mac addr\n");

 FUNC_0(&VAR_6->idc_aen_work, VAR_5);

 FUNC_1(VAR_4, &VAR_6->state);
 return 0;
}
