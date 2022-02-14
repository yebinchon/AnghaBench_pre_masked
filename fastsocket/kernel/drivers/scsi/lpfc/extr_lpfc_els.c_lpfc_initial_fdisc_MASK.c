
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int nlp_mem_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_2 ;
 struct lpfc_nodelist* FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_7 (int ,int ) ;

int
FUNC_8(struct lpfc_vport *VAR_3)
{
 struct lpfc_hba *VAR_4 = VAR_3->phba;
 struct lpfc_nodelist *VAR_5;


 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (!VAR_5) {

  VAR_5 = FUNC_7(VAR_4->nlp_mem_pool, VAR_1);
  if (!VAR_5)
   return 0;
  FUNC_5(VAR_3, VAR_5, VAR_0);

  FUNC_2(VAR_3, VAR_5);
 } else if (!FUNC_0(VAR_5)) {

  VAR_5 = FUNC_1(VAR_3, VAR_5, VAR_2);
  if (!VAR_5)
   return 0;
 }

 if (FUNC_4(VAR_3, VAR_5, 0)) {



  FUNC_6(VAR_5);
  return 0;
 }
 return 1;
}
