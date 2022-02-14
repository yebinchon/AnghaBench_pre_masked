
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sli4_wcqe_xri_aborted {int dummy; } ;
struct lpfc_wcqe_release {int dummy; } ;
struct lpfc_wcqe_complete {int dummy; } ;
struct lpfc_queue {int CQ_xri_aborted; int CQ_release_wqe; int CQ_wq; } ;
struct lpfc_hba {void* last_completion_time; } ;
struct lpfc_cqe {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lpfc_wcqe_release*) ;
 void* VAR_2 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_wcqe_complete*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_wcqe_release*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*,struct sli4_wcqe_xri_aborted*) ;
 int FUNC_5 (struct lpfc_cqe*,struct lpfc_wcqe_release*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_4, struct lpfc_queue *VAR_5,
    struct lpfc_cqe *VAR_6)
{
 struct lpfc_wcqe_release VAR_7;
 bool VAR_8 = 0;


 FUNC_5(VAR_6, &VAR_7, sizeof(struct lpfc_cqe));


 switch (FUNC_0(VAR_3, &VAR_7)) {
 case 130:
  VAR_5->CQ_wq++;

  VAR_4->last_completion_time = VAR_2;
  FUNC_2(VAR_4, VAR_5,
    (struct lpfc_wcqe_complete *)&VAR_7);
  break;
 case 129:
  VAR_5->CQ_release_wqe++;

  FUNC_3(VAR_4, VAR_5,
    (struct lpfc_wcqe_release *)&VAR_7);
  break;
 case 128:
  VAR_5->CQ_xri_aborted++;

  VAR_4->last_completion_time = VAR_2;
  VAR_8 = FUNC_4(VAR_4, VAR_5,
    (struct sli4_wcqe_xri_aborted *)&VAR_7);
  break;
 default:
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "0144 Not a valid WCQE code: x%x\n",
    FUNC_0(VAR_3, &VAR_7));
  break;
 }
 return VAR_8;
}
