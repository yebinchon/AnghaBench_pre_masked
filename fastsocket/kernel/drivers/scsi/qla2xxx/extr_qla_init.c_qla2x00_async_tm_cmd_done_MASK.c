
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_10__ {scalar_t__ flags; scalar_t__ data; scalar_t__ lun; } ;
struct TYPE_11__ {TYPE_3__ tmf; } ;
struct srb_iocb {TYPE_4__ u; } ;
struct scsi_qla_host {TYPE_2__* hw; int dpc_flags; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_13__ {TYPE_5__* fcport; int (* free ) (int ,TYPE_6__*) ;TYPE_1__ u; } ;
typedef TYPE_6__ srb_t ;
typedef struct scsi_qla_host scsi_qla_host_t ;
struct TYPE_12__ {int vha; int loop_id; } ;
struct TYPE_9__ {int * rsp_q_map; int * req_q_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_5 ;
 int FUNC_1 (struct scsi_qla_host*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_6, void *VAR_7, int VAR_8)
{
 srb_t *VAR_9 = (srb_t*)VAR_7;
 struct srb_iocb *VAR_10 = &VAR_9->u.iocb_cmd;
 struct scsi_qla_host *VAR_11 = (scsi_qla_host_t *)VAR_6;
 uint32_t VAR_12;
 uint16_t VAR_13;
 int VAR_14;

 if (!FUNC_3(VAR_4, &VAR_11->dpc_flags)) {
  VAR_12 = VAR_10->u.tmf.flags;
  VAR_13 = (uint16_t)VAR_10->u.tmf.lun;


  VAR_14 = FUNC_1(VAR_11, VAR_11->hw->req_q_map[0],
   VAR_11->hw->rsp_q_map[0], VAR_9->fcport->loop_id, VAR_13,
   VAR_12 == VAR_3 ? VAR_1 : VAR_0);

  if ((VAR_14 != VAR_2) || VAR_10->u.tmf.data) {
   FUNC_0(VAR_5, VAR_11, 0x8030,
       "TM IOCB failed (%x).\n", VAR_14);
  }
 }
 VAR_9->free(VAR_9->fcport->vha, VAR_9);
}
