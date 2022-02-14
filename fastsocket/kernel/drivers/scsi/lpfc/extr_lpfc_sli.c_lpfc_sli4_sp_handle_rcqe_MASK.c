
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_rcqe {int dummy; } ;
struct lpfc_queue {scalar_t__ queue_id; int RQ_no_posted_buf; int RQ_rcv_buf; int RQ_no_buf_found; int RQ_buf_trunc; } ;
struct TYPE_8__ {int sp_queue_event; struct lpfc_queue* dat_rq; struct lpfc_queue* hdr_rq; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_4__ sli4_hba; TYPE_1__* hbqs; } ;
struct TYPE_6__ {int rcqe_cmpl; } ;
struct TYPE_7__ {int list; TYPE_2__ cqe; } ;
struct hbq_dmabuf {TYPE_3__ cq_event; } ;
struct TYPE_5__ {int hbq_buffer_list; } ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_rcqe*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct lpfc_queue*,struct lpfc_queue*) ;
 struct hbq_dmabuf* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct lpfc_rcqe*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool
FUNC_9(struct lpfc_hba *VAR_9, struct lpfc_rcqe *VAR_10)
{
 bool VAR_11 = 0;
 struct lpfc_queue *VAR_12 = VAR_9->sli4_hba.hdr_rq;
 struct lpfc_queue *VAR_13 = VAR_9->sli4_hba.dat_rq;
 struct hbq_dmabuf *VAR_14;
 uint32_t VAR_15, VAR_16;
 unsigned long VAR_17;


 if (FUNC_8(!VAR_12) || FUNC_8(!VAR_13))
  return VAR_11;

 if (FUNC_0(VAR_5, VAR_10) == VAR_0)
  VAR_16 = FUNC_0(VAR_7, VAR_10);
 else
  VAR_16 = FUNC_0(VAR_6, VAR_10);
 if (VAR_16 != VAR_12->queue_id)
  goto out;

 VAR_15 = FUNC_0(VAR_8, VAR_10);
 switch (VAR_15) {
 case 129:
  FUNC_2(VAR_9, VAR_3, VAR_4,
    "2537 Receive Frame Truncated!!\n");
  VAR_12->RQ_buf_trunc++;
 case 128:
  FUNC_3(VAR_12, VAR_13);
  FUNC_6(&VAR_9->hbalock, VAR_17);
  VAR_14 = FUNC_4(&VAR_9->hbqs[0].hbq_buffer_list);
  if (!VAR_14) {
   VAR_12->RQ_no_buf_found++;
   FUNC_7(&VAR_9->hbalock, VAR_17);
   goto out;
  }
  VAR_12->RQ_rcv_buf++;
  FUNC_5(&VAR_14->cq_event.cqe.rcqe_cmpl, VAR_10, sizeof(*VAR_10));

  FUNC_1(&VAR_14->cq_event.list,
         &VAR_9->sli4_hba.sp_queue_event);

  VAR_9->hba_flag |= VAR_2;
  FUNC_7(&VAR_9->hbalock, VAR_17);
  VAR_11 = 1;
  break;
 case 130:
 case 131:
  VAR_12->RQ_no_posted_buf++;

  FUNC_6(&VAR_9->hbalock, VAR_17);
  VAR_9->hba_flag |= VAR_1;
  FUNC_7(&VAR_9->hbalock, VAR_17);
  VAR_11 = 1;
  break;
 }
out:
 return VAR_11;
}
