
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_sli_ring {int ring_lock; } ;
struct lpfc_queue {int EQ_processed; } ;
struct lpfc_iocbq {int iocb_flag; int fcp_wqidx; } ;
struct TYPE_4__ {struct lpfc_sli_ring* ring; } ;
struct TYPE_3__ {struct lpfc_queue** hba_eq; struct lpfc_fcp_eq_hdl* fcp_eq_hdl; int fcp_wq; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; TYPE_2__ sli; TYPE_1__ sli4_hba; } ;
struct lpfc_fcp_eq_hdl {int fcp_eq_in_use; } ;
struct lpfc_eqe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,size_t,struct lpfc_iocbq*,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct lpfc_queue*) ;
 struct lpfc_eqe* FUNC_4 (struct lpfc_queue*) ;
 int FUNC_5 (struct lpfc_queue*,int ) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_eqe*,int) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;

int
FUNC_11(struct lpfc_hba *VAR_6, uint32_t VAR_7,
      struct lpfc_iocbq *VAR_8, uint32_t VAR_9)
{
 struct lpfc_fcp_eq_hdl *VAR_10;
 struct lpfc_sli_ring *VAR_11;
 struct lpfc_queue *VAR_12;
 struct lpfc_eqe *VAR_13;
 unsigned long VAR_14;
 int VAR_15, VAR_16;

 if (VAR_6->sli_rev == VAR_3) {
  if (VAR_8->iocb_flag & VAR_1) {
   if (FUNC_10(!VAR_6->sli4_hba.fcp_wq))
    return VAR_0;
   VAR_16 = FUNC_7(VAR_6);
   VAR_8->fcp_wqidx = VAR_16;
   VAR_7 = VAR_4 + VAR_16;

   VAR_11 = &VAR_6->sli.ring[VAR_7];
   FUNC_8(&VAR_11->ring_lock, VAR_14);
   VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_8,
    VAR_9);
   FUNC_9(&VAR_11->ring_lock, VAR_14);

   if (VAR_5) {
    VAR_10 = &VAR_6->sli4_hba.fcp_eq_hdl[VAR_16];

    if (FUNC_1(&VAR_10->
     fcp_eq_in_use)) {


     VAR_12 = VAR_6->sli4_hba.hba_eq[VAR_16];


     FUNC_3(VAR_12);




     while ((VAR_13 = FUNC_4(VAR_12))) {
      FUNC_6(VAR_6,
       VAR_13, VAR_16);
      VAR_12->EQ_processed++;
     }


     FUNC_5(VAR_12,
      VAR_2);
    }
    FUNC_2(&VAR_10->fcp_eq_in_use);
   }
  } else {
   VAR_11 = &VAR_6->sli.ring[VAR_7];
   FUNC_8(&VAR_11->ring_lock, VAR_14);
   VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_8,
    VAR_9);
   FUNC_9(&VAR_11->ring_lock, VAR_14);

  }
 } else {

  FUNC_8(&VAR_6->hbalock, VAR_14);
  VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_9(&VAR_6->hbalock, VAR_14);
 }
 return VAR_15;
}
