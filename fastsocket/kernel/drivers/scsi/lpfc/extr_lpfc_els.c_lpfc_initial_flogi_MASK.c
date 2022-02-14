
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int port_state; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; } ;
struct lpfc_hba {int nlp_mem_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct lpfc_nodelist* FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_8 (int ,int ) ;

int
FUNC_9(struct lpfc_vport *VAR_5)
{
 struct lpfc_hba *VAR_6 = VAR_5->phba;
 struct lpfc_nodelist *VAR_7;

 VAR_5->port_state = VAR_2;
 FUNC_7(VAR_5);


 VAR_7 = FUNC_3(VAR_5, VAR_0);
 if (!VAR_7) {

  VAR_7 = FUNC_8(VAR_6->nlp_mem_pool, VAR_1);
  if (!VAR_7)
   return 0;
  FUNC_5(VAR_5, VAR_7, VAR_0);

  VAR_7->nlp_type |= VAR_3;

  FUNC_2(VAR_5, VAR_7);
 } else if (!FUNC_0(VAR_7)) {

  VAR_7 = FUNC_1(VAR_5, VAR_7, VAR_4);
  if (!VAR_7)
   return 0;
 }

 if (FUNC_4(VAR_5, VAR_7, 0)) {



  FUNC_6(VAR_7);
  return 0;
 }
 return 1;
}
