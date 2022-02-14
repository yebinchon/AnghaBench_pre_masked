
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct task_status_struct {size_t residual; int buf_valid_size; void* stat; void* resp; void* open_rej_reason; scalar_t__ buf; } ;
struct set_dev_bits_fis {int dummy; } ;
struct sata_completion_resp {size_t* sata_resp; int param; int tag; int status; } ;
struct TYPE_4__ {int use_ncq; int dma_xfer; } ;
struct sas_task {int task_state_flags; int (* task_done ) (struct sas_task*) ;int task_state_lock; scalar_t__ uldd_task; TYPE_2__ ata_task; int data_dir; struct task_status_struct task_status; TYPE_1__* dev; int lldd_task; } ;
struct pm8001_hba_info {int lock; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int id; int running_req; } ;
struct pm8001_ccb_info {struct pm8001_device* device; struct sas_task* task; } ;
struct pio_setup_fis {int dummy; } ;
struct dev_to_host_fis {int dummy; } ;
struct ata_task_resp {int frame_len; int * ending_fis; } ;
struct TYPE_3__ {struct pm8001_device* lldd_dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
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
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,size_t*,int) ;
 int FUNC_5 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_6 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pm8001_hba_info*,size_t) ;
 int FUNC_9 (struct pm8001_hba_info*,struct pm8001_device*) ;
 int FUNC_10 (struct sas_task*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct sas_task*) ;
 int FUNC_16 (struct sas_task*) ;
 int FUNC_17 (struct sas_task*) ;
 int FUNC_18 (struct sas_task*) ;
 int FUNC_19 (struct sas_task*) ;
 int FUNC_20 (struct sas_task*) ;
 int FUNC_21 (struct sas_task*) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static void
