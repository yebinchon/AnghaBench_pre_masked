
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sli4_wcqe_xri_aborted {int dummy; } ;
struct lpfc_queue {int subtype; } ;
struct TYPE_2__ {int sp_els_xri_aborted_work_queue; int sp_fcp_xri_aborted_work_queue; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_1__ sli4_hba; } ;
struct lpfc_cq_event {int list; int cqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 struct lpfc_cq_event* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *,struct sli4_wcqe_xri_aborted*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_6(struct lpfc_hba *VAR_4,
       struct lpfc_queue *VAR_5,
       struct sli4_wcqe_xri_aborted *VAR_6)
{
 bool VAR_7 = 0;
 struct lpfc_cq_event *VAR_8;
 unsigned long VAR_9;


 VAR_8 = FUNC_2(VAR_4);
 if (!VAR_8) {
  FUNC_1(VAR_4, VAR_2, VAR_3,
    "0602 Failed to allocate CQ_EVENT entry\n");
  return 0;
 }


 FUNC_3(&VAR_8->cqe, VAR_6, sizeof(struct sli4_wcqe_xri_aborted));
 switch (VAR_5->subtype) {
 case 128:
  FUNC_4(&VAR_4->hbalock, VAR_9);
  FUNC_0(&VAR_8->list,
         &VAR_4->sli4_hba.sp_fcp_xri_aborted_work_queue);

  VAR_4->hba_flag |= VAR_1;
  FUNC_5(&VAR_4->hbalock, VAR_9);
  VAR_7 = 1;
  break;
 case 129:
  FUNC_4(&VAR_4->hbalock, VAR_9);
  FUNC_0(&VAR_8->list,
         &VAR_4->sli4_hba.sp_els_xri_aborted_work_queue);

  VAR_4->hba_flag |= VAR_0;
  FUNC_5(&VAR_4->hbalock, VAR_9);
  VAR_7 = 1;
  break;
 default:
  FUNC_1(VAR_4, VAR_2, VAR_3,
    "0603 Invalid work queue CQE subtype (x%x)\n",
    VAR_5->subtype);
  VAR_7 = 0;
  break;
 }
 return VAR_7;
}
