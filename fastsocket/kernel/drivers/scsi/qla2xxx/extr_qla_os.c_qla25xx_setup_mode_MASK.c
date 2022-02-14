
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int req; struct qla_hw_data* hw; } ;
struct TYPE_2__ {int cpu_affinity_enabled; } ;
struct qla_hw_data {int fw_attributes; int max_rsp_queues; int max_req_queues; int * rsp_q_map; int * req_q_map; scalar_t__ mqenable; int * wq; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_7 ;
 int FUNC_5 (struct qla_hw_data*,int ,int ,int ,int,int ) ;
 int FUNC_6 (struct qla_hw_data*,int ,int ,int ,int) ;
 int FUNC_7 (struct scsi_qla_host*) ;

__attribute__((used)) static int FUNC_8(struct scsi_qla_host *VAR_8)
{
 uint16_t VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;
 struct qla_hw_data *VAR_13 = VAR_8->hw;

 if (!(VAR_13->fw_attributes & VAR_1)) {
  FUNC_4(VAR_7, VAR_8, 0x00d8,
      "Firmware is not multi-queue capable.\n");
  goto fail;
 }
 if (VAR_4) {

  VAR_9 |= VAR_2;
  VAR_11 = FUNC_5(VAR_13, VAR_9, 0, 0, -1,
   VAR_3);
  if (!VAR_11) {
   FUNC_4(VAR_7, VAR_8, 0x00e0,
       "Failed to create request queue.\n");
   goto fail;
  }
  VAR_13->wq = FUNC_0("qla2xxx_wq");
  VAR_8->req = VAR_13->req_q_map[VAR_11];
  VAR_9 |= VAR_0;
  for (VAR_10 = 1; VAR_10 < VAR_13->max_rsp_queues; VAR_10++) {
   VAR_12 = FUNC_6(VAR_13, VAR_9, 0, 0, VAR_11);
   if (!VAR_12) {
    FUNC_4(VAR_7, VAR_8, 0x00e8,
        "Failed to create response queue.\n");
    goto fail2;
   }
  }
  VAR_13->flags.cpu_affinity_enabled = 1;
  FUNC_3(VAR_6, VAR_8, 0xc007,
      "CPU affinity mode enalbed, "
      "no. of response queues:%d no. of request queues:%d.\n",
      VAR_13->max_rsp_queues, VAR_13->max_req_queues);
  FUNC_3(VAR_5, VAR_8, 0x00e9,
      "CPU affinity mode enalbed, "
      "no. of response queues:%d no. of request queues:%d.\n",
      VAR_13->max_rsp_queues, VAR_13->max_req_queues);
 }
 return 0;
fail2:
 FUNC_7(VAR_8);
 FUNC_1(VAR_13->wq);
 VAR_13->wq = ((void*)0);
 VAR_8->req = VAR_13->req_q_map[0];
fail:
 VAR_13->mqenable = 0;
 FUNC_2(VAR_13->req_q_map);
 FUNC_2(VAR_13->rsp_q_map);
 VAR_13->max_req_queues = VAR_13->max_rsp_queues = 1;
 return 1;
}
