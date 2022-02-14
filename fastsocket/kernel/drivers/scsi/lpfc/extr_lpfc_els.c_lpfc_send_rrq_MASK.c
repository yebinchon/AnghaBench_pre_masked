
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_nodelist {int dummy; } ;
struct lpfc_node_rrq {int nlp_DID; int vport; int xritag; } ;
struct lpfc_hba {int dummy; } ;


 struct lpfc_nodelist* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct lpfc_nodelist*,int ,struct lpfc_node_rrq*) ;
 scalar_t__ FUNC_2 (struct lpfc_hba*,struct lpfc_nodelist*,int ) ;

int
FUNC_3(struct lpfc_hba *VAR_0, struct lpfc_node_rrq *VAR_1)
{
 struct lpfc_nodelist *VAR_2 = FUNC_0(VAR_1->vport,
       VAR_1->nlp_DID);
 if (FUNC_2(VAR_0, VAR_2, VAR_1->xritag))
  return FUNC_1(VAR_1->vport, VAR_2,
      VAR_1->nlp_DID, VAR_1);
 else
  return 1;
}
