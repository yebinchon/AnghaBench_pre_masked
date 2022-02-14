
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rbr; int lsr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 if (VAR_1) {
  if ((FUNC_0(&VAR_1->lsr) & VAR_0) != 0)
   return FUNC_0(&VAR_1->rbr);
  else
   return -1;
 }
 return -1;
}
