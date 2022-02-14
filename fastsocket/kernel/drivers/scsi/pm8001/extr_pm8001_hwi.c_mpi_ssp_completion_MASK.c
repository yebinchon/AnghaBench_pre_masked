
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct task_status_struct {size_t residual; void* stat; void* resp; void* open_rej_reason; } ;
struct ssp_response_iu {int status; } ;
struct ssp_completion_resp {struct ssp_response_iu ssp_resp_iu; int param; int tag; int status; } ;
struct sas_task {int task_state_flags; int (* task_done ) (struct sas_task*) ;int task_state_lock; int uldd_task; struct task_status_struct task_status; int dev; int lldd_task; } ;
struct pm8001_hba_info {int dev; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int running_req; } ;
struct pm8001_ccb_info {struct sas_task* task; struct pm8001_device* device; scalar_t__ open_retry; } ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_5 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,struct sas_task*,struct ssp_response_iu*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct sas_task*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct pm8001_hba_info *VAR_19 , void *VAR_20)
{
 struct sas_task *VAR_21;
 struct pm8001_ccb_info *VAR_22;
 unsigned long VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 struct ssp_completion_resp *VAR_27;
 struct task_status_struct *VAR_28;
 struct ssp_response_iu *VAR_29;
 struct pm8001_device *VAR_30;
 VAR_27 = (struct ssp_completion_resp *)(VAR_20 + 4);
 VAR_24 = FUNC_2(VAR_27->status);
 VAR_26 = FUNC_2(VAR_27->tag);
 VAR_22 = &VAR_19->ccb_info[VAR_26];
 if ((VAR_24 == 151) && VAR_22->open_retry) {

  VAR_22->open_retry = 0;
  return;
 }
 VAR_30 = VAR_22->device;
 VAR_25 = FUNC_2(VAR_27->param);

 VAR_21 = VAR_22->task;

 if (VAR_24 && VAR_24 != 135)
  FUNC_0(VAR_19,
   FUNC_6("sas IO status 0x%x\n", VAR_24));
 if (FUNC_11(!VAR_21 || !VAR_21->lldd_task || !VAR_21->dev))
  return;
 VAR_28 = &VAR_21->task_status;
 switch (VAR_24) {
 case 137:
  FUNC_1(VAR_19, FUNC_6("IO_SUCCESS"
   ",param = %d\n", VAR_25));
  if (VAR_25 == 0) {
   VAR_28->resp = VAR_14;
   VAR_28->stat = VAR_0;
  } else {
   VAR_28->resp = VAR_14;
   VAR_28->stat = VAR_12;
   VAR_28->residual = VAR_25;
   VAR_29 = &VAR_27->ssp_resp_iu;
   FUNC_7(VAR_19->dev, VAR_21, VAR_29);
  }
  if (VAR_30)
   VAR_30->running_req--;
  break;
 case 151:
  FUNC_1(VAR_19,
   FUNC_6("IO_ABORTED IOMB Tag\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_1;
  break;
 case 135:

  FUNC_1(VAR_19, FUNC_6("IO_UNDERFLOW"
   ",param = %d\n", VAR_25));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_2;
  VAR_28->residual = VAR_25;
  if (VAR_30)
   VAR_30->running_req--;
  break;
 case 148:
  FUNC_1(VAR_19,
   FUNC_6("IO_NO_DEVICE\n"));
  VAR_28->resp = VAR_18;
  VAR_28->stat = VAR_11;
  break;
 case 133:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_BREAK\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;

  VAR_28->open_rej_reason = VAR_8;
  break;
 case 129:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_8;
  break;
 case 142:
  FUNC_1(VAR_19,
  FUNC_6("IO_OPEN_CNX_ERROR_PROTOCOL_NOT_SUPPORTED\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_7;
  break;
 case 140:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_9;
  break;
 case 146:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_8;
  break;
 case 143:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_9;
  if (!VAR_21->uldd_task)
   FUNC_5(VAR_19,
    VAR_30,
    143);
  break;
 case 147:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_5;
  break;
 case 145:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_CONNECTION_RATE_"
   "NOT_SUPPORTED\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_6;
  break;
 case 141:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_28->resp = VAR_18;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_10;
  break;
 case 131:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_NAK_RECEIVED\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_8;
  break;
 case 134:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_ACK_NAK_TIMEOUT\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_3;
  break;
 case 132:
  FUNC_1(VAR_19,
  FUNC_6("IO_XFER_ERROR_DMA\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 case 128:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_8;
  break;
 case 130:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_OFFSET_MISMATCH\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 case 139:
  FUNC_1(VAR_19,
   FUNC_6("IO_PORT_IN_RESET\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 case 149:
  FUNC_1(VAR_19,
   FUNC_6("IO_DS_NON_OPERATIONAL\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  if (!VAR_21->uldd_task)
   FUNC_5(VAR_19,
    VAR_30,
    149);
  break;
 case 150:
  FUNC_1(VAR_19,
   FUNC_6("IO_DS_IN_RECOVERY\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 case 136:
  FUNC_1(VAR_19,
   FUNC_6("IO_TM_TAG_NOT_FOUND\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 case 138:
  FUNC_1(VAR_19,
   FUNC_6("IO_SSP_EXT_IU_ZERO_LEN_ERROR\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 case 144:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_HW_RESOURCE_BUSY\n"));
  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  VAR_28->open_rej_reason = VAR_8;
  break;
 default:
  FUNC_1(VAR_19,
   FUNC_6("Unknown status 0x%x\n", VAR_24));

  VAR_28->resp = VAR_14;
  VAR_28->stat = VAR_4;
  break;
 }
 FUNC_1(VAR_19,
  FUNC_6("scsi_status = %x\n ",
  VAR_27->ssp_resp_iu.status));
 FUNC_8(&VAR_21->task_state_lock, VAR_23);
 VAR_21->task_state_flags &= ~VAR_17;
 VAR_21->task_state_flags &= ~VAR_13;
 VAR_21->task_state_flags |= VAR_16;
 if (FUNC_11((VAR_21->task_state_flags & VAR_15))) {
  FUNC_9(&VAR_21->task_state_lock, VAR_23);
  FUNC_0(VAR_19, FUNC_6("task 0x%p done with"
   " io_status 0x%x resp 0x%x "
   "stat 0x%x but aborted by upper layer!\n",
   VAR_21, VAR_24, VAR_28->resp, VAR_28->stat));
  FUNC_4(VAR_19, VAR_21, VAR_22, VAR_26);
 } else {
  FUNC_9(&VAR_21->task_state_lock, VAR_23);
  FUNC_4(VAR_19, VAR_21, VAR_22, VAR_26);
  FUNC_3();
  VAR_21->task_done(VAR_21);
 }
}
