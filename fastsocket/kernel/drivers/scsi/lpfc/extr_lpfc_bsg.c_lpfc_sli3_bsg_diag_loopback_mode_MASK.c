
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_hba {scalar_t__ link_state; int mbox_mem_pool; int hbalock; int link_flag; } ;
struct fc_bsg_request {int dummy; } ;
struct fc_bsg_job {int request_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_8__* reply; TYPE_3__* request; } ;
struct diag_mode_set {scalar_t__ type; int timeout; } ;
struct TYPE_16__ {int link_flags; } ;
struct TYPE_17__ {TYPE_4__ varInitLnk; } ;
struct TYPE_18__ {scalar_t__ mbxStatus; void* mbxOwner; int mbxCommand; TYPE_5__ un; } ;
struct TYPE_19__ {TYPE_6__ mb; } ;
struct TYPE_21__ {TYPE_7__ u; } ;
struct TYPE_20__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_13__ {scalar_t__ vendor_cmd; } ;
struct TYPE_14__ {TYPE_1__ h_vendor; } ;
struct TYPE_15__ {TYPE_2__ rqst_data; } ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_9__*,int ) ;
 TYPE_9__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_9__*,int ) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_hba *VAR_19, struct fc_bsg_job *VAR_20)
{
 struct diag_mode_set *VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;
 LPFC_MBOXQ_t *VAR_24 = ((void*)0);
 int VAR_25 = VAR_16;
 int VAR_26 = 0;
 int VAR_27 = 0;


 VAR_20->reply->reply_payload_rcv_len = 0;

 if (VAR_20->request_len < sizeof(struct fc_bsg_request) +
     sizeof(struct diag_mode_set)) {
  FUNC_2(VAR_19, VAR_8, VAR_9,
    "2738 Received DIAG MODE request size:%d "
    "below the minimum size:%d\n",
    VAR_20->request_len,
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct diag_mode_set)));
  VAR_27 = -VAR_0;
  goto job_error;
 }

 VAR_27 = FUNC_0(VAR_19);
 if (VAR_27)
  goto job_error;


 VAR_21 = (struct diag_mode_set *)
  VAR_20->request->rqst_data.h_vendor.vendor_cmd;
 VAR_22 = VAR_21->type;
 VAR_23 = VAR_21->timeout * 100;

 VAR_24 = FUNC_4(VAR_19->mbox_mem_pool, VAR_6);
 if (!VAR_24) {
  VAR_27 = -VAR_2;
  goto loopback_mode_exit;
 }
 FUNC_6((void *)VAR_24, 0, sizeof(LPFC_MBOXQ_t));
 VAR_24->u.mb.mbxCommand = VAR_14;
 VAR_24->u.mb.mbxOwner = VAR_18;

 VAR_25 = FUNC_3(VAR_19, VAR_24, VAR_12);

 if ((VAR_25 == VAR_16) && (VAR_24->u.mb.mbxStatus == 0)) {

  VAR_26 = 0;
  while (VAR_19->link_state != VAR_11) {
   if (VAR_26++ > VAR_23) {
    VAR_27 = -VAR_3;
    goto loopback_mode_exit;
   }
   FUNC_7(10);
  }

  FUNC_6((void *)VAR_24, 0, sizeof(LPFC_MBOXQ_t));
  if (VAR_22 == VAR_7)
   VAR_24->u.mb.un.varInitLnk.link_flags = VAR_4;
  else
   VAR_24->u.mb.un.varInitLnk.link_flags =
    VAR_5;

  VAR_24->u.mb.mbxCommand = VAR_15;
  VAR_24->u.mb.mbxOwner = VAR_18;

  VAR_25 = FUNC_3(VAR_19, VAR_24,
           VAR_12);

  if ((VAR_25 != VAR_16) || (VAR_24->u.mb.mbxStatus))
   VAR_27 = -VAR_1;
  else {
   FUNC_8(&VAR_19->hbalock);
   VAR_19->link_flag |= VAR_13;
   FUNC_9(&VAR_19->hbalock);

   FUNC_7(100);

   VAR_26 = 0;
   while (VAR_19->link_state != VAR_10) {
    if (VAR_26++ > VAR_23) {
     VAR_27 = -VAR_3;
     break;
    }

    FUNC_7(10);
   }
  }

 } else
  VAR_27 = -VAR_1;

loopback_mode_exit:
 FUNC_1(VAR_19);




 if (VAR_24 && VAR_25 != VAR_17)
  FUNC_5(VAR_24, VAR_19->mbox_mem_pool);

job_error:

 VAR_20->reply->result = VAR_27;

 if (VAR_27 == 0)
  VAR_20->job_done(VAR_20);
 return VAR_27;
}
