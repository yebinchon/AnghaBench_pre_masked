
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fcf_flag; int redisc_wait; } ;
struct lpfc_hba {int hbalock; TYPE_1__ fcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct lpfc_hba *VAR_5)
{
 unsigned long VAR_6 =
  (VAR_4 + FUNC_1(VAR_3));

 FUNC_0(&VAR_5->fcf.redisc_wait, VAR_6);
 FUNC_2(&VAR_5->hbalock);

 VAR_5->fcf.fcf_flag &= ~(VAR_0 | VAR_2);

 VAR_5->fcf.fcf_flag |= VAR_1;
 FUNC_3(&VAR_5->hbalock);
}
