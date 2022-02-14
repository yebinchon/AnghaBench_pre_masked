
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; scalar_t__ private_data_len; void* private_data; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct rdma_cm_event {TYPE_2__ param; } ;
struct ib_cm_req_event_param {int remote_qpn; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rdma_cm_event *VAR_1,
       struct ib_cm_req_event_param *VAR_2,
       void *VAR_3, int VAR_4)
{
 VAR_1->param.conn.private_data = VAR_3 + VAR_4;
 VAR_1->param.conn.private_data_len = VAR_0 - VAR_4;
 VAR_1->param.conn.responder_resources = VAR_2->responder_resources;
 VAR_1->param.conn.initiator_depth = VAR_2->initiator_depth;
 VAR_1->param.conn.flow_control = VAR_2->flow_control;
 VAR_1->param.conn.retry_count = VAR_2->retry_count;
 VAR_1->param.conn.rnr_retry_count = VAR_2->rnr_retry_count;
 VAR_1->param.conn.srq = VAR_2->srq;
 VAR_1->param.conn.qp_num = VAR_2->remote_qpn;
}
