
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tgt_mask_reg; } ;
struct scsi_qla_host {int flags; int hardware_lock; TYPE_1__ nx_legacy_intr; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_qla_host*,int ,int) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct scsi_qla_host *VAR_1)
{
 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->hardware_lock);

 FUNC_0(VAR_1, VAR_1->nx_legacy_intr.tgt_mask_reg, 0xfbff);
 FUNC_4(&VAR_1->hardware_lock);
 FUNC_2(VAR_0, &VAR_1->flags);
}
