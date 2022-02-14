
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct TYPE_2__ {scalar_t__ sli_rev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,scalar_t__) ;

void
FUNC_3(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3)
{







 if (VAR_3->nlp_state == VAR_1)
  return;
 FUNC_2(VAR_2, VAR_3, VAR_1);
 if (VAR_2->phba->sli_rev == VAR_0)
  FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_3);
 return;
}
