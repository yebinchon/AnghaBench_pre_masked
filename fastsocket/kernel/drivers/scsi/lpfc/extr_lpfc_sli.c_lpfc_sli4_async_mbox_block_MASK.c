
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli {int sli_flag; scalar_t__ mbox_active; } ;
struct lpfc_hba {int hbalock; struct lpfc_sli sli; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,scalar_t__) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_2)
{
 struct lpfc_sli *VAR_3 = &VAR_2->sli;
 int VAR_4 = 0;
 unsigned long VAR_5 = 0;


 FUNC_3(&VAR_2->hbalock);
 VAR_3->sli_flag |= VAR_0;



 if (VAR_2->sli.mbox_active)
  VAR_5 = FUNC_1(FUNC_0(VAR_2,
      VAR_2->sli.mbox_active) *
      1000) + VAR_1;
 FUNC_4(&VAR_2->hbalock);


 while (VAR_2->sli.mbox_active) {

  FUNC_2(2);
  if (FUNC_5(VAR_1, VAR_5)) {

   VAR_4 = 1;
   break;
  }
 }


 if (VAR_4) {
  FUNC_3(&VAR_2->hbalock);
  VAR_3->sli_flag &= ~VAR_0;
  FUNC_4(&VAR_2->hbalock);
 }
 return VAR_4;
}
