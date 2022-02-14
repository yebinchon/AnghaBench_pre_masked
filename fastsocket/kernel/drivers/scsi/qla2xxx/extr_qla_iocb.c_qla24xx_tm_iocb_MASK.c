
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct tsk_mgmt_entry {int entry_count; int lun; int vp_index; int * port_id; int control_flags; void* timeout; void* nport_handle; int handle; int entry_type; } ;
struct TYPE_10__ {scalar_t__ flags; unsigned int lun; } ;
struct TYPE_11__ {TYPE_2__ tmf; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int id; } ;
struct qla_hw_data {int r_a_tov; } ;
struct TYPE_12__ {int domain; int area; int al_pa; } ;
struct TYPE_13__ {TYPE_4__ b; } ;
struct fc_port {int loop_id; TYPE_7__* vha; TYPE_5__ d_id; } ;
struct TYPE_9__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_14__ {TYPE_1__ u; struct fc_port* fcport; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_15__ {int vp_idx; struct req_que* req; struct qla_hw_data* hw; } ;
typedef TYPE_7__ scsi_qla_host_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static void
FUNC_5(srb_t *VAR_2, struct tsk_mgmt_entry *VAR_3)
{
 uint32_t VAR_4;
 unsigned int VAR_5;
 struct fc_port *VAR_6 = VAR_2->fcport;
 scsi_qla_host_t *VAR_7 = VAR_6->vha;
 struct qla_hw_data *VAR_8 = VAR_7->hw;
 struct srb_iocb *VAR_9 = &VAR_2->u.iocb_cmd;
 struct req_que *VAR_10 = VAR_7->req;

 VAR_4 = VAR_9->u.tmf.flags;
 VAR_5 = VAR_9->u.tmf.lun;

 VAR_3->entry_type = VAR_1;
 VAR_3->entry_count = 1;
 VAR_3->handle = FUNC_0(VAR_10->id, VAR_3->handle);
 VAR_3->nport_handle = FUNC_1(VAR_6->loop_id);
 VAR_3->timeout = FUNC_1(VAR_8->r_a_tov / 10 * 2);
 VAR_3->control_flags = FUNC_2(VAR_4);
 VAR_3->port_id[0] = VAR_6->d_id.b.al_pa;
 VAR_3->port_id[1] = VAR_6->d_id.b.area;
 VAR_3->port_id[2] = VAR_6->d_id.b.domain;
 VAR_3->vp_index = VAR_6->vha->vp_idx;

 if (VAR_4 == VAR_0) {
  FUNC_4(VAR_5, &VAR_3->lun);
  FUNC_3((uint8_t *)&VAR_3->lun,
   sizeof(VAR_3->lun));
 }
}
