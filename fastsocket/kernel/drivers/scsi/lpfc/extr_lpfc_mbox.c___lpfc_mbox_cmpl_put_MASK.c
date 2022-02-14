
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mboxq_cmpl; } ;
struct lpfc_hba {TYPE_1__ sli; } ;
struct TYPE_5__ {int list; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->sli.mboxq_cmpl);
}
