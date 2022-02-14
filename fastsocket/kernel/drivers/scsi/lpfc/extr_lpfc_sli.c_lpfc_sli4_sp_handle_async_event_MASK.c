
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_mcqe {int trailer; int mcqe_tag1; int mcqe_tag0; int word0; } ;
struct TYPE_2__ {int sp_asynce_work_queue; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_1__ sli4_hba; } ;
struct lpfc_cq_event {int list; int cqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 struct lpfc_cq_event* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *,struct lpfc_mcqe*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_6(struct lpfc_hba *VAR_4, struct lpfc_mcqe *VAR_5)
{
 struct lpfc_cq_event *VAR_6;
 unsigned long VAR_7;

 FUNC_1(VAR_4, VAR_2, VAR_3,
   "0392 Async Event: word0:x%x, word1:x%x, "
   "word2:x%x, word3:x%x\n", VAR_5->word0,
   VAR_5->mcqe_tag0, VAR_5->mcqe_tag1, VAR_5->trailer);


 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6) {
  FUNC_1(VAR_4, VAR_1, VAR_3,
    "0394 Failed to allocate CQ_EVENT entry\n");
  return 0;
 }


 FUNC_3(&VAR_6->cqe, VAR_5, sizeof(struct lpfc_mcqe));
 FUNC_4(&VAR_4->hbalock, VAR_7);
 FUNC_0(&VAR_6->list, &VAR_4->sli4_hba.sp_asynce_work_queue);

 VAR_4->hba_flag |= VAR_0;
 FUNC_5(&VAR_4->hbalock, VAR_7);

 return 1;
}
