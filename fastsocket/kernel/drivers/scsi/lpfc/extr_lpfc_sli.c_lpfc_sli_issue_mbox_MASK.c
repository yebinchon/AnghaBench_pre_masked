
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int (* lpfc_sli_issue_mbox ) (struct lpfc_hba*,int *,int ) ;} ;
typedef int LPFC_MBOXQ_t ;


 int FUNC_0 (struct lpfc_hba*,int *,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1, uint32_t VAR_2)
{
 return VAR_0->lpfc_sli_issue_mbox(VAR_0, VAR_1, VAR_2);
}
