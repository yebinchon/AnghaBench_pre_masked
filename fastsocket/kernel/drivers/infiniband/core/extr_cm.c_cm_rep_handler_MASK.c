
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct cm_work {int list; TYPE_7__* mad_recv_wc; int port; } ;
struct cm_rep_msg {int initiator_depth; int resp_resources; int local_comm_id; int local_ca_guid; int remote_comm_id; } ;
struct TYPE_17__ {TYPE_5__* port; void* timeout; } ;
struct TYPE_15__ {void* timeout; } ;
struct TYPE_14__ {int state; int remote_id; } ;
struct cm_id_private {int lock; int work_list; int work_count; int msg; TYPE_6__ av; TYPE_4__ alt_av; int target_ack_delay; int rnr_retry_count; int sq_psn; int responder_resources; int initiator_depth; int qp_type; void* remote_qpn; TYPE_3__ id; TYPE_8__* timewait_info; } ;
struct TYPE_13__ {int remote_id; } ;
struct TYPE_19__ {scalar_t__ inserted_remote_id; int remote_id_node; void* remote_qpn; int remote_ca_guid; TYPE_2__ work; } ;
struct TYPE_12__ {scalar_t__ mad; } ;
struct TYPE_18__ {TYPE_1__ recv_buf; } ;
struct TYPE_16__ {int mad_agent; } ;
struct TYPE_11__ {int lock; int remote_id_table; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int *) ;
 TYPE_10__ VAR_4 ;
 void* FUNC_1 (int ,void*) ;
 struct cm_id_private* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (struct cm_work*) ;
 int FUNC_5 (struct cm_work*,int ) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int ,TYPE_7__*,int ,int ,int *,int ) ;
 int FUNC_9 (struct cm_id_private*,struct cm_work*) ;
 void* FUNC_10 (struct cm_rep_msg*,int ) ;
 int FUNC_11 (struct cm_rep_msg*) ;
 int FUNC_12 (struct cm_rep_msg*) ;
 int FUNC_13 (struct cm_rep_msg*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct cm_work *VAR_5)
{
 struct cm_id_private *VAR_6;
 struct cm_rep_msg *VAR_7;
 int VAR_8;

 VAR_7 = (struct cm_rep_msg *)VAR_5->mad_recv_wc->recv_buf.mad;
 VAR_6 = FUNC_2(VAR_7->remote_comm_id, 0);
 if (!VAR_6) {
  FUNC_4(VAR_5);
  return -VAR_1;
 }

 FUNC_5(VAR_5, VAR_6->qp_type);

 FUNC_18(&VAR_6->lock);
 switch (VAR_6->id.state) {
 case 128:
 case 129:
  break;
 default:
  FUNC_20(&VAR_6->lock);
  VAR_8 = -VAR_1;
  goto error;
 }

 VAR_6->timewait_info->work.remote_id = VAR_7->local_comm_id;
 VAR_6->timewait_info->remote_ca_guid = VAR_7->local_ca_guid;
 VAR_6->timewait_info->remote_qpn = FUNC_10(VAR_7, VAR_6->qp_type);

 FUNC_17(&VAR_4.lock);

 if (FUNC_6(VAR_6->timewait_info)) {
  FUNC_19(&VAR_4.lock);
  FUNC_20(&VAR_6->lock);
  VAR_8 = -VAR_1;
  goto error;
 }

 if (FUNC_7(VAR_6->timewait_info)) {
  FUNC_16(&VAR_6->timewait_info->remote_id_node,
    &VAR_4.remote_id_table);
  VAR_6->timewait_info->inserted_remote_id = 0;
  FUNC_19(&VAR_4.lock);
  FUNC_20(&VAR_6->lock);
  FUNC_8(VAR_5->port, VAR_5->mad_recv_wc,
        VAR_2, VAR_0,
        ((void*)0), 0);
  VAR_8 = -VAR_1;
  goto error;
 }
 FUNC_19(&VAR_4.lock);

 VAR_6->id.state = VAR_3;
 VAR_6->id.remote_id = VAR_7->local_comm_id;
 VAR_6->remote_qpn = FUNC_10(VAR_7, VAR_6->qp_type);
 VAR_6->initiator_depth = VAR_7->resp_resources;
 VAR_6->responder_resources = VAR_7->initiator_depth;
 VAR_6->sq_psn = FUNC_12(VAR_7);
 VAR_6->rnr_retry_count = FUNC_11(VAR_7);
 VAR_6->target_ack_delay = FUNC_13(VAR_7);
 VAR_6->av.timeout =
   FUNC_1(VAR_6->target_ack_delay,
           VAR_6->av.timeout - 1);
 VAR_6->alt_av.timeout =
   FUNC_1(VAR_6->target_ack_delay,
           VAR_6->alt_av.timeout - 1);



 FUNC_14(VAR_6->av.port->mad_agent, VAR_6->msg);
 VAR_8 = FUNC_0(&VAR_6->work_count);
 if (!VAR_8)
  FUNC_15(&VAR_5->list, &VAR_6->work_list);
 FUNC_20(&VAR_6->lock);

 if (VAR_8)
  FUNC_9(VAR_6, VAR_5);
 else
  FUNC_3(VAR_6);
 return 0;

error:
 FUNC_3(VAR_6);
 return VAR_8;
}
