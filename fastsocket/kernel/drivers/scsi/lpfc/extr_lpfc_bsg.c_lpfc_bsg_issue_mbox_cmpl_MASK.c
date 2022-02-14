
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_hba {int mbox_mem_pool; int ct_ev_lock; } ;
struct TYPE_9__ {int sg_cnt; int sg_list; int payload_len; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_5__* reply; TYPE_2__ reply_payload; int * dd_data; } ;
struct TYPE_10__ {int dmabuffers; int pmboxq; scalar_t__ mb; } ;
struct TYPE_11__ {TYPE_3__ mbox; } ;
struct bsg_job_data {TYPE_4__ context_un; struct fc_bsg_job* set_job; } ;
struct TYPE_8__ {int mb; } ;
struct TYPE_13__ {TYPE_1__ u; struct bsg_job_data* context1; } ;
struct TYPE_12__ {scalar_t__ result; int reply_payload_rcv_len; } ;
typedef int MAILBOX_t ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int FUNC_0 (struct bsg_job_data*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct fc_bsg_job*) ;

void
FUNC_8(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1)
{
 struct bsg_job_data *VAR_2;
 struct fc_bsg_job *VAR_3;
 uint32_t VAR_4;
 unsigned long VAR_5;
 uint8_t *VAR_6, *VAR_7;

 VAR_2 = VAR_1->context1;





 VAR_6 = (uint8_t *)&VAR_1->u.mb;
 VAR_7 = (uint8_t *)VAR_2->context_un.mbox.mb;
 FUNC_2(VAR_7, VAR_6, sizeof(MAILBOX_t));



 FUNC_5(&VAR_0->ct_ev_lock, VAR_5);
 VAR_3 = VAR_2->set_job;
 if (VAR_3) {

  VAR_3->dd_data = ((void*)0);
 }
 FUNC_6(&VAR_0->ct_ev_lock, VAR_5);



 if (VAR_3) {
  VAR_4 = VAR_3->reply_payload.payload_len;
  VAR_3->reply->reply_payload_rcv_len =
   FUNC_4(VAR_3->reply_payload.sg_list,
         VAR_3->reply_payload.sg_cnt,
         VAR_7, VAR_4);
 }

 VAR_2->set_job = ((void*)0);
 FUNC_3(VAR_2->context_un.mbox.pmboxq, VAR_0->mbox_mem_pool);
 FUNC_1(VAR_0, VAR_2->context_un.mbox.dmabuffers);
 FUNC_0(VAR_2);



 if (VAR_3) {
  VAR_3->reply->result = 0;
  VAR_3->job_done(VAR_3);
 }
 return;
}
