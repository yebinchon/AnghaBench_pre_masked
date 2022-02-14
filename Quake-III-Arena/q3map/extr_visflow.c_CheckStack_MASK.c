
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* next; } ;
struct TYPE_6__ {TYPE_1__ pstack_head; } ;
typedef TYPE_2__ threaddata_t ;
struct TYPE_7__ {int * leaf; struct TYPE_7__* next; } ;
typedef TYPE_3__ pstack_t ;
typedef int leaf_t ;


 int FUNC_0 (char*) ;

void FUNC_1 (leaf_t *VAR_0, threaddata_t *VAR_1)
{
 pstack_t *VAR_2, *VAR_3;

 for (VAR_2=VAR_1->pstack_head.next ; VAR_2 ; VAR_2=VAR_2->next)
 {

  if (VAR_2->leaf == VAR_0)
   FUNC_0 ("CheckStack: leaf recursion");
  for (VAR_3=VAR_1->pstack_head.next ; VAR_3 != VAR_2 ; VAR_3=VAR_3->next)
   if (VAR_3->leaf == VAR_2->leaf)
    FUNC_0 ("CheckStack: late leaf recursion");
 }

}
