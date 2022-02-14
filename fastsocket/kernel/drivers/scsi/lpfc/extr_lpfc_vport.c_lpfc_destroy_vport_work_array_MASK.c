
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int max_vports; } ;


 int FUNC_0 (struct lpfc_vport**) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct lpfc_hba *VAR_0, struct lpfc_vport **VAR_1)
{
 int VAR_2;
 if (VAR_1 == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 <= VAR_0->max_vports && VAR_1[VAR_2] != ((void*)0); VAR_2++)
  FUNC_2(FUNC_1(VAR_1[VAR_2]));
 FUNC_0(VAR_1);
}
