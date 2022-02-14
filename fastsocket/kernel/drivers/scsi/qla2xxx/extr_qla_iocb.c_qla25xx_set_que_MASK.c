
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {TYPE_4__* request; } ;
struct rsp_que {int dummy; } ;
struct TYPE_8__ {scalar_t__ cpu_affinity_enabled; } ;
struct qla_hw_data {int max_rsp_queues; struct rsp_que** rsp_q_map; TYPE_1__ flags; } ;
struct TYPE_12__ {TYPE_3__* fcport; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_11__ {int cpu; } ;
struct TYPE_10__ {TYPE_2__* vha; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_1(srb_t *VAR_0, struct rsp_que **VAR_1)
{
 struct scsi_cmnd *VAR_2 = FUNC_0(VAR_0);
 struct qla_hw_data *VAR_3 = VAR_0->fcport->vha->hw;
 int VAR_4 = VAR_2->request->cpu;

 if (VAR_3->flags.cpu_affinity_enabled && VAR_4 >= 0 &&
  VAR_4 < VAR_3->max_rsp_queues - 1)
  *VAR_1 = VAR_3->rsp_q_map[VAR_4 + 1];
  else
  *VAR_1 = VAR_3->rsp_q_map[0];
}
