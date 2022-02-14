
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_wka_port {int handle; TYPE_1__* adapter; } ;
struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {TYPE_5__* qtcb; struct zfcp_wka_port* data; int handler; int queue_req; int status; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct TYPE_9__ {int port_handle; } ;
struct TYPE_10__ {TYPE_4__ header; } ;
struct TYPE_7__ {int erp_req; } ;
struct TYPE_8__ {TYPE_2__ pool; } ;
struct TYPE_6__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_7 (struct zfcp_qdio*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*,int ) ;
 struct qdio_buffer_element* FUNC_10 (struct zfcp_qdio*,int *) ;

int FUNC_11(struct zfcp_wka_port *VAR_7)
{
 struct qdio_buffer_element *VAR_8;
 struct zfcp_qdio *VAR_9 = VAR_7->adapter->qdio;
 struct zfcp_fsf_req *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_2(&VAR_9->req_q_lock);
 if (FUNC_7(VAR_9))
  goto out;

 VAR_10 = FUNC_5(VAR_9, VAR_1,
      VAR_9->adapter->pool.erp_req);

 if (FUNC_4(FUNC_0(VAR_10))) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->status |= VAR_5;
 VAR_8 = FUNC_10(VAR_9, &VAR_10->queue_req);
 VAR_8[0].sflags |= VAR_3;
 VAR_8[1].eflags |= VAR_2;

 VAR_10->handler = VAR_6;
 VAR_10->data = VAR_7;
 VAR_10->qtcb->header.port_handle = VAR_7->handle;

 FUNC_9(VAR_10, VAR_4);
 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11)
  FUNC_6(VAR_10);
out:
 FUNC_3(&VAR_9->req_q_lock);
 return VAR_11;
}
