
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_tgt_queuedata {struct Scsi_Host* shost; } ;
struct scsi_cmnd {TYPE_2__* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {TYPE_1__* q; } ;
struct TYPE_3__ {struct scsi_tgt_queuedata* queuedata; } ;



struct Scsi_Host *FUNC_0(struct scsi_cmnd *VAR_0)
{
 struct scsi_tgt_queuedata *VAR_1 = VAR_0->request->q->queuedata;
 return VAR_1->shost;
}
