
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_bsg_request {int msgcode; } ;
struct iscsi_bsg_reply {unsigned short result; int reply_payload_rcv_len; } ;
struct TYPE_6__ {int sg_cnt; int sg_list; } ;
struct TYPE_5__ {int payload_len; } ;
struct bsg_job {TYPE_2__ reply_payload; TYPE_1__ request_payload; struct iscsi_bsg_reply* reply; struct iscsi_bsg_request* request; } ;
struct TYPE_7__ {int* mcc_numtag; int pdev; int * mcc_wait; } ;
struct beiscsi_hba {TYPE_3__ ctrl; } ;
struct be_dma_mem {int dma; int * va; int size; } ;
struct be_cmd_resp_hdr {int response_length; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_1 (struct bsg_job*,unsigned short,int ) ;
 int FUNC_2 (TYPE_3__*,unsigned int) ;
 struct beiscsi_hba* FUNC_3 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_4 (struct bsg_job*) ;
 unsigned int FUNC_5 (TYPE_3__*,struct beiscsi_hba*,struct bsg_job*,struct be_dma_mem*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *,int ) ;
 int FUNC_9 (int ,int ,int *,int ) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct bsg_job *VAR_7)
{
 struct Scsi_Host *VAR_8;
 struct beiscsi_hba *VAR_9;
 struct iscsi_bsg_request *VAR_10 = VAR_7->request;
 int VAR_11 = -VAR_3;
 unsigned int VAR_12;
 struct be_dma_mem VAR_13;
 struct be_cmd_resp_hdr *VAR_14;
 struct iscsi_bsg_reply *VAR_15 = VAR_7->reply;
 unsigned short VAR_16, VAR_17;

 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = FUNC_3(VAR_8);

 switch (VAR_10->msgcode) {
 case 128:
  VAR_13.va = FUNC_7(VAR_9->ctrl.pdev,
     VAR_7->request_payload.payload_len,
     &VAR_13.dma);
  if (VAR_13.va == ((void*)0)) {
   FUNC_0(VAR_9, VAR_6, VAR_1,
        "BM_%d : Failed to allocate memory for "
        "beiscsi_bsg_request\n");
   return -VAR_5;
  }
  VAR_12 = FUNC_5(&VAR_9->ctrl, VAR_9, VAR_7,
        &VAR_13);
  if (!VAR_12) {
   FUNC_0(VAR_9, VAR_6, VAR_1,
        "BM_%d : MBX Tag Allocation Failed\n");

   FUNC_8(VAR_9->ctrl.pdev, VAR_13.size,
         VAR_13.va, VAR_13.dma);
   return -VAR_2;
  }

  VAR_11 = FUNC_10(
     VAR_9->ctrl.mcc_wait[VAR_12],
     VAR_9->ctrl.mcc_numtag[VAR_12],
     FUNC_6(
     VAR_0));
  VAR_17 = (VAR_9->ctrl.mcc_numtag[VAR_12] & 0x0000FF00) >> 8;
  VAR_16 = VAR_9->ctrl.mcc_numtag[VAR_12] & 0x000000FF;
  FUNC_2(&VAR_9->ctrl, VAR_12);
  VAR_14 = (struct be_cmd_resp_hdr *)VAR_13.va;
  FUNC_9(VAR_7->reply_payload.sg_list,
        VAR_7->reply_payload.sg_cnt,
        VAR_13.va, (VAR_14->response_length
        + sizeof(*VAR_14)));
  VAR_15->reply_payload_rcv_len = VAR_14->response_length;
  VAR_15->result = VAR_16;
  FUNC_1(VAR_7, VAR_15->result,
        VAR_15->reply_payload_rcv_len);
  FUNC_8(VAR_9->ctrl.pdev, VAR_13.size,
        VAR_13.va, VAR_13.dma);
  if (VAR_16 || VAR_17) {
   FUNC_0(VAR_9, VAR_6, VAR_1,
        "BM_%d : MBX Cmd Failed"
        " status = %d extd_status = %d\n",
        VAR_16, VAR_17);

   return -VAR_4;
  } else {
   VAR_11 = 0;
  }
  break;

 default:
  FUNC_0(VAR_9, VAR_6, VAR_1,
    "BM_%d : Unsupported bsg command: 0x%x\n",
    VAR_10->msgcode);
  break;
 }

 return VAR_11;
}
