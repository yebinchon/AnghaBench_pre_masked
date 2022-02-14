
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {TYPE_7__* qtcb; struct zfcp_erp_action* erp_action; TYPE_4__* data; int handler; int queue_req; int status; } ;
struct zfcp_erp_action {struct zfcp_fsf_req* fsf_req; TYPE_4__* unit; TYPE_3__* port; struct zfcp_adapter* adapter; } ;
struct TYPE_8__ {int erp_req; } ;
struct zfcp_adapter {int connection_features; TYPE_1__ pool; struct zfcp_qdio* qdio; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct TYPE_12__ {int option; int fcp_lun; } ;
struct TYPE_13__ {TYPE_5__ support; } ;
struct TYPE_9__ {int port_handle; } ;
struct TYPE_14__ {TYPE_6__ bottom; TYPE_2__ header; } ;
struct TYPE_11__ {int fcp_lun; } ;
struct TYPE_10__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 struct zfcp_fsf_req* FUNC_4 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_6 (struct zfcp_qdio*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 struct qdio_buffer_element* FUNC_9 (struct zfcp_qdio*,int *) ;

int FUNC_10(struct zfcp_erp_action *VAR_8)
{
 struct qdio_buffer_element *VAR_9;
 struct zfcp_adapter *VAR_10 = VAR_8->adapter;
 struct zfcp_qdio *VAR_11 = VAR_10->qdio;
 struct zfcp_fsf_req *VAR_12;
 int VAR_13 = -VAR_0;

 FUNC_2(&VAR_11->req_q_lock);
 if (FUNC_6(VAR_11))
  goto out;

 VAR_12 = FUNC_4(VAR_11, VAR_3,
      VAR_10->pool.erp_req);

 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_1(VAR_12);
  goto out;
 }

 VAR_12->status |= VAR_6;
 VAR_9 = FUNC_9(VAR_11, &VAR_12->queue_req);
 VAR_9[0].sflags |= VAR_5;
 VAR_9[1].eflags |= VAR_4;

 VAR_12->qtcb->header.port_handle = VAR_8->port->handle;
 VAR_12->qtcb->bottom.support.fcp_lun = VAR_8->unit->fcp_lun;
 VAR_12->handler = VAR_7;
 VAR_12->data = VAR_8->unit;
 VAR_12->erp_action = VAR_8;
 VAR_8->fsf_req = VAR_12;

 if (!(VAR_10->connection_features & VAR_1))
  VAR_12->qtcb->bottom.support.option = VAR_2;

 FUNC_8(VAR_12);
 VAR_13 = FUNC_7(VAR_12);
 if (VAR_13) {
  FUNC_5(VAR_12);
  VAR_8->fsf_req = ((void*)0);
 }
out:
 FUNC_3(&VAR_11->req_q_lock);
 return VAR_13;
}
