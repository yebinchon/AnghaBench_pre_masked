
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ib_cm_sidr_req_event_param {int port; struct ib_cm_id* listen_id; int pkey; } ;
struct ib_cm_id {int dummy; } ;
struct TYPE_6__ {struct ib_cm_sidr_req_event_param sidr_req_rcvd; } ;
struct TYPE_8__ {int * private_data; TYPE_1__ param; } ;
struct cm_work {TYPE_3__ cm_event; TYPE_2__* port; TYPE_5__* mad_recv_wc; } ;
struct cm_sidr_req_msg {int private_data; int pkey; } ;
struct TYPE_9__ {scalar_t__ mad; } ;
struct TYPE_10__ {TYPE_4__ recv_buf; } ;
struct TYPE_7__ {int port_num; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cm_work *VAR_0,
         struct ib_cm_id *VAR_1)
{
 struct cm_sidr_req_msg *VAR_2;
 struct ib_cm_sidr_req_event_param *VAR_3;

 VAR_2 = (struct cm_sidr_req_msg *)
    VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_3 = &VAR_0->cm_event.param.sidr_req_rcvd;
 VAR_3->pkey = FUNC_0(VAR_2->pkey);
 VAR_3->listen_id = VAR_1;
 VAR_3->port = VAR_0->port->port_num;
 VAR_0->cm_event.private_data = &VAR_2->private_data;
}
