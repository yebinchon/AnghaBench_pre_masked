
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ipr_ioa_cfg {int dummy; } ;
struct TYPE_5__ {int residual_data_len; int ioasc; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct TYPE_7__ {TYPE_2__ ioasa; } ;
struct ipr_cmnd {TYPE_4__* hrrq; int queue; TYPE_3__ s; struct scsi_cmnd* scsi_cmd; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_8__ {int lock; int hrrq_free_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipr_ioa_cfg*,struct ipr_cmnd*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int ) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_10(struct ipr_cmnd *VAR_0)
{
 struct ipr_ioa_cfg *VAR_1 = VAR_0->ioa_cfg;
 struct scsi_cmnd *VAR_2 = VAR_0->scsi_cmd;
 u32 VAR_3 = FUNC_1(VAR_0->s.ioasa.hdr.ioasc);
 unsigned long VAR_4;

 FUNC_6(VAR_2, FUNC_1(VAR_0->s.ioasa.hdr.residual_data_len));

 if (FUNC_3(FUNC_0(VAR_3) == 0)) {
  FUNC_5(VAR_2);

  FUNC_7(VAR_0->hrrq->lock, VAR_4);
  FUNC_4(&VAR_0->queue, &VAR_0->hrrq->hrrq_free_q);
  VAR_2->scsi_done(VAR_2);
  FUNC_8(VAR_0->hrrq->lock, VAR_4);
 } else {
  FUNC_7(VAR_0->hrrq->lock, VAR_4);
  FUNC_2(VAR_1, VAR_0);
  FUNC_8(VAR_0->hrrq->lock, VAR_4);
 }
}
