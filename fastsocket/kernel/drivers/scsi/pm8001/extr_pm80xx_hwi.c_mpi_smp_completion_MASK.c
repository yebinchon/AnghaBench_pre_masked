
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct task_status_struct {void* stat; void* resp; void* open_rej_reason; int residual; } ;
struct smp_completion_resp {char* _r_a; int param; int tag; int status; } ;
struct TYPE_2__ {int smp_resp; } ;
struct sas_task {int task_state_flags; int (* task_done ) (struct sas_task*) ;int task_state_lock; TYPE_1__ smp_task; int dev; int lldd_task; struct task_status_struct task_status; } ;
struct pm8001_hba_info {int smp_exp_mode; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int running_req; } ;
struct pm8001_ccb_info {struct pm8001_device* device; struct sas_task* task; } ;
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
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_7 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct sas_task*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct pm8001_hba_info *VAR_20, void *VAR_21)
{
 u32 VAR_22, VAR_23;
 struct sas_task *VAR_24;
 struct pm8001_ccb_info *VAR_25;
 unsigned long VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 struct smp_completion_resp *VAR_29;
 struct task_status_struct *VAR_30;
 struct pm8001_device *VAR_31;
 char *VAR_32 = ((void*)0);

 VAR_29 = (struct smp_completion_resp *)(VAR_21 + 4);
 VAR_27 = FUNC_3(VAR_29->status);
 VAR_28 = FUNC_3(VAR_29->tag);

 VAR_25 = &VAR_20->ccb_info[VAR_28];
 VAR_22 = FUNC_3(VAR_29->param);
 VAR_24 = VAR_25->task;
 VAR_30 = &VAR_24->task_status;
 VAR_31 = VAR_25->device;
 if (VAR_27)
  FUNC_0(VAR_20,
   FUNC_8("smp IO status 0x%x\n", VAR_27));
 if (FUNC_13(!VAR_24 || !VAR_24->lldd_task || !VAR_24->dev))
  return;

 switch (VAR_27) {

 case 133:
  FUNC_1(VAR_20, FUNC_8("IO_SUCCESS\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_1;
  if (VAR_31)
   VAR_31->running_req--;
  if (VAR_20->smp_exp_mode == VAR_19) {
   FUNC_1(VAR_20,
    FUNC_8("DIRECT RESPONSE Length:%d\n",
      VAR_22));
   VAR_32 = (char *)(FUNC_5(FUNC_2
      ((u64)FUNC_9
      (&VAR_24->smp_task.smp_resp))));
   for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++) {
    *(VAR_32+VAR_23) = VAR_29->_r_a[VAR_23];
    FUNC_1(VAR_20, FUNC_8(
     "SMP Byte%d DMA data 0x%x psmp 0x%x\n",
     VAR_23, *(VAR_32+VAR_23),
     VAR_29->_r_a[VAR_23]));
   }
  }
  break;
 case 153:
  FUNC_1(VAR_20,
   FUNC_8("IO_ABORTED IOMB\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_2;
  if (VAR_31)
   VAR_31->running_req--;
  break;
 case 135:
  FUNC_1(VAR_20, FUNC_8("IO_UNDERFLOW\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_3;
  VAR_30->residual = 0;
  if (VAR_31)
   VAR_31->running_req--;
  break;
 case 148:
  FUNC_1(VAR_20, FUNC_8("IO_NO_DEVICE\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_12;
  break;
 case 150:
  FUNC_1(VAR_20,
   FUNC_8("IO_ERROR_HW_TIMEOUT\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_0;
  break;
 case 132:
  FUNC_1(VAR_20,
   FUNC_8("IO_XFER_ERROR_BREAK\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_0;
  break;
 case 131:
  FUNC_1(VAR_20,
   FUNC_8("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_0;
  break;
 case 138:
  FUNC_1(VAR_20,
  FUNC_8("IO_OPEN_CNX_ERROR_PROTOCOL_NOT_SUPPORTED\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_10;
  break;
 case 136:
  FUNC_1(VAR_20,
   FUNC_8("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_10;
  break;
 case 146:
  FUNC_1(VAR_20,
   FUNC_8("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_8;
  break;
 case 143:
 case 129:
 case 140:
 case 142:
 case 141:
 case 139:
  FUNC_1(VAR_20,
   FUNC_8("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_10;
  FUNC_7(VAR_20,
    VAR_31,
    143);
  break;
 case 147:
  FUNC_1(VAR_20,
   FUNC_8("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_6;
  break;
 case 145:
  FUNC_1(VAR_20, FUNC_8( "IO_OPEN_CNX_ERROR_CONNECTION_RATE_NOT_SUPPORTED\n"));

  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_7;
  break;
 case 137:
  FUNC_1(VAR_20,
   FUNC_8("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_11;
  break;
 case 130:
  FUNC_1(VAR_20,
   FUNC_8("IO_XFER_ERROR_RX_FRAME\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_4;
  break;
 case 128:
  FUNC_1(VAR_20,
   FUNC_8("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_9;
  break;
 case 149:
  FUNC_1(VAR_20,
   FUNC_8("IO_ERROR_INTERNAL_SMP_RESOURCE\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_13;
  break;
 case 134:
  FUNC_1(VAR_20,
   FUNC_8("IO_PORT_IN_RESET\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_9;
  break;
 case 151:
  FUNC_1(VAR_20,
   FUNC_8("IO_DS_NON_OPERATIONAL\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_4;
  break;
 case 152:
  FUNC_1(VAR_20,
   FUNC_8("IO_DS_IN_RECOVERY\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_9;
  break;
 case 144:
  FUNC_1(VAR_20,
   FUNC_8("IO_OPEN_CNX_ERROR_HW_RESOURCE_BUSY\n"));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_5;
  VAR_30->open_rej_reason = VAR_9;
  break;
 default:
  FUNC_1(VAR_20,
   FUNC_8("Unknown status 0x%x\n", VAR_27));
  VAR_30->resp = VAR_15;
  VAR_30->stat = VAR_4;

  break;
 }
 FUNC_10(&VAR_24->task_state_lock, VAR_26);
 VAR_24->task_state_flags &= ~VAR_18;
 VAR_24->task_state_flags &= ~VAR_14;
 VAR_24->task_state_flags |= VAR_17;
 if (FUNC_13((VAR_24->task_state_flags & VAR_16))) {
  FUNC_11(&VAR_24->task_state_lock, VAR_26);
  FUNC_0(VAR_20, FUNC_8(
   "task 0x%p done with io_status 0x%x resp 0x%x"
   "stat 0x%x but aborted by upper layer!\n",
   VAR_24, VAR_27, VAR_30->resp, VAR_30->stat));
  FUNC_6(VAR_20, VAR_24, VAR_25, VAR_28);
 } else {
  FUNC_11(&VAR_24->task_state_lock, VAR_26);
  FUNC_6(VAR_20, VAR_24, VAR_25, VAR_28);
  FUNC_4();
  VAR_24->task_done(VAR_24);
 }
}
