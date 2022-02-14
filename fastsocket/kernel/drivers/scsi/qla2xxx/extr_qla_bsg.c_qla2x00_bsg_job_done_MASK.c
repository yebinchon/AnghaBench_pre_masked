
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_2__* reply; } ;
struct TYPE_5__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_7__ {int (* free ) (struct scsi_qla_host*,TYPE_3__*) ;TYPE_1__ u; } ;
typedef TYPE_3__ srb_t ;
typedef struct scsi_qla_host scsi_qla_host_t ;
struct TYPE_6__ {int result; } ;


 int FUNC_0 (struct fc_bsg_job*) ;
 int FUNC_1 (struct scsi_qla_host*,TYPE_3__*) ;

void
FUNC_2(void *VAR_0, void *VAR_1, int VAR_2)
{
 srb_t *VAR_3 = (srb_t*)VAR_1;
 struct scsi_qla_host *VAR_4 = (scsi_qla_host_t *)VAR_0;
 struct fc_bsg_job *VAR_5 = VAR_3->u.bsg_job;

 VAR_5->reply->result = VAR_2;
 VAR_5->job_done(VAR_5);
 VAR_3->free(VAR_4, VAR_3);
}
