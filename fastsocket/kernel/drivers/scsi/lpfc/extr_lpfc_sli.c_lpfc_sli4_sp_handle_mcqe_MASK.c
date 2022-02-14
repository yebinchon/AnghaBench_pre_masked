
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_mcqe {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_cqe {int dummy; } ;


 int FUNC_0 (int ,struct lpfc_mcqe*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_mcqe*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_mcqe*) ;
 int FUNC_3 (struct lpfc_cqe*,struct lpfc_mcqe*,int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_4(struct lpfc_hba *VAR_1, struct lpfc_cqe *VAR_2)
{
 struct lpfc_mcqe VAR_3;
 bool VAR_4;


 FUNC_3(VAR_2, &VAR_3, sizeof(struct lpfc_mcqe));


 if (!FUNC_0(VAR_0, &VAR_3))
  VAR_4 = FUNC_2(VAR_1, &VAR_3);
 else
  VAR_4 = FUNC_1(VAR_1, &VAR_3);
 return VAR_4;
}
