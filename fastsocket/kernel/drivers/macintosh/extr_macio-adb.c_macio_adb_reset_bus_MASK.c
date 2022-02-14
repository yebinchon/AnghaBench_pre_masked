
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(void)
{
 unsigned long VAR_3;
 int VAR_4 = 1000000;






 FUNC_2(&VAR_2, VAR_3);
 FUNC_1(&VAR_1->ctrl.r, FUNC_0(&VAR_1->ctrl.r) | VAR_0);
 while ((FUNC_0(&VAR_1->ctrl.r) & VAR_0) != 0) {
  if (--VAR_4 == 0) {
   FUNC_1(&VAR_1->ctrl.r, FUNC_0(&VAR_1->ctrl.r) & ~VAR_0);
   return -1;
  }
 }
 FUNC_3(&VAR_2, VAR_3);
 return 0;
}
