
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int redisc_wait; int fcf_flag; } ;
struct lpfc_hba {TYPE_1__ fcf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct lpfc_hba *VAR_1)
{

 VAR_1->fcf.fcf_flag &= ~VAR_0;


 FUNC_0(&VAR_1->fcf.redisc_wait);
}
