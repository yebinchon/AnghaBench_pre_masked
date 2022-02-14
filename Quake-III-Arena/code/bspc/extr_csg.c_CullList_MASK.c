
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ bspbrush_t ;


 int FUNC_0 (TYPE_1__*) ;

bspbrush_t *FUNC_1(bspbrush_t *VAR_0, bspbrush_t *VAR_1)
{
 bspbrush_t *VAR_2;
 bspbrush_t *VAR_3;

 VAR_2 = ((void*)0);

 for ( ; VAR_0 ; VAR_0 = VAR_3)
 {
  VAR_3 = VAR_0->next;
  if (VAR_0 == VAR_1)
  {
   FUNC_0 (VAR_0);
   continue;
  }
  VAR_0->next = VAR_2;
  VAR_2 = VAR_0;
 }
 return VAR_2;
}
