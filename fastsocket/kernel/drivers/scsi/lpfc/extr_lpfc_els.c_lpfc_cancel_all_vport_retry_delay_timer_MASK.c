
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int max_vports; int link_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_3 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (struct lpfc_hba*) ;

void
FUNC_6(struct lpfc_hba *VAR_1)
{
 struct lpfc_vport **VAR_2;
 struct lpfc_nodelist *VAR_3;
 uint32_t VAR_4;
 int VAR_5;


 VAR_4 = VAR_1->link_state;
 FUNC_5(VAR_1);
 VAR_1->link_state = VAR_4;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  for (VAR_5 = 0; VAR_5 <= VAR_1->max_vports && VAR_2[VAR_5] != ((void*)0); VAR_5++) {
   VAR_3 = FUNC_4(VAR_2[VAR_5], VAR_0);
   if (VAR_3)
    FUNC_0(VAR_2[VAR_5], VAR_3);
   FUNC_3(VAR_2[VAR_5]);
  }
  FUNC_2(VAR_1, VAR_2);
 }
}
