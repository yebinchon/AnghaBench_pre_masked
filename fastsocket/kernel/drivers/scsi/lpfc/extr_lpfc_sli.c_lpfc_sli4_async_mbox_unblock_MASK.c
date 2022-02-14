
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli {int sli_flag; } ;
struct lpfc_hba {int hbalock; struct lpfc_sli sli; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_1)
{
 struct lpfc_sli *VAR_2 = &VAR_1->sli;

 FUNC_1(&VAR_1->hbalock);
 if (!(VAR_2->sli_flag & VAR_0)) {

  FUNC_2(&VAR_1->hbalock);
  return;
 }






 VAR_2->sli_flag &= ~VAR_0;
 FUNC_2(&VAR_1->hbalock);


 FUNC_0(VAR_1);
}
