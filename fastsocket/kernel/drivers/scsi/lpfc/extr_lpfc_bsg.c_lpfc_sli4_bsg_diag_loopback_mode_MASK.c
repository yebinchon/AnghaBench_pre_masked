
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {scalar_t__ link_state; int hbalock; int link_flag; TYPE_4__* pport; } ;
struct fc_bsg_request {int dummy; } ;
struct fc_bsg_job {int request_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_5__* reply; TYPE_3__* request; } ;
struct diag_mode_set {int type; int timeout; } ;
struct TYPE_10__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_9__ {int fc_myDID; } ;
struct TYPE_6__ {scalar_t__ vendor_cmd; } ;
struct TYPE_7__ {TYPE_1__ h_vendor; } ;
struct TYPE_8__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,int) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_12(struct lpfc_hba *VAR_13, struct fc_bsg_job *VAR_14)
{
 struct diag_mode_set *VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18, VAR_19 = 0;


 VAR_14->reply->reply_payload_rcv_len = 0;

 if (VAR_14->request_len < sizeof(struct fc_bsg_request) +
     sizeof(struct diag_mode_set)) {
  FUNC_3(VAR_13, VAR_7, VAR_8,
    "3011 Received DIAG MODE request size:%d "
    "below the minimum size:%d\n",
    VAR_14->request_len,
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct diag_mode_set)));
  VAR_19 = -VAR_0;
  goto job_error;
 }

 VAR_19 = FUNC_0(VAR_13);
 if (VAR_19)
  goto job_error;


 FUNC_9(&VAR_13->hbalock);
 VAR_13->link_flag |= VAR_12;
 FUNC_10(&VAR_13->hbalock);


 VAR_19 = FUNC_4(VAR_13);
 if (VAR_19)
  goto job_error;


 FUNC_3(VAR_13, VAR_6, VAR_8,
   "3129 Bring link to diagnostic state.\n");
 VAR_15 = (struct diag_mode_set *)
  VAR_14->request->rqst_data.h_vendor.vendor_cmd;
 VAR_16 = VAR_15->type;
 VAR_17 = VAR_15->timeout * 100;

 VAR_19 = FUNC_6(VAR_13, 1);
 if (VAR_19) {
  FUNC_3(VAR_13, VAR_7, VAR_8,
    "3130 Failed to bring link to diagnostic "
    "state, rc:x%x\n", VAR_19);
  goto loopback_mode_exit;
 }


 VAR_18 = 0;
 while (VAR_13->link_state != VAR_10) {
  if (VAR_18++ > VAR_17) {
   VAR_19 = -VAR_1;
   FUNC_3(VAR_13, VAR_6, VAR_8,
     "3131 Timeout waiting for link to "
     "diagnostic mode, timeout:%d ms\n",
     VAR_17 * 10);
   goto loopback_mode_exit;
  }
  FUNC_8(10);
 }


 FUNC_3(VAR_13, VAR_6, VAR_8,
   "3132 Set up loopback mode:x%x\n", VAR_16);

 if (VAR_16 == VAR_4)
  VAR_19 = FUNC_5(VAR_13);
 else if (VAR_16 == VAR_2)
  VAR_19 = FUNC_2(VAR_13,
          VAR_3);
 else {
  VAR_19 = -VAR_0;
  FUNC_3(VAR_13, VAR_5, VAR_8,
    "3141 Loopback mode:x%x not supported\n",
    VAR_16);
  goto loopback_mode_exit;
 }

 if (!VAR_19) {

  FUNC_8(100);
  VAR_18 = 0;
  while (VAR_13->link_state < VAR_11) {
   if (VAR_18++ > VAR_17) {
    VAR_19 = -VAR_1;
    FUNC_3(VAR_13, VAR_6, VAR_8,
     "3137 Timeout waiting for link up "
     "in loopback mode, timeout:%d ms\n",
     VAR_17 * 10);
    break;
   }
   FUNC_8(10);
  }
 }


 if (!VAR_19) {

  VAR_13->pport->fc_myDID = 1;
  VAR_19 = FUNC_7(VAR_13);
 } else
  goto loopback_mode_exit;

 if (!VAR_19) {

  FUNC_8(100);
  VAR_18 = 0;
  while (VAR_13->link_state != VAR_9) {
   if (VAR_18++ > VAR_17) {
    VAR_19 = -VAR_1;
    FUNC_3(VAR_13, VAR_6, VAR_8,
     "3133 Timeout waiting for port "
     "loopback mode ready, timeout:%d ms\n",
     VAR_17 * 10);
    break;
   }
   FUNC_8(10);
  }
 }

loopback_mode_exit:

 if (VAR_19) {
  FUNC_9(&VAR_13->hbalock);
  VAR_13->link_flag &= ~VAR_12;
  FUNC_10(&VAR_13->hbalock);
 }
 FUNC_1(VAR_13);

job_error:

 VAR_14->reply->result = VAR_19;

 if (VAR_19 == 0)
  VAR_14->job_done(VAR_14);
 return VAR_19;
}
