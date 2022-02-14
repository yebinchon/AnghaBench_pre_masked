
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_nodelist {int dummy; } ;
struct TYPE_8__ {int* ulpWord; } ;
struct TYPE_10__ {scalar_t__ ulpStatus; TYPE_3__ un; } ;
struct lpfc_iocbq {TYPE_5__ iocb; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; } ;
struct lpfc_hba {int ct_ev_lock; } ;
struct TYPE_6__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_7__ {TYPE_1__ iocb; } ;
struct lpfc_dmabuf {int phys; int virt; TYPE_2__ context_un; struct fc_bsg_job* set_job; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__* reply; int * dd_data; } ;
struct bsg_job_data {int phys; int virt; TYPE_2__ context_un; struct fc_bsg_job* set_job; } ;
struct TYPE_9__ {int result; scalar_t__ reply_payload_rcv_len; } ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct fc_bsg_job*) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_5,
   struct lpfc_iocbq *VAR_6,
   struct lpfc_iocbq *VAR_7)
{
 struct bsg_job_data *VAR_8;
 struct fc_bsg_job *VAR_9;
 IOCB_t *VAR_10;
 struct lpfc_dmabuf *VAR_11, *VAR_12;
 struct lpfc_nodelist *VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;

 VAR_8 = VAR_6->context1;


 FUNC_5(&VAR_5->ct_ev_lock, VAR_14);
 VAR_9 = VAR_8->set_job;
 if (VAR_9) {

  VAR_9->dd_data = ((void*)0);
 }
 FUNC_6(&VAR_5->ct_ev_lock, VAR_14);

 VAR_13 = VAR_8->context_un.iocb.ndlp;
 VAR_12 = VAR_6->context2;
 VAR_11 = VAR_6->context3;
 VAR_10 = &VAR_7->iocb;



 if (VAR_9) {
  if (VAR_10->ulpStatus) {
   if (VAR_10->ulpStatus == VAR_4) {
    switch (VAR_10->un.ulpWord[4] & VAR_3) {
    case 128:
     VAR_15 = -VAR_2;
     break;
    case 129:
     VAR_15 = -VAR_1;
     break;
    default:
     VAR_15 = -VAR_0;
     break;
    }
   } else {
    VAR_15 = -VAR_0;
   }
  } else {
   VAR_9->reply->reply_payload_rcv_len = 0;
  }
 }

 FUNC_1(VAR_5, VAR_12);
 FUNC_2(VAR_5, VAR_11->virt, VAR_11->phys);
 FUNC_0(VAR_11);
 FUNC_4(VAR_5, VAR_6);
 FUNC_3(VAR_13);
 FUNC_0(VAR_8);



 if (VAR_9) {
  VAR_9->reply->result = VAR_15;
  VAR_9->job_done(VAR_9);
 }
 return;
}
