
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


typedef int u8 ;
struct zfcp_unit {int device; TYPE_5__* port; int handle; int status; } ;
struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {TYPE_8__* qtcb; int queue_req; int handler; struct zfcp_unit* data; int status; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct fcp_cmnd {int dummy; } ;
struct TYPE_14__ {int fcp_cmnd; int fcp_cmnd_length; int service_class; int data_direction; } ;
struct TYPE_15__ {TYPE_6__ io; } ;
struct TYPE_12__ {int port_handle; int lun_handle; } ;
struct TYPE_16__ {TYPE_7__ bottom; TYPE_4__ header; } ;
struct TYPE_13__ {int handle; TYPE_1__* adapter; } ;
struct TYPE_10__ {int scsi_req; } ;
struct TYPE_11__ {TYPE_2__ pool; } ;
struct TYPE_9__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct fcp_cmnd*,int ,int ) ;
 struct zfcp_fsf_req* FUNC_6 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_8 (struct zfcp_qdio*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int VAR_9 ;
 int FUNC_10 (struct zfcp_fsf_req*,int ) ;
 struct qdio_buffer_element* FUNC_11 (struct zfcp_qdio*,int *) ;

struct zfcp_fsf_req *FUNC_12(struct zfcp_unit *VAR_10, u8 VAR_11)
{
 struct qdio_buffer_element *VAR_12;
 struct zfcp_fsf_req *VAR_13 = ((void*)0);
 struct fcp_cmnd *VAR_14;
 struct zfcp_qdio *VAR_15 = VAR_10->port->adapter->qdio;

 if (FUNC_4(!(FUNC_1(&VAR_10->status) &
         VAR_7)))
  return ((void*)0);

 FUNC_2(&VAR_15->req_q_lock);
 if (FUNC_8(VAR_15))
  goto out;

 VAR_13 = FUNC_6(VAR_15, VAR_3,
      VAR_15->adapter->pool.scsi_req);

 if (FUNC_0(VAR_13)) {
  VAR_13 = ((void*)0);
  goto out;
 }

 VAR_13->status |= VAR_8;
 VAR_13->data = VAR_10;
 VAR_13->handler = VAR_9;
 VAR_13->qtcb->header.lun_handle = VAR_10->handle;
 VAR_13->qtcb->header.port_handle = VAR_10->port->handle;
 VAR_13->qtcb->bottom.io.data_direction = VAR_2;
 VAR_13->qtcb->bottom.io.service_class = VAR_1;
 VAR_13->qtcb->bottom.io.fcp_cmnd_length = VAR_0;

 VAR_12 = FUNC_11(VAR_15, &VAR_13->queue_req);
 VAR_12[0].sflags |= VAR_5;
 VAR_12[1].eflags |= VAR_4;

 VAR_14 = (struct fcp_cmnd *) &VAR_13->qtcb->bottom.io.fcp_cmnd;
 FUNC_5(VAR_14, VAR_10->device, VAR_11);

 FUNC_10(VAR_13, VAR_6);
 if (!FUNC_9(VAR_13))
  goto out;

 FUNC_7(VAR_13);
 VAR_13 = ((void*)0);
out:
 FUNC_3(&VAR_15->req_q_lock);
 return VAR_13;
}
