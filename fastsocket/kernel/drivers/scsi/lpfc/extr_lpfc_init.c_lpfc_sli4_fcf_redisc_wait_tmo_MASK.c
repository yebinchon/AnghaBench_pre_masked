
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
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(unsigned long VAR_4)
{
 struct lpfc_hba *VAR_5 = (struct lpfc_hba *)VAR_4;


 FUNC_2(&VAR_5->hbalock);
 if (!(VAR_5->fcf.fcf_flag & VAR_1)) {
  FUNC_3(&VAR_5->hbalock);
  return;
 }

 VAR_5->fcf.fcf_flag &= ~VAR_1;

 VAR_5->fcf.fcf_flag |= VAR_0;
 FUNC_3(&VAR_5->hbalock);
 FUNC_0(VAR_5, VAR_2, VAR_3,
   "2776 FCF rediscover quiescent timer expired\n");

 FUNC_1(VAR_5);
}
