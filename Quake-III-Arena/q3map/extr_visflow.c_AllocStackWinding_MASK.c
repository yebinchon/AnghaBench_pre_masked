
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_3__ {int * windings; scalar_t__* freewindings; } ;
typedef TYPE_1__ pstack_t ;


 int FUNC_0 (char*) ;

winding_t *FUNC_1 (pstack_t *VAR_0)
{
 int VAR_1;

 for (VAR_1=0 ; VAR_1<3 ; VAR_1++)
 {
  if (VAR_0->freewindings[VAR_1])
  {
   VAR_0->freewindings[VAR_1] = 0;
   return &VAR_0->windings[VAR_1];
  }
 }

 FUNC_0 ("AllocStackWinding: failed");

 return ((void*)0);
}
