
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Active; int Halt; int lock; int Thread; int IfList; } ;
typedef TYPE_1__ L3SW ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(L3SW *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1->lock);
 {
  if (VAR_1->Active == 0)
  {

   if (FUNC_0(VAR_1->IfList) >= 1)
   {
    VAR_1->Halt = 0;


    VAR_1->Thread = FUNC_2(VAR_0, VAR_1);
    FUNC_4(VAR_1->Thread);
   }
  }
 }
 FUNC_3(VAR_1->lock);
}