FUNC_23(struct pm8001_hba_info *VAR_28, void *VAR_29)
{
 struct sas_task *VAR_30;
 struct pm8001_ccb_info *VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 struct sata_completion_resp *VAR_35;
 struct task_status_struct *VAR_36;
 struct ata_task_resp *VAR_37 ;
 u32 *VAR_38;
 struct pm8001_device *VAR_39;
 unsigned long VAR_40;

 VAR_35 = (struct sata_completion_resp *)(VAR_29 + 4);
 VAR_33 = FUNC_2(VAR_35->status);
 VAR_34 = FUNC_2(VAR_35->tag);

 if (!VAR_34) {
  FUNC_0(VAR_28,
   FUNC_7("tag null\n"));
  return;
 }
 VAR_31 = &VAR_28->ccb_info[VAR_34];
 VAR_32 = FUNC_2(VAR_35->param);
 if (VAR_31) {
  VAR_30 = VAR_31->task;
  VAR_39 = VAR_31->device;
 } else {
  FUNC_0(VAR_28,
   FUNC_7("ccb null\n"));
  return;
 }

 if (VAR_30) {
  if (VAR_30->dev && (VAR_30->dev->lldd_dev))
   VAR_39 = VAR_30->dev->lldd_dev;
 } else {
  FUNC_0(VAR_28,
   FUNC_7("task null\n"));
  return;
 }

 if ((VAR_39 && !(VAR_39->id & VAR_1))
  && FUNC_22(!VAR_30 || !VAR_30->lldd_task || !VAR_30->dev)) {
  FUNC_0(VAR_28,
   FUNC_7("task or dev null\n"));
  return;
 }

 VAR_36 = &VAR_30->task_status;
 if (!VAR_36) {
  FUNC_0(VAR_28,
   FUNC_7("ts null\n"));
  return;
 }

 switch (VAR_33) {
 case 138:
  FUNC_1(VAR_28, FUNC_7("IO_SUCCESS\n"));
  if (VAR_32 == 0) {
   VAR_36->resp = VAR_23;
   VAR_36->stat = VAR_3;

   if (VAR_39 &&
    (VAR_39->id & VAR_1)) {

    VAR_39->id |= VAR_0;

    VAR_39->id = VAR_39->id & 0x7FFFFFFF;
    FUNC_9(VAR_28, VAR_39);

    FUNC_8(VAR_28, VAR_34);
    FUNC_10(VAR_30);
    return;
   }
  } else {
   u8 VAR_41;
   VAR_36->resp = VAR_23;
   VAR_36->stat = VAR_19;
   VAR_36->residual = VAR_32;
   FUNC_1(VAR_28,
    FUNC_7("SAS_PROTO_RESPONSE len = %d\n",
    VAR_32));
   VAR_38 = &VAR_35->sata_resp[0];
   VAR_37 = (struct ata_task_resp *)VAR_36->buf;
   if (VAR_30->ata_task.dma_xfer == 0 &&
   VAR_30->data_dir == VAR_2) {
    VAR_41 = sizeof(struct pio_setup_fis);
    FUNC_1(VAR_28,
    FUNC_7("PIO read len = %d\n", VAR_41));
   } else if (VAR_30->ata_task.use_ncq) {
    VAR_41 = sizeof(struct set_dev_bits_fis);
    FUNC_1(VAR_28,
     FUNC_7("FPDMA len = %d\n", VAR_41));
   } else {
    VAR_41 = sizeof(struct dev_to_host_fis);
    FUNC_1(VAR_28,
    FUNC_7("other len = %d\n", VAR_41));
   }
   if (VAR_21 >= sizeof(*VAR_37)) {
    VAR_37->frame_len = VAR_41;
    FUNC_4(&VAR_37->ending_fis[0], VAR_38, VAR_41);
    VAR_36->buf_valid_size = sizeof(*VAR_37);
   } else
    FUNC_1(VAR_28,
     FUNC_7("response to large\n"));
  }
  if (VAR_39)
   VAR_39->running_req--;
  break;
 case 157:
  FUNC_1(VAR_28,
   FUNC_7("IO_ABORTED IOMB Tag\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_4;
  if (VAR_39)
   VAR_39->running_req--;
  break;

 case 137:

  FUNC_1(VAR_28,
   FUNC_7("IO_UNDERFLOW param = %d\n", VAR_32));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_5;
  VAR_36->residual = VAR_32;
  if (VAR_39)
   VAR_39->running_req--;
  break;
 case 153:
  FUNC_1(VAR_28,
   FUNC_7("IO_NO_DEVICE\n"));
  VAR_36->resp = VAR_27;
  VAR_36->stat = VAR_18;
  break;
 case 135:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_BREAK\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_7;
  break;
 case 132:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_15;
  break;
 case 143:
  FUNC_1(VAR_28, FUNC_7(
   "IO_OPEN_CNX_ERROR_PROTOCOL_NOT_SUPPORTED\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_13;
  break;
 case 140:
  FUNC_1(VAR_28,
   FUNC_7("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_16;
  break;
 case 151:
  FUNC_1(VAR_28,
   FUNC_7("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_14;
  break;
 case 148:
 case 129:
 case 145:
 case 147:
 case 146:
 case 144:
  FUNC_1(VAR_28,
   FUNC_7("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  if (!VAR_30->uldd_task) {
   FUNC_6(VAR_28,
    VAR_39,
    148);
   VAR_36->resp = VAR_27;
   VAR_36->stat = VAR_20;
   FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
   FUNC_3();
   FUNC_13(&VAR_28->lock);
   VAR_30->task_done(VAR_30);
   FUNC_11(&VAR_28->lock);
   return;
  }
  break;
 case 152:
  FUNC_1(VAR_28,
   FUNC_7("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_36->resp = VAR_27;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_11;
  if (!VAR_30->uldd_task) {
   FUNC_6(VAR_28,
    VAR_39,
    148);
   VAR_36->resp = VAR_27;
   VAR_36->stat = VAR_20;
   FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
   FUNC_3();
   FUNC_13(&VAR_28->lock);
   VAR_30->task_done(VAR_30);
   FUNC_11(&VAR_28->lock);
   return;
  }
  break;
 case 150:
  FUNC_1(VAR_28, FUNC_7(
   "IO_OPEN_CNX_ERROR_CONNECTION_RATE_NOT_SUPPORTED\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_12;
  break;
 case 142:
  FUNC_1(VAR_28, FUNC_7(
   "IO_OPEN_CNX_ERROR_STP_RESOURCES_BUSY\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  if (!VAR_30->uldd_task) {
   FUNC_6(VAR_28,
    VAR_39,
    142);
   VAR_36->resp = VAR_27;
   VAR_36->stat = VAR_20;
   FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
   FUNC_3();
   FUNC_13(&VAR_28->lock);
   VAR_30->task_done(VAR_30);
   FUNC_11(&VAR_28->lock);
   return;
  }
  break;
 case 141:
  FUNC_1(VAR_28,
   FUNC_7("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_17;
  break;
 case 133:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_NAK_RECEIVED\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_8;
  break;
 case 136:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_ACK_NAK_TIMEOUT\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_8;
  break;
 case 134:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_DMA\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_4;
  break;
 case 130:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_SATA_LINK_TIMEOUT\n"));
  VAR_36->resp = VAR_27;
  VAR_36->stat = VAR_6;
  break;
 case 131:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_ERROR_REJECTED_NCQ_MODE\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_5;
  break;
 case 128:
  FUNC_1(VAR_28,
   FUNC_7("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_10;
  break;
 case 139:
  FUNC_1(VAR_28,
   FUNC_7("IO_PORT_IN_RESET\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  break;
 case 154:
  FUNC_1(VAR_28,
   FUNC_7("IO_DS_NON_OPERATIONAL\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  if (!VAR_30->uldd_task) {
   FUNC_6(VAR_28, VAR_39,
     154);
   VAR_36->resp = VAR_27;
   VAR_36->stat = VAR_20;
   FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
   FUNC_3();
   FUNC_13(&VAR_28->lock);
   VAR_30->task_done(VAR_30);
   FUNC_11(&VAR_28->lock);
   return;
  }
  break;
 case 155:
  FUNC_1(VAR_28,
   FUNC_7("IO_DS_IN_RECOVERY\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  break;
 case 156:
  FUNC_1(VAR_28,
   FUNC_7("IO_DS_IN_ERROR\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  if (!VAR_30->uldd_task) {
   FUNC_6(VAR_28, VAR_39,
     156);
   VAR_36->resp = VAR_27;
   VAR_36->stat = VAR_20;
   FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
   FUNC_3();
   FUNC_13(&VAR_28->lock);
   VAR_30->task_done(VAR_30);
   FUNC_11(&VAR_28->lock);
   return;
  }
  break;
 case 149:
  FUNC_1(VAR_28,
   FUNC_7("IO_OPEN_CNX_ERROR_HW_RESOURCE_BUSY\n"));
  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_9;
  VAR_36->open_rej_reason = VAR_15;
 default:
  FUNC_1(VAR_28,
   FUNC_7("Unknown status 0x%x\n", VAR_33));

  VAR_36->resp = VAR_23;
  VAR_36->stat = VAR_6;
  break;
 }
 FUNC_12(&VAR_30->task_state_lock, VAR_40);
 VAR_30->task_state_flags &= ~VAR_26;
 VAR_30->task_state_flags &= ~VAR_22;
 VAR_30->task_state_flags |= VAR_25;
 if (FUNC_22((VAR_30->task_state_flags & VAR_24))) {
  FUNC_14(&VAR_30->task_state_lock, VAR_40);
  FUNC_0(VAR_28,
   FUNC_7("task 0x%p done with io_status 0x%x"
   " resp 0x%x stat 0x%x but aborted by upper layer!\n",
   VAR_30, VAR_33, VAR_36->resp, VAR_36->stat));
  FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
 } else if (VAR_30->uldd_task) {
  FUNC_14(&VAR_30->task_state_lock, VAR_40);
  FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
  FUNC_3();
  FUNC_13(&VAR_28->lock);
  VAR_30->task_done(VAR_30);
  FUNC_11(&VAR_28->lock);
 } else if (!VAR_30->uldd_task) {
  FUNC_14(&VAR_30->task_state_lock, VAR_40);
  FUNC_5(VAR_28, VAR_30, VAR_31, VAR_34);
  FUNC_3();
  FUNC_13(&VAR_28->lock);
  VAR_30->task_done(VAR_30);
  FUNC_11(&VAR_28->lock);
 }
}
