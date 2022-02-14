
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
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct lpfc_hba *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_1, VAR_2,
    "2749 Failed to prepare for unregistering "
    "HBA's FCF record: rc=%d\n", VAR_4);
  return;
 }


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return;

 FUNC_3(&VAR_3->hbalock);
 VAR_3->fcf.fcf_flag &= ~VAR_0;
 FUNC_4(&VAR_3->hbalock);
}
