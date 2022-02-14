
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct menlo_response {int xri; } ;
struct TYPE_12__ {unsigned int bdeSize; } ;
struct TYPE_13__ {TYPE_4__ bdl; } ;
struct TYPE_14__ {int* ulpWord; TYPE_5__ genreq64; } ;
struct TYPE_16__ {scalar_t__ ulpStatus; TYPE_6__ un; int ulpContext; } ;
struct lpfc_iocbq {TYPE_8__ iocb; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; } ;
struct lpfc_hba {int ct_ev_lock; } ;
struct lpfc_bsg_menlo {struct lpfc_dmabuf* rmp; } ;
struct TYPE_9__ {struct lpfc_bsg_menlo menlo; } ;
struct lpfc_dmabuf {int phys; int virt; struct fc_bsg_job* set_job; TYPE_1__ context_un; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_7__* reply; int reply_payload; int * dd_data; } ;
struct bsg_job_data {int phys; int virt; struct fc_bsg_job* set_job; TYPE_1__ context_un; } ;
struct TYPE_10__ {scalar_t__ vendor_rsp; } ;
struct TYPE_11__ {TYPE_2__ vendor_reply; } ;
struct TYPE_15__ {int result; int reply_payload_rcv_len; TYPE_3__ reply_data; } ;
typedef TYPE_8__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_dmabuf*,int *,unsigned int,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ) ;
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
 struct lpfc_dmabuf *VAR_11, *VAR_12, *VAR_13;
 struct lpfc_bsg_menlo *VAR_14;
 unsigned long VAR_15;
 struct menlo_response *VAR_16;
 unsigned int VAR_17;
 int VAR_18 = 0;

 VAR_8 = VAR_6->context1;
 VAR_12 = VAR_6->context2;
 VAR_11 = VAR_6->context3;
 VAR_14 = &VAR_8->context_un.menlo;
 VAR_13 = VAR_14->rmp;
 VAR_10 = &VAR_7->iocb;


 FUNC_5(&VAR_5->ct_ev_lock, VAR_15);
 VAR_9 = VAR_8->set_job;
 if (VAR_9) {

  VAR_9->dd_data = ((void*)0);
 }
 FUNC_6(&VAR_5->ct_ev_lock, VAR_15);



 if (VAR_9) {





  VAR_16 = (struct menlo_response *)
   VAR_9->reply->reply_data.vendor_reply.vendor_rsp;
  VAR_16->xri = VAR_10->ulpContext;
  if (VAR_10->ulpStatus) {
   if (VAR_10->ulpStatus == VAR_4) {
    switch (VAR_10->un.ulpWord[4] & VAR_3) {
    case 128:
     VAR_18 = -VAR_2;
     break;
    case 129:
     VAR_18 = -VAR_1;
     break;
    default:
     VAR_18 = -VAR_0;
     break;
    }
   } else {
    VAR_18 = -VAR_0;
   }
  } else {
   VAR_17 = VAR_10->un.genreq64.bdl.bdeSize;
   VAR_9->reply->reply_payload_rcv_len =
    FUNC_1(VAR_13, &VAR_9->reply_payload,
         VAR_17, 0);
  }

 }

 FUNC_4(VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_12);
 FUNC_2(VAR_5, VAR_13);
 FUNC_3(VAR_5, VAR_11->virt, VAR_11->phys);
 FUNC_0(VAR_11);
 FUNC_0(VAR_8);



 if (VAR_9) {
  VAR_9->reply->result = VAR_18;
  VAR_9->job_done(VAR_9);
 }

 return;
}
