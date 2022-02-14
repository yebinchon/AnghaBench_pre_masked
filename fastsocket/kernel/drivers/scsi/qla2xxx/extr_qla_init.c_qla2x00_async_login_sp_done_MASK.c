
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_8__ {TYPE_1__ logio; } ;
struct srb_iocb {TYPE_2__ u; } ;
struct scsi_qla_host {int dpc_flags; } ;
struct TYPE_9__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_10__ {TYPE_6__* fcport; int (* free ) (int ,TYPE_4__*) ;TYPE_3__ u; } ;
typedef TYPE_4__ srb_t ;
typedef struct scsi_qla_host scsi_qla_host_t ;
struct TYPE_11__ {int vha; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_6__*,int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, void *VAR_2, int VAR_3)
{
 srb_t *VAR_4 = (srb_t*)VAR_2;
 struct srb_iocb *VAR_5 = &VAR_4->u.iocb_cmd;
 struct scsi_qla_host *VAR_6 = (scsi_qla_host_t *)VAR_1;

 if (!FUNC_2(VAR_0, &VAR_6->dpc_flags))
  FUNC_0(VAR_4->fcport->vha, VAR_4->fcport,
      VAR_5->u.logio.data);
 VAR_4->free(VAR_4->fcport->vha, VAR_4);
}
