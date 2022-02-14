
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ bspbrush_t ;


 int FUNC_0 (int) ;

void FUNC_1(bspbrush_t *VAR_0, bspbrush_t *VAR_1)
{
 bspbrush_t *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
 {
  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
  {
   FUNC_0(VAR_2 != VAR_3);
  }
 }
}
