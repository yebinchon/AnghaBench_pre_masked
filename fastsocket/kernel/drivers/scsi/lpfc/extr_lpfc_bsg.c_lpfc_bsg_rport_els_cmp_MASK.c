
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef void* uint8_t ;
struct TYPE_14__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_15__ {TYPE_1__ iocb; } ;
struct lpfc_nodelist {struct fc_bsg_job* set_job; TYPE_2__ context_un; } ;
struct TYPE_17__ {unsigned int bdeSize; } ;
struct TYPE_18__ {TYPE_4__ bdl; } ;
struct TYPE_20__ {int * ulpWord; TYPE_5__ elsreq64; } ;
struct TYPE_13__ {scalar_t__ ulpStatus; TYPE_7__ un; } ;
struct lpfc_iocbq {scalar_t__ context2; TYPE_11__ iocb; struct lpfc_nodelist* context1; } ;
struct lpfc_hba {int ct_ev_lock; } ;
struct TYPE_16__ {scalar_t__ next; } ;
struct lpfc_dmabuf {int virt; TYPE_3__ list; } ;
struct TYPE_19__ {int sg_cnt; int sg_list; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_10__* reply; TYPE_6__ reply_payload; int * dd_data; } ;
struct TYPE_22__ {void* vendor_unique; void* reason_explanation; void* reason_code; void* action; } ;
struct fc_bsg_ctels_reply {TYPE_9__ rjt_data; int status; } ;
struct bsg_job_data {struct fc_bsg_job* set_job; TYPE_2__ context_un; } ;
struct TYPE_21__ {struct fc_bsg_ctels_reply ctels_reply; } ;
struct TYPE_12__ {int reply_payload_rcv_len; int result; TYPE_8__ reply_data; } ;
typedef TYPE_11__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fc_bsg_job*) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_4,
   struct lpfc_iocbq *VAR_5,
   struct lpfc_iocbq *VAR_6)
{
 struct bsg_job_data *VAR_7;
 struct fc_bsg_job *VAR_8;
 IOCB_t *VAR_9;
 struct lpfc_nodelist *VAR_10;
 struct lpfc_dmabuf *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct fc_bsg_ctels_reply *VAR_13;
 uint8_t *VAR_14;
 unsigned long VAR_15;
 unsigned int VAR_16;
 int VAR_17 = 0;

 VAR_7 = VAR_5->context1;
 VAR_10 = VAR_7->context_un.iocb.ndlp;
 VAR_5->context1 = VAR_10;


 FUNC_4(&VAR_4->ct_ev_lock, VAR_15);
 VAR_8 = VAR_7->set_job;
 if (VAR_8) {

  VAR_8->dd_data = ((void*)0);
 }
 FUNC_5(&VAR_4->ct_ev_lock, VAR_15);

 VAR_9 = &VAR_6->iocb;
 VAR_11 = (struct lpfc_dmabuf *)VAR_5->context2;
 VAR_12 = (struct lpfc_dmabuf *)VAR_11->list.next;





 if (VAR_8) {
  if (VAR_9->ulpStatus == VAR_3) {
   VAR_16 = VAR_9->un.elsreq64.bdl.bdeSize;
   VAR_8->reply->reply_payload_rcv_len =
    FUNC_3(VAR_8->reply_payload.sg_list,
          VAR_8->reply_payload.sg_cnt,
          VAR_12->virt,
          VAR_16);
  } else if (VAR_9->ulpStatus == VAR_2) {
   VAR_8->reply->reply_payload_rcv_len =
    sizeof(struct fc_bsg_ctels_reply);

   VAR_14 = (uint8_t *)&VAR_9->un.ulpWord[4];
   VAR_13 = &VAR_8->reply->reply_data.ctels_reply;
   VAR_13->status = VAR_1;
   VAR_13->rjt_data.action = VAR_14[3];
   VAR_13->rjt_data.reason_code = VAR_14[2];
   VAR_13->rjt_data.reason_explanation = VAR_14[1];
   VAR_13->rjt_data.vendor_unique = VAR_14[0];
  } else {
   VAR_17 = -VAR_0;
  }
 }

 FUNC_2(VAR_10);
 FUNC_1(VAR_4, VAR_5);
 FUNC_0(VAR_7);



 if (VAR_8) {
  VAR_8->reply->result = VAR_17;
  VAR_8->job_done(VAR_8);
 }
 return;
}
