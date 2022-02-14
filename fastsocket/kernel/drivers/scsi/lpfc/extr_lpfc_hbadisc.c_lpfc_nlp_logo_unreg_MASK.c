
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_3__ {scalar_t__ context1; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;

void
FUNC_1(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1)
{
 struct lpfc_vport *VAR_2 = VAR_1->vport;
 struct lpfc_nodelist *VAR_3;

 VAR_3 = (struct lpfc_nodelist *)(VAR_1->context1);
 if (!VAR_3)
  return;
 FUNC_0(VAR_2, VAR_3, 0);
}
