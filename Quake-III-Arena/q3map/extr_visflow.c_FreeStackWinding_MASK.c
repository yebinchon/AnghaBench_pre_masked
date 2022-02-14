
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_3__ {int* freewindings; int * windings; } ;
typedef TYPE_1__ pstack_t ;


 int FUNC_0 (char*) ;

void FUNC_1 (winding_t *VAR_0, pstack_t *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0 - VAR_1->windings;

 if (VAR_2<0 || VAR_2>2)
  return;

 if (VAR_1->freewindings[VAR_2])
  FUNC_0 ("FreeStackWinding: allready free");
 VAR_1->freewindings[VAR_2] = 1;
}
