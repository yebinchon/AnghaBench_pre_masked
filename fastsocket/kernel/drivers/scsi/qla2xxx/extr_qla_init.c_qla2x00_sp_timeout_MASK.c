
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct srb_iocb {int (* timeout ) (TYPE_2__*) ;} ;
struct req_que {int ** outstanding_cmds; } ;
struct qla_hw_data {int hardware_lock; struct req_que** req_q_map; } ;
struct TYPE_7__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_8__ {size_t handle; int (* free ) (TYPE_4__*,TYPE_2__*) ;TYPE_1__ u; TYPE_3__* fcport; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_9__ {TYPE_4__* vha; } ;
typedef TYPE_3__ fc_port_t ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;

void
FUNC_4(unsigned long VAR_0)
{
 srb_t *VAR_1 = (srb_t *)VAR_0;
 struct srb_iocb *VAR_2;
 fc_port_t *VAR_3 = VAR_1->fcport;
 struct qla_hw_data *VAR_4 = VAR_3->vha->hw;
 struct req_que *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_4->hardware_lock, VAR_6);
 VAR_5 = VAR_4->req_q_map[0];
 VAR_5->outstanding_cmds[VAR_1->handle] = ((void*)0);
 VAR_2 = &VAR_1->u.iocb_cmd;
 VAR_2->timeout(VAR_1);
 VAR_1->free(VAR_3->vha, VAR_1);

 FUNC_1(&VAR_4->hardware_lock, VAR_6);
}
