
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ period; int tcall; scalar_t__ active; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2(void)
{
 for (unsigned int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].period == 0) {
   continue;
  }


  while (VAR_1[VAR_2].active);

  FUNC_1(&VAR_1[VAR_2].tcall);
 }


 FUNC_0(0);
}
