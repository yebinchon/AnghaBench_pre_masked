
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_wcqe_complete {int dummy; } ;
struct lpfc_sli_ring {int txcmplq; int txq; } ;
struct lpfc_queue {struct lpfc_sli_ring* pring; } ;
struct TYPE_8__ {int wcqe_cmpl; } ;
struct TYPE_9__ {int list; TYPE_3__ cqe; } ;
struct lpfc_iocbq {TYPE_4__ cq_event; } ;
struct TYPE_10__ {int sp_queue_event; } ;
struct TYPE_7__ {TYPE_1__* ring; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_5__ sli4_hba; int iocb_cnt; TYPE_2__ sli; } ;
struct TYPE_6__ {int txcmplq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int,int ,int,int) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (int *,struct lpfc_wcqe_complete*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_7(struct lpfc_hba *VAR_4, struct lpfc_queue *VAR_5,
        struct lpfc_wcqe_complete *VAR_6)
{
 struct lpfc_iocbq *VAR_7;
 unsigned long VAR_8;
 struct lpfc_sli_ring *VAR_9 = VAR_5->pring;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;


 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7) {
  if (!FUNC_1(&VAR_9->txq))
   VAR_10++;
  if (!FUNC_1(&VAR_9->txcmplq))
   VAR_11++;
  if (!FUNC_1(&VAR_4->sli.ring[VAR_3].txcmplq))
   VAR_12++;
  FUNC_2(VAR_4, VAR_1, VAR_2,
   "0387 NO IOCBQ data: txq_cnt=%d iocb_cnt=%d "
   "fcp_txcmplq_cnt=%d, els_txcmplq_cnt=%d\n",
   VAR_10, VAR_4->iocb_cnt,
   VAR_12,
   VAR_11);
  return 0;
 }


 FUNC_4(&VAR_7->cq_event.cqe.wcqe_cmpl, VAR_6, sizeof(*VAR_6));
 FUNC_5(&VAR_4->hbalock, VAR_8);
 FUNC_0(&VAR_7->cq_event.list,
        &VAR_4->sli4_hba.sp_queue_event);
 VAR_4->hba_flag |= VAR_0;
 FUNC_6(&VAR_4->hbalock, VAR_8);

 return 1;
}
