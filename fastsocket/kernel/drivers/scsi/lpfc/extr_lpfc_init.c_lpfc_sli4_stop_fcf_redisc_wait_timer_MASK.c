
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fcf_flag; } ;
struct lpfc_hba {int hbalock; TYPE_1__ fcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct lpfc_hba *VAR_3)
{
 FUNC_1(&VAR_3->hbalock);
 if (!(VAR_3->fcf.fcf_flag & VAR_2)) {

  FUNC_2(&VAR_3->hbalock);
  return;
 }
 FUNC_0(VAR_3);

 VAR_3->fcf.fcf_flag &= ~(VAR_1 | VAR_0);
 FUNC_2(&VAR_3->hbalock);
}
