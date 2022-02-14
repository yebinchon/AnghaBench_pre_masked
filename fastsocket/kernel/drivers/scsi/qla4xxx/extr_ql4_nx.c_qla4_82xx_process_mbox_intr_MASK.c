
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tgt_mask_reg; } ;
struct scsi_qla_host {int mbox_status_count; TYPE_2__ nx_legacy_intr; int flags; TYPE_1__* isp_ops; TYPE_3__* qla4_82xx_reg; } ;
struct TYPE_6__ {int host_status; int host_int; } ;
struct TYPE_4__ {int (* interrupt_service_routine ) (struct scsi_qla_host*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_qla_host*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_qla_host*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct scsi_qla_host *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_3->qla4_82xx_reg->host_int);
 if (VAR_5 & VAR_2) {
  VAR_3->mbox_status_count = VAR_4;
  VAR_5 = FUNC_1(&VAR_3->qla4_82xx_reg->host_status);
  VAR_3->isp_ops->interrupt_service_routine(VAR_3, VAR_5);

  if (FUNC_3(VAR_0, &VAR_3->flags) &&
      FUNC_3(VAR_1, &VAR_3->flags))
   FUNC_0(VAR_3, VAR_3->nx_legacy_intr.tgt_mask_reg,
     0xfbff);
 }
}
