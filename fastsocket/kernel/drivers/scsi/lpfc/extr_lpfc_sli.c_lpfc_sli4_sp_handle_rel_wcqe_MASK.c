
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_wcqe_release {int dummy; } ;
struct TYPE_3__ {TYPE_2__* els_wq; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct TYPE_4__ {scalar_t__ queue_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_wcqe_release*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_4,
        struct lpfc_wcqe_release *VAR_5)
{

 if (FUNC_3(!VAR_4->sli4_hba.els_wq))
  return;

 if (FUNC_0(VAR_2, VAR_5) == VAR_4->sli4_hba.els_wq->queue_id)
  FUNC_2(VAR_4->sli4_hba.els_wq,
         FUNC_0(VAR_3, VAR_5));
 else
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "2579 Slow-path wqe consume event carries "
    "miss-matched qid: wcqe-qid=x%x, sp-qid=x%x\n",
    FUNC_0(VAR_3, VAR_5),
    VAR_4->sli4_hba.els_wq->queue_id);
}
