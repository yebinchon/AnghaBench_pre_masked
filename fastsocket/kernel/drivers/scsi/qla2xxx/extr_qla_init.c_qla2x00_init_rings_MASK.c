
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct rsp_que {int dummy; } ;
struct req_que {int num_outstanding_cmds; int current_outstanding_cmd; int length; int cnt; scalar_t__ ring_index; int ring; int ring_ptr; int ** outstanding_cmds; } ;
struct TYPE_13__ {scalar_t__ npiv_supported; } ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; scalar_t__ operating_mode; int init_cb_size; scalar_t__ fw_xcb_count; scalar_t__ max_npiv_vports; TYPE_2__ flags; TYPE_1__* isp_ops; int hardware_lock; struct rsp_que** rsp_q_map; struct req_que** req_q_map; scalar_t__ init_cb; } ;
struct TYPE_14__ {void* execution_throttle; } ;
struct mid_init_cb_24xx {TYPE_3__ init_cb; int options; void* count; } ;
struct TYPE_15__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_12__ {int (* update_fw_options ) (TYPE_4__*) ;int (* config_rings ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,TYPE_4__*,int,char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,TYPE_4__*,int,char*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (struct rsp_que*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (struct rsp_que*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;

int
FUNC_15(scsi_qla_host_t *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = 0;
 int VAR_8, VAR_9;
 struct qla_hw_data *VAR_10 = VAR_5->hw;
 struct req_que *VAR_11;
 struct rsp_que *VAR_12;
 struct mid_init_cb_24xx *VAR_13 =
     (struct mid_init_cb_24xx *) VAR_10->init_cb;

 FUNC_11(&VAR_10->hardware_lock, VAR_7);


 for (VAR_9 = 0; VAR_9 < VAR_10->max_req_queues; VAR_9++) {
  VAR_11 = VAR_10->req_q_map[VAR_9];
  if (!VAR_11)
   continue;
  for (VAR_8 = 1; VAR_8 < VAR_11->num_outstanding_cmds; VAR_8++)
   VAR_11->outstanding_cmds[VAR_8] = ((void*)0);

  VAR_11->current_outstanding_cmd = 1;


  VAR_11->ring_ptr = VAR_11->ring;
  VAR_11->ring_index = 0;
  VAR_11->cnt = VAR_11->length;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10->max_rsp_queues; VAR_9++) {
  VAR_12 = VAR_10->rsp_q_map[VAR_9];
  if (!VAR_12)
   continue;

  if (FUNC_2(VAR_10))
   FUNC_10(VAR_12);
  else
   FUNC_8(VAR_12);
 }

 VAR_10->isp_ops->config_rings(VAR_5);

 FUNC_12(&VAR_10->hardware_lock, VAR_7);

 FUNC_5(VAR_3, VAR_5, 0x00d1, "Issue init firmware.\n");

 if (FUNC_2(VAR_10)) {
  VAR_6 = FUNC_9(VAR_5, VAR_10->init_cb_size);
  goto next_check;
 }


 VAR_10->isp_ops->update_fw_options(VAR_5);

 if (VAR_10->flags.npiv_supported) {
  if (VAR_10->operating_mode == VAR_1 && !FUNC_0(VAR_10))
   VAR_10->max_npiv_vports = VAR_2 - 1;
  VAR_13->count = FUNC_4(VAR_10->max_npiv_vports);
 }

 if (FUNC_1(VAR_10)) {
  VAR_13->options = FUNC_3(VAR_0);
  VAR_13->init_cb.execution_throttle =
      FUNC_4(VAR_10->fw_xcb_count);
 }

 VAR_6 = FUNC_7(VAR_5, VAR_10->init_cb_size);
next_check:
 if (VAR_6) {
  FUNC_6(VAR_4, VAR_5, 0x00d2,
      "Init Firmware **** FAILED ****.\n");
 } else {
  FUNC_5(VAR_3, VAR_5, 0x00d3,
      "Init Firmware -- success.\n");
 }

 return (VAR_6);
}
