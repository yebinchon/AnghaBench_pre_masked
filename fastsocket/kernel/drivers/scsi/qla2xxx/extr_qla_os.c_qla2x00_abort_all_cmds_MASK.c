
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct req_que {int num_outstanding_cmds; TYPE_1__** outstanding_cmds; } ;
struct qla_hw_data {int max_req_queues; int hardware_lock; struct req_que** req_q_map; } ;
struct TYPE_6__ {int (* done ) (TYPE_2__*,TYPE_1__*,int) ;} ;
typedef TYPE_1__ srb_t ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;

void
FUNC_3(scsi_qla_host_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 unsigned long VAR_4;
 srb_t *VAR_5;
 struct qla_hw_data *VAR_6 = VAR_0->hw;
 struct req_que *VAR_7;

 FUNC_0(&VAR_6->hardware_lock, VAR_4);
 for (VAR_2 = 0; VAR_2 < VAR_6->max_req_queues; VAR_2++) {
  VAR_7 = VAR_6->req_q_map[VAR_2];
  if (!VAR_7)
   continue;
  if (!VAR_7->outstanding_cmds)
   continue;
  for (VAR_3 = 1; VAR_3 < VAR_7->num_outstanding_cmds; VAR_3++) {
   VAR_5 = VAR_7->outstanding_cmds[VAR_3];
   if (VAR_5) {
    VAR_7->outstanding_cmds[VAR_3] = ((void*)0);
    VAR_5->done(VAR_0, VAR_5, VAR_1);
   }
  }
 }
 FUNC_1(&VAR_6->hardware_lock, VAR_4);
}
