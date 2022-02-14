
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_18__ {scalar_t__ process_response_queue; } ;
struct scsi_qla_host {scalar_t__ marker_needed; TYPE_3__ flags; int vp_idx; struct req_que* req; struct qla_hw_data* hw; } ;
struct scsi_cmnd {unsigned char* host_scribble; int cmd_len; int cmnd; TYPE_9__* device; int sc_data_direction; } ;
struct rsp_que {TYPE_4__* ring_ptr; scalar_t__ id; } ;
struct req_que {size_t current_outstanding_cmd; size_t num_outstanding_cmds; scalar_t__ cnt; scalar_t__ ring_index; scalar_t__ length; int req_q_in; scalar_t__ ring_ptr; scalar_t__ ring; int id; TYPE_10__** outstanding_cmds; int * req_q_out; } ;
struct qla_hw_data {int hardware_lock; TYPE_2__* iobase; TYPE_5__* pdev; } ;
struct cmd_type_7 {void** fcp_cdb; void* entry_status; void* entry_count; int byte_count; int task; int lun; int vp_index; int * port_id; void* nport_handle; void* dseg_count; int handle; } ;
struct TYPE_15__ {size_t handle; int flags; TYPE_8__* fcport; } ;
typedef TYPE_10__ srb_t ;
struct TYPE_24__ {int lun; } ;
struct TYPE_21__ {int domain; int area; int al_pa; } ;
struct TYPE_22__ {TYPE_6__ b; } ;
struct TYPE_23__ {scalar_t__ loop_id; struct scsi_qla_host* vha; TYPE_7__ d_id; } ;
struct TYPE_20__ {int dev; } ;
struct TYPE_19__ {scalar_t__ signature; } ;
struct TYPE_16__ {int hccr; } ;
struct TYPE_17__ {TYPE_1__ isp24; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_10__*) ;

 int FUNC_1 (int ,size_t) ;
 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *,int ,scalar_t__,int ) ;
 int FUNC_7 (void**,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (void**,int ,int ) ;
 int FUNC_10 (size_t*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_10__*,struct cmd_type_7*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct scsi_qla_host*,scalar_t__) ;
 int FUNC_13 (struct scsi_qla_host*,struct rsp_que*) ;
 int FUNC_14 (TYPE_10__*,struct rsp_que**) ;
 scalar_t__ FUNC_15 (struct scsi_qla_host*,struct req_que*,struct rsp_que*,int ,int ,int ) ;
 scalar_t__ FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_18 (struct scsi_cmnd*,char*) ;
 scalar_t__ FUNC_19 (struct scsi_cmnd*) ;
 int FUNC_20 (struct scsi_cmnd*) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 () ;

int
FUNC_25(srb_t *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned long VAR_11;
 uint32_t *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 struct cmd_type_7 *VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 struct req_que *VAR_19 = ((void*)0);
 struct rsp_que *VAR_20 = ((void*)0);
 struct scsi_cmnd *VAR_21 = FUNC_0(VAR_8);
 struct scsi_qla_host *VAR_22 = VAR_8->fcport->vha;
 struct qla_hw_data *VAR_23 = VAR_22->hw;
 char VAR_24[2];


 VAR_9 = 0;

 FUNC_14(VAR_8, &VAR_20);
 VAR_19 = VAR_22->req;


 VAR_18 = 0;


 if (VAR_22->marker_needed != 0) {
  if (FUNC_15(VAR_22, VAR_19, VAR_20, 0, 0, VAR_0) !=
      VAR_2)
   return VAR_1;
  VAR_22->marker_needed = 0;
 }


 FUNC_21(&VAR_23->hardware_lock, VAR_11);


 VAR_14 = VAR_19->current_outstanding_cmd;
 for (VAR_13 = 1; VAR_13 < VAR_19->num_outstanding_cmds; VAR_13++) {
  VAR_14++;
  if (VAR_14 == VAR_19->num_outstanding_cmds)
   VAR_14 = 1;
  if (!VAR_19->outstanding_cmds[VAR_14])
   break;
 }
 if (VAR_13 == VAR_19->num_outstanding_cmds)
  goto queuing_error;


 if (FUNC_19(VAR_21)) {
  VAR_10 = FUNC_6(&VAR_23->pdev->dev, FUNC_20(VAR_21),
      FUNC_19(VAR_21), VAR_21->sc_data_direction);
  if (FUNC_23(!VAR_10))
   goto queuing_error;
 } else
  VAR_10 = 0;

 VAR_18 = VAR_10;
 VAR_17 = FUNC_12(VAR_22, VAR_18);
 if (VAR_19->cnt < (VAR_17 + 2)) {
  VAR_16 = FUNC_2(VAR_19->req_q_out);

  if (VAR_19->ring_index < VAR_16)
   VAR_19->cnt = VAR_16 - VAR_19->ring_index;
  else
   VAR_19->cnt = VAR_19->length -
    (VAR_19->ring_index - VAR_16);
  if (VAR_19->cnt < (VAR_17 + 2))
   goto queuing_error;
 }


 VAR_19->current_outstanding_cmd = VAR_14;
 VAR_19->outstanding_cmds[VAR_14] = VAR_8;
 VAR_8->handle = VAR_14;
 VAR_21->host_scribble = (unsigned char *)(unsigned long)VAR_14;
 VAR_19->cnt -= VAR_17;

 VAR_15 = (struct cmd_type_7 *)VAR_19->ring_ptr;
 VAR_15->handle = FUNC_1(VAR_19->id, VAR_14);



 VAR_12 = (uint32_t *)VAR_15 + 2;
 FUNC_10(VAR_12, 0, VAR_3 - 8);
 VAR_15->dseg_count = FUNC_4(VAR_18);


 VAR_15->nport_handle = FUNC_4(VAR_8->fcport->loop_id);
 VAR_15->port_id[0] = VAR_8->fcport->d_id.b.al_pa;
 VAR_15->port_id[1] = VAR_8->fcport->d_id.b.area;
 VAR_15->port_id[2] = VAR_8->fcport->d_id.b.domain;
 VAR_15->vp_index = VAR_8->fcport->vha->vp_idx;

 FUNC_8(VAR_21->device->lun, &VAR_15->lun);
 FUNC_7((uint8_t *)&VAR_15->lun, sizeof(VAR_15->lun));


 if (FUNC_18(VAR_21, VAR_24)) {
  switch (VAR_24[0]) {
  case 129:
   VAR_15->task = VAR_6;
   break;
  case 128:
   VAR_15->task = VAR_7;
   break;
  }
 }


 FUNC_9(VAR_15->fcp_cdb, VAR_21->cmnd, VAR_21->cmd_len);
 FUNC_7(VAR_15->fcp_cdb, sizeof(VAR_15->fcp_cdb));

 VAR_15->byte_count = FUNC_5((uint32_t)FUNC_16(VAR_21));


 FUNC_11(VAR_8, VAR_15, VAR_18);


 VAR_15->entry_count = (uint8_t)VAR_17;

 VAR_15->entry_status = (uint8_t) VAR_20->id;
 FUNC_24();

 VAR_19->ring_index++;
 if (VAR_19->ring_index == VAR_19->length) {
  VAR_19->ring_index = 0;
  VAR_19->ring_ptr = VAR_19->ring;
 } else
  VAR_19->ring_ptr++;

 VAR_8->flags |= VAR_5;


 FUNC_3(VAR_19->req_q_in, VAR_19->ring_index);
 FUNC_2(&VAR_23->iobase->isp24.hccr);


 if (VAR_22->flags.process_response_queue &&
  VAR_20->ring_ptr->signature != VAR_4)
  FUNC_13(VAR_22, VAR_20);

 FUNC_22(&VAR_23->hardware_lock, VAR_11);
 return VAR_2;

queuing_error:
 if (VAR_18)
  FUNC_17(VAR_21);

 FUNC_22(&VAR_23->hardware_lock, VAR_11);

 return VAR_1;
}
