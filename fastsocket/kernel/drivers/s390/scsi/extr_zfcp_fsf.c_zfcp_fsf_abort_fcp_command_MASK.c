
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct zfcp_unit {TYPE_5__* port; int handle; int status; } ;
struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {TYPE_8__* qtcb; int handler; struct zfcp_unit* data; int queue_req; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct TYPE_14__ {scalar_t__ req_handle; } ;
struct TYPE_15__ {TYPE_6__ support; } ;
struct TYPE_12__ {int port_handle; int lun_handle; } ;
struct TYPE_16__ {TYPE_7__ bottom; TYPE_4__ header; } ;
struct TYPE_13__ {int handle; TYPE_1__* adapter; } ;
struct TYPE_10__ {int scsi_abort; } ;
struct TYPE_11__ {TYPE_2__ pool; } ;
struct TYPE_9__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_7 (struct zfcp_qdio*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*,int ) ;
 struct qdio_buffer_element* FUNC_10 (struct zfcp_qdio*,int *) ;

struct zfcp_fsf_req *FUNC_11(unsigned long VAR_6,
      struct zfcp_unit *VAR_7)
{
 struct qdio_buffer_element *VAR_8;
 struct zfcp_fsf_req *VAR_9 = ((void*)0);
 struct zfcp_qdio *VAR_10 = VAR_7->port->adapter->qdio;

 FUNC_2(&VAR_10->req_q_lock);
 if (FUNC_7(VAR_10))
  goto out;
 VAR_9 = FUNC_5(VAR_10, VAR_0,
      VAR_10->adapter->pool.scsi_abort);
 if (FUNC_0(VAR_9)) {
  VAR_9 = ((void*)0);
  goto out;
 }

 if (FUNC_4(!(FUNC_1(&VAR_7->status) &
         VAR_4)))
  goto out_error_free;

 VAR_8 = FUNC_10(VAR_10, &VAR_9->queue_req);
 VAR_8[0].sflags |= VAR_2;
 VAR_8[1].eflags |= VAR_1;

 VAR_9->data = VAR_7;
 VAR_9->handler = VAR_5;
 VAR_9->qtcb->header.lun_handle = VAR_7->handle;
 VAR_9->qtcb->header.port_handle = VAR_7->port->handle;
 VAR_9->qtcb->bottom.support.req_handle = (u64) VAR_6;

 FUNC_9(VAR_9, VAR_3);
 if (!FUNC_8(VAR_9))
  goto out;

out_error_free:
 FUNC_6(VAR_9);
 VAR_9 = ((void*)0);
out:
 FUNC_3(&VAR_10->req_q_lock);
 return VAR_9;
}
