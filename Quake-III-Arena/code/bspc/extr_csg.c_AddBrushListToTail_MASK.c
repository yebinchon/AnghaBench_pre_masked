
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ bspbrush_t ;



bspbrush_t *FUNC_0 (bspbrush_t *VAR_0, bspbrush_t *VAR_1)
{
 bspbrush_t *VAR_2, *VAR_3;

 for (VAR_2=VAR_0 ; VAR_2 ; VAR_2=VAR_3)
 {
  VAR_3 = VAR_2->next;
  VAR_2->next = ((void*)0);
  VAR_1->next = VAR_2;
  VAR_1 = VAR_2;
 }
 return VAR_1;
}
