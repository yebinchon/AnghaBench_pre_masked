
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* GetPC ) () ;int (* GetSR ) () ;int (* GetAReg ) (int) ;int (* GetDReg ) (int) ;} ;
struct TYPE_4__ {int PC; int SR; int * A; int * D; } ;
typedef TYPE_1__ M68KRegs ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(M68KRegs *VAR_1)
{
   int VAR_2;

   if (VAR_1 != ((void*)0))
   {
      for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
      {
         VAR_1->D[VAR_2] = VAR_0->GetDReg(VAR_2);
         VAR_1->A[VAR_2] = VAR_0->GetAReg(VAR_2);
      }
      VAR_1->SR = VAR_0->GetSR();
      VAR_1->PC = VAR_0->GetPC();
   }
}
