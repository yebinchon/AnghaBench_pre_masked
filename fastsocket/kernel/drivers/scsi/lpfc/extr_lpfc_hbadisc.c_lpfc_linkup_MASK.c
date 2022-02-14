
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_hba {int max_vports; int fabric_block_timer; int bit_flags; int link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*) ;
 struct lpfc_vport** FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_5 (struct lpfc_vport*) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_2)
{
 struct lpfc_vport **VAR_3;
 int VAR_4;

 FUNC_2(VAR_2);
 VAR_2->link_state = VAR_1;


 FUNC_0(VAR_0, &VAR_2->bit_flags);
 FUNC_1(&VAR_2->fabric_block_timer);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 != ((void*)0))
  for (VAR_4 = 0; VAR_4 <= VAR_2->max_vports && VAR_3[VAR_4] != ((void*)0); VAR_4++)
   FUNC_5(VAR_3[VAR_4]);
 FUNC_4(VAR_2, VAR_3);

 return 0;
}
