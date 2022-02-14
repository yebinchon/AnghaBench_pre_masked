
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct srb_iocb {int timer; } ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_4__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ srb_t ;
typedef struct scsi_qla_host scsi_qla_host_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_qla_host*,TYPE_2__*) ;

void
FUNC_2(void *VAR_0, void *VAR_1)
{
 srb_t *VAR_2 = (srb_t *)VAR_1;
 struct srb_iocb *VAR_3 = &VAR_2->u.iocb_cmd;
 struct scsi_qla_host *VAR_4 = (scsi_qla_host_t *)VAR_0;

 FUNC_0(&VAR_3->timer);
 FUNC_1(VAR_4, VAR_2);
}
