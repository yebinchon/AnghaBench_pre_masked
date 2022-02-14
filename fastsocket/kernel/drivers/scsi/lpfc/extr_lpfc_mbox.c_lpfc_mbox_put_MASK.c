
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sli {int mboxq_cnt; int mboxq; } ;
struct lpfc_hba {struct lpfc_sli sli; } ;
struct TYPE_3__ {int list; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct lpfc_hba * VAR_0, LPFC_MBOXQ_t * VAR_1)
{
 struct lpfc_sli *VAR_2;

 VAR_2 = &VAR_0->sli;

 FUNC_0(&VAR_1->list, &VAR_2->mboxq);

 VAR_2->mboxq_cnt++;

 return;
}
