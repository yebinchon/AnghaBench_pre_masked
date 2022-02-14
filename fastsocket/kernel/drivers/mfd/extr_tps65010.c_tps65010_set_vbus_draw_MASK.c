
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int work; } ;
struct TYPE_4__ {unsigned int vbus; int chgstatus; TYPE_1__ work; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 TYPE_2__* VAR_3 ;

int FUNC_4(unsigned VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_3)
  return -VAR_0;


 FUNC_1(VAR_5);
 if (VAR_4 >= 500)
  VAR_4 = 500;
 else if (VAR_4 >= 100)
  VAR_4 = 100;
 else
  VAR_4 = 0;
 VAR_3->vbus = VAR_4;
 if ((VAR_3->chgstatus & VAR_2)
   && FUNC_3(
    VAR_1, &VAR_3->flags)) {

  (void) FUNC_2(&VAR_3->work.work);
 }
 FUNC_0(VAR_5);

 return 0;
}
