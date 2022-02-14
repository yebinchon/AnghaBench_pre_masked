
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int domain; int area; int al_pa; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct scsi_qla_host {scalar_t__ marker_needed; TYPE_2__ d_id; int self_login_loop_id; struct req_que* req; struct qla_hw_data* hw; } ;
struct rsp_que {scalar_t__ id; } ;
struct req_que {size_t current_outstanding_cmd; size_t num_outstanding_cmds; scalar_t__ cnt; scalar_t__ ring_index; scalar_t__ length; TYPE_3__** outstanding_cmds; int id; scalar_t__ ring_ptr; int req_q_out; } ;
struct qla_hw_data {int hardware_lock; struct rsp_que** rsp_q_map; } ;
struct cmd_bidir {scalar_t__ entry_status; int * port_id; int nport_handle; int handle; } ;
struct TYPE_8__ {size_t handle; } ;
typedef TYPE_3__ srb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*,size_t) ;
 int FUNC_5 (TYPE_3__*,struct scsi_qla_host*,struct cmd_bidir*,size_t) ;
 int FUNC_6 (struct scsi_qla_host*,struct req_que*,struct rsp_que*,int ,int ,int ) ;
 int FUNC_7 (struct scsi_qla_host*,struct req_que*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;

int
FUNC_11(srb_t *VAR_6, struct scsi_qla_host *VAR_7, uint32_t VAR_8)
{

 struct qla_hw_data *VAR_9 = VAR_7->hw;
 unsigned long VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14;
 uint32_t *VAR_15;
 struct cmd_bidir *VAR_16 = ((void*)0);
 struct rsp_que *VAR_17;
 struct req_que *VAR_18;
 int VAR_19 = VAR_2;

 VAR_19 = VAR_4;

 VAR_17 = VAR_9->rsp_q_map[0];
 VAR_18 = VAR_7->req;


 if (VAR_7->marker_needed != 0) {
  if (FUNC_6(VAR_7, VAR_18,
   VAR_17, 0, 0, VAR_3) != VAR_4)
   return VAR_1;
  VAR_7->marker_needed = 0;
 }


 FUNC_8(&VAR_9->hardware_lock, VAR_10);


 VAR_11 = VAR_18->current_outstanding_cmd;
 for (VAR_12 = 1; VAR_12 < VAR_18->num_outstanding_cmds; VAR_12++) {
  VAR_11++;
 if (VAR_11 == VAR_18->num_outstanding_cmds)
  VAR_11 = 1;
 if (!VAR_18->outstanding_cmds[VAR_11])
  break;
 }

 if (VAR_12 == VAR_18->num_outstanding_cmds) {
  VAR_19 = VAR_0;
  goto queuing_error;
 }


 VAR_13 = FUNC_4(VAR_7, VAR_8);


 if (VAR_18->cnt < VAR_13 + 2) {
  VAR_14 = FUNC_1(VAR_18->req_q_out);

  if (VAR_18->ring_index < VAR_14)
   VAR_18->cnt = VAR_14 - VAR_18->ring_index;
  else
   VAR_18->cnt = VAR_18->length -
    (VAR_18->ring_index - VAR_14);
 }
 if (VAR_18->cnt < VAR_13 + 2) {
  VAR_19 = VAR_0;
  goto queuing_error;
 }

 VAR_16 = (struct cmd_bidir *)VAR_18->ring_ptr;
 VAR_16->handle = FUNC_0(VAR_18->id, VAR_11);



 VAR_15 = (uint32_t *)VAR_16 + 2;
 FUNC_3(VAR_15, 0, VAR_5 - 8);


 VAR_16->nport_handle = FUNC_2(VAR_7->self_login_loop_id);
 VAR_16->port_id[0] = VAR_7->d_id.b.al_pa;
 VAR_16->port_id[1] = VAR_7->d_id.b.area;
 VAR_16->port_id[2] = VAR_7->d_id.b.domain;

 FUNC_5(VAR_6, VAR_7, VAR_16, VAR_8);
 VAR_16->entry_status = (uint8_t) VAR_17->id;

 VAR_18->current_outstanding_cmd = VAR_11;
 VAR_18->outstanding_cmds[VAR_11] = VAR_6;
 VAR_6->handle = VAR_11;
 VAR_18->cnt -= VAR_13;


 FUNC_10();
 FUNC_7(VAR_7, VAR_18);
queuing_error:
 FUNC_9(&VAR_9->hardware_lock, VAR_10);
 return VAR_19;
}
