
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ib_cm_req_event_param {int srq; int rnr_retry_count; int retry_count; int remote_cm_response_timeout; int flow_control; int local_cm_response_timeout; int initiator_depth; int responder_resources; void* starting_psn; int qp_type; void* remote_qpn; void* remote_qkey; int remote_ca_guid; int * alternate_path; int * primary_path; int port; struct ib_cm_id* listen_id; } ;
struct ib_cm_id {int dummy; } ;
struct TYPE_9__ {struct ib_cm_req_event_param req_rcvd; } ;
struct TYPE_12__ {int * private_data; TYPE_3__ param; } ;
struct cm_work {TYPE_6__ cm_event; int * path; TYPE_2__* mad_recv_wc; } ;
struct cm_req_msg {int private_data; int local_qkey; int local_ca_guid; scalar_t__ alt_local_lid; } ;
struct TYPE_11__ {TYPE_4__* port; } ;
struct cm_id_private {TYPE_5__ av; } ;
struct TYPE_10__ {int port_num; } ;
struct TYPE_7__ {scalar_t__ mad; } ;
struct TYPE_8__ {TYPE_1__ recv_buf; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct cm_req_msg*) ;
 int FUNC_2 (struct cm_req_msg*) ;
 int FUNC_3 (struct cm_req_msg*) ;
 int FUNC_4 (struct cm_req_msg*) ;
 int FUNC_5 (struct cm_req_msg*) ;
 int FUNC_6 (struct cm_req_msg*) ;
 int FUNC_7 (struct cm_req_msg*) ;
 int FUNC_8 (struct cm_req_msg*) ;
 int FUNC_9 (struct cm_req_msg*) ;
 int FUNC_10 (struct cm_req_msg*) ;
 int FUNC_11 (struct cm_req_msg*) ;

__attribute__((used)) static void FUNC_12(struct cm_work *VAR_0,
    struct cm_id_private *VAR_1,
    struct ib_cm_id *VAR_2)
{
 struct cm_req_msg *VAR_3;
 struct ib_cm_req_event_param *VAR_4;

 VAR_3 = (struct cm_req_msg *)VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_4 = &VAR_0->cm_event.param.req_rcvd;
 VAR_4->listen_id = VAR_2;
 VAR_4->port = VAR_1->av.port->port_num;
 VAR_4->primary_path = &VAR_0->path[0];
 if (VAR_3->alt_local_lid)
  VAR_4->alternate_path = &VAR_0->path[1];
 else
  VAR_4->alternate_path = ((void*)0);
 VAR_4->remote_ca_guid = VAR_3->local_ca_guid;
 VAR_4->remote_qkey = FUNC_0(VAR_3->local_qkey);
 VAR_4->remote_qpn = FUNC_0(FUNC_3(VAR_3));
 VAR_4->qp_type = FUNC_5(VAR_3);
 VAR_4->starting_psn = FUNC_0(FUNC_11(VAR_3));
 VAR_4->responder_resources = FUNC_2(VAR_3);
 VAR_4->initiator_depth = FUNC_7(VAR_3);
 VAR_4->local_cm_response_timeout =
     FUNC_6(VAR_3);
 VAR_4->flow_control = FUNC_1(VAR_3);
 VAR_4->remote_cm_response_timeout =
     FUNC_4(VAR_3);
 VAR_4->retry_count = FUNC_8(VAR_3);
 VAR_4->rnr_retry_count = FUNC_9(VAR_3);
 VAR_4->srq = FUNC_10(VAR_3);
 VAR_0->cm_event.private_data = &VAR_3->private_data;
}
