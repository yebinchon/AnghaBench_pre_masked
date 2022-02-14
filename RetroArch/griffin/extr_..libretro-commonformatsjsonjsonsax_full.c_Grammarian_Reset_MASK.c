
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stackSize; int stackUsed; int * pStack; int * defaultStack; } ;
typedef TYPE_1__* Grammarian ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(Grammarian VAR_1, int VAR_2)
{




   if (!VAR_2)
   {
      VAR_1->pStack = VAR_1->defaultStack;
      VAR_1->stackSize = sizeof(VAR_1->defaultStack);
   }


   VAR_1->pStack[0] = VAR_0;
   VAR_1->stackUsed = 1;
}
