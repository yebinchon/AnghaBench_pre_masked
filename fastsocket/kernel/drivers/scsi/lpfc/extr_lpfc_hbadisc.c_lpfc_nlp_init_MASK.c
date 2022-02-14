
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_rpi; int nlp_listp; } ;
struct TYPE_2__ {scalar_t__ sli_rev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct lpfc_nodelist*,int ,int) ;

void
FUNC_5(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
       uint32_t VAR_4)
{
 FUNC_4(VAR_3, 0, sizeof (struct lpfc_nodelist));

 FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_0(&VAR_3->nlp_listp);
 if (VAR_2->phba->sli_rev == VAR_1)
  VAR_3->nlp_rpi = FUNC_3(VAR_2->phba);


 FUNC_1(VAR_2, VAR_0,
  "node init:       did:x%x",
  VAR_3->nlp_DID, 0, 0);

 return;
}
