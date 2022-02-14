
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct req_que {int num_outstanding_cmds; TYPE_6__** outstanding_cmds; } ;
struct qla_hw_data {int max_req_queues; int hardware_lock; TYPE_2__* isp_ops; struct req_que** req_q_map; } ;
struct fc_bsg_job {TYPE_5__* request; TYPE_4__* reply; TYPE_3__* req; int shost; } ;
struct TYPE_14__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_19__ {scalar_t__ type; int fcport; TYPE_1__ u; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_20__ {struct qla_hw_data* hw; } ;
typedef TYPE_7__ scsi_qla_host_t ;
struct TYPE_18__ {scalar_t__ msgcode; } ;
struct TYPE_17__ {int result; } ;
struct TYPE_16__ {int errors; } ;
struct TYPE_15__ {scalar_t__ (* abort_command ) (TYPE_6__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_7__*,int,char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_7__*,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*) ;
 TYPE_7__* FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;

int
FUNC_8(struct fc_bsg_job *VAR_9)
{
 scsi_qla_host_t *VAR_10 = FUNC_4(VAR_9->shost);
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 srb_t *VAR_12;
 int VAR_13, VAR_14;
 unsigned long VAR_15;
 struct req_que *VAR_16;


 FUNC_5(&VAR_11->hardware_lock, VAR_15);
 for (VAR_14 = 0; VAR_14 < VAR_11->max_req_queues; VAR_14++) {
  VAR_16 = VAR_11->req_q_map[VAR_14];
  if (!VAR_16)
   continue;

  for (VAR_13 = 1; VAR_13 < VAR_16->num_outstanding_cmds; VAR_13++) {
   VAR_12 = VAR_16->outstanding_cmds[VAR_13];
   if (VAR_12) {
    if (((VAR_12->type == VAR_3) ||
     (VAR_12->type == VAR_4) ||
     (VAR_12->type == VAR_5))
     && (VAR_12->u.bsg_job == VAR_9)) {
     FUNC_6(&VAR_11->hardware_lock, VAR_15);
     if (VAR_11->isp_ops->abort_command(VAR_12)) {
      FUNC_2(VAR_8, VAR_10, 0x7089,
          "mbx abort_command "
          "failed.\n");
      VAR_9->req->errors =
      VAR_9->reply->result = -VAR_0;
     } else {
      FUNC_1(VAR_6, VAR_10, 0x708a,
          "mbx abort_command "
          "success.\n");
      VAR_9->req->errors =
      VAR_9->reply->result = 0;
     }
     FUNC_5(&VAR_11->hardware_lock, VAR_15);
     goto done;
    }
   }
  }
 }
 FUNC_6(&VAR_11->hardware_lock, VAR_15);
 FUNC_2(VAR_7, VAR_10, 0x708b, "SRB not found to abort.\n");
 VAR_9->req->errors = VAR_9->reply->result = -VAR_1;
 return 0;

done:
 FUNC_6(&VAR_11->hardware_lock, VAR_15);
 if (VAR_9->request->msgcode == VAR_2)
  FUNC_0(VAR_12->fcport);
 FUNC_3(VAR_10, VAR_12);
 return 0;
}
