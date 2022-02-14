
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


struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {TYPE_5__* qtcb; struct zfcp_erp_action* erp_action; TYPE_6__* data; int handler; int queue_req; int status; } ;
struct zfcp_erp_action {struct zfcp_fsf_req* fsf_req; TYPE_6__* port; TYPE_1__* adapter; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct TYPE_12__ {int handle; } ;
struct TYPE_10__ {int port_handle; } ;
struct TYPE_11__ {TYPE_4__ header; } ;
struct TYPE_8__ {int erp_req; } ;
struct TYPE_9__ {TYPE_2__ pool; } ;
struct TYPE_7__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 struct zfcp_fsf_req* FUNC_4 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_6 (struct zfcp_qdio*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 struct qdio_buffer_element* FUNC_9 (struct zfcp_qdio*,int *) ;

int FUNC_10(struct zfcp_erp_action *VAR_6)
{
 struct qdio_buffer_element *VAR_7;
 struct zfcp_qdio *VAR_8 = VAR_6->adapter->qdio;
 struct zfcp_fsf_req *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_2(&VAR_8->req_q_lock);
 if (FUNC_6(VAR_8))
  goto out;

 VAR_9 = FUNC_4(VAR_8, VAR_1,
      VAR_8->adapter->pool.erp_req);

 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out;
 }

 VAR_9->status |= VAR_4;
 VAR_7 = FUNC_9(VAR_8, &VAR_9->queue_req);
 VAR_7[0].sflags |= VAR_3;
 VAR_7[1].eflags |= VAR_2;

 VAR_9->handler = VAR_5;
 VAR_9->data = VAR_6->port;
 VAR_9->erp_action = VAR_6;
 VAR_9->qtcb->header.port_handle = VAR_6->port->handle;
 VAR_6->fsf_req = VAR_9;

 FUNC_8(VAR_9);
 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10) {
  FUNC_5(VAR_9);
  VAR_6->fsf_req = ((void*)0);
 }
out:
 FUNC_3(&VAR_8->req_q_lock);
 return VAR_10;
}
