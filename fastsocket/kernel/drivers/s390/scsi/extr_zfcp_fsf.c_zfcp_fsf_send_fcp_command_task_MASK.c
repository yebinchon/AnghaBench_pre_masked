
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


typedef int u8 ;
struct zfcp_unit {TYPE_4__* port; int handle; int status; } ;
struct TYPE_8__ {int count; } ;
struct zfcp_qdio {int req_q_lock; int req_q_full; TYPE_1__ req_q; } ;
struct zfcp_fsf_req {int queue_req; TYPE_7__* qtcb; int handler; struct scsi_cmnd* data; struct zfcp_unit* unit; int status; scalar_t__ req_id; } ;
struct TYPE_9__ {int scsi_req; } ;
struct zfcp_adapter {struct zfcp_qdio* qdio; TYPE_2__ pool; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; unsigned char* host_scribble; TYPE_5__* device; } ;
struct fsf_qtcb_bottom_io {int ref_tag_value; int prot_data_length; int fcp_cmnd; int data_direction; int data_block_length; int fcp_cmnd_length; int service_class; } ;
struct fcp_cmnd {int dummy; } ;
struct TYPE_13__ {struct fsf_qtcb_bottom_io io; } ;
struct TYPE_10__ {int port_handle; int lun_handle; } ;
struct TYPE_14__ {TYPE_6__ bottom; TYPE_3__ header; } ;
struct TYPE_12__ {int sector_size; } ;
struct TYPE_11__ {int handle; struct zfcp_adapter* adapter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct zfcp_adapter*) ;
 int FUNC_13 (struct fcp_cmnd*,struct scsi_cmnd*) ;
 struct zfcp_fsf_req* FUNC_14 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_15 (struct zfcp_fsf_req*) ;
 int FUNC_16 (struct zfcp_fsf_req*) ;
 int VAR_12 ;
 scalar_t__ FUNC_17 (struct scsi_cmnd*,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct zfcp_qdio*,int *,int ,int ,int ) ;
 int FUNC_20 (struct zfcp_qdio*,int *,scalar_t__) ;
 int FUNC_21 (struct zfcp_qdio*,int *) ;
 int FUNC_22 (struct zfcp_qdio*,int *) ;
 int FUNC_23 (struct zfcp_unit*) ;
 int FUNC_24 (struct zfcp_unit*) ;

int FUNC_25(struct zfcp_unit *VAR_13,
       struct scsi_cmnd *VAR_14)
{
 struct zfcp_fsf_req *VAR_15;
 struct fcp_cmnd *VAR_16;
 u8 VAR_17 = VAR_7;
 int VAR_18 = -VAR_2;
 struct zfcp_adapter *VAR_19 = VAR_13->port->adapter;
 struct zfcp_qdio *VAR_20 = VAR_19->qdio;
 struct fsf_qtcb_bottom_io *VAR_21;

 if (FUNC_11(!(FUNC_3(&VAR_13->status) &
         VAR_10)))
  return -VAR_1;

 FUNC_9(&VAR_20->req_q_lock);
 if (FUNC_3(&VAR_20->req_q.count) <= 0) {
  FUNC_2(&VAR_20->req_q_full);
  goto out;
 }

 if (VAR_14->sc_data_direction == VAR_0)
  VAR_17 = VAR_8;

 VAR_15 = FUNC_14(VAR_20, VAR_6,
      VAR_19->pool.scsi_req);

 if (FUNC_0(VAR_15)) {
  VAR_18 = FUNC_1(VAR_15);
  goto out;
 }

 VAR_14->host_scribble = (unsigned char *) VAR_15->req_id;

 VAR_21 = &VAR_15->qtcb->bottom.io;
 VAR_15->status |= VAR_11;
 FUNC_23(VAR_13);
 VAR_15->unit = VAR_13;
 VAR_15->data = VAR_14;
 VAR_15->handler = VAR_12;
 VAR_15->qtcb->header.lun_handle = VAR_13->handle;
 VAR_15->qtcb->header.port_handle = VAR_13->port->handle;
 VAR_21->service_class = VAR_4;
 VAR_21->fcp_cmnd_length = VAR_3;

 if (FUNC_5(VAR_14) != VAR_9) {
  VAR_21->data_block_length = VAR_14->device->sector_size;
  VAR_21->ref_tag_value = FUNC_4(VAR_14) & 0xFFFFFFFF;
 }

 if (FUNC_17(VAR_14, &VAR_21->data_direction))
  goto failed_scsi_cmnd;

 VAR_16 = (struct fcp_cmnd *) &VAR_15->qtcb->bottom.io.fcp_cmnd;
 FUNC_13(VAR_16, VAR_14);

 if (FUNC_6(VAR_14)) {
  FUNC_20(VAR_20, &VAR_15->queue_req,
           FUNC_6(VAR_14));
  VAR_18 = FUNC_19(VAR_20, &VAR_15->queue_req,
       VAR_17,
       FUNC_7(VAR_14),
       VAR_5);
  if (VAR_18)
   goto failed_scsi_cmnd;
  VAR_21->prot_data_length = FUNC_18(
      FUNC_7(VAR_14));
 }

 VAR_18 = FUNC_19(VAR_20, &VAR_15->queue_req, VAR_17,
      FUNC_8(VAR_14),
      VAR_5);
 if (FUNC_11(VAR_18))
  goto failed_scsi_cmnd;

 FUNC_21(VAR_19->qdio, &VAR_15->queue_req);
 if (FUNC_12(VAR_19))
  FUNC_22(VAR_20, &VAR_15->queue_req);

 VAR_18 = FUNC_16(VAR_15);
 if (FUNC_11(VAR_18))
  goto failed_scsi_cmnd;

 goto out;

failed_scsi_cmnd:
 FUNC_24(VAR_13);
 FUNC_15(VAR_15);
 VAR_14->host_scribble = ((void*)0);
out:
 FUNC_10(&VAR_20->req_q_lock);
 return VAR_18;
}
