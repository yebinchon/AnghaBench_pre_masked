
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tgt_mask_reg; } ;
struct qla_hw_data {scalar_t__ interrupts_on; int hardware_lock; TYPE_1__ nx_legacy_intr; int pdev; } ;
typedef int scsi_qla_host_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qla_hw_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct qla_hw_data *VAR_0)
{
 scsi_qla_host_t *VAR_1 = FUNC_0(VAR_0->pdev);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_0->hardware_lock);
 FUNC_2(VAR_0, VAR_0->nx_legacy_intr.tgt_mask_reg, 0x0400);
 FUNC_4(&VAR_0->hardware_lock);
 VAR_0->interrupts_on = 0;
}
