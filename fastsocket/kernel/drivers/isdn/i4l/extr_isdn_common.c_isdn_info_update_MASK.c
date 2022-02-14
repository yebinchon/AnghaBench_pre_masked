
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* private; scalar_t__ next; } ;
typedef TYPE_1__ infostruct ;
struct TYPE_4__ {int info_waitq; TYPE_1__* infochain; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(void)
{
 infostruct *VAR_1 = VAR_0->infochain;

 while (VAR_1) {
  *(VAR_1->private) = 1;
  VAR_1 = (infostruct *) VAR_1->next;
 }
 FUNC_0(&(VAR_0->info_waitq));
}
