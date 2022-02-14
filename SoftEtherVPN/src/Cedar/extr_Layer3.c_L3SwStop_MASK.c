
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Active; int Halt; int lock; int * Thread; } ;
typedef int THREAD ;
typedef TYPE_1__ L3SW ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(L3SW *VAR_1)
{
 THREAD *VAR_2 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->lock);
 {
  if (VAR_1->Active == 0)
  {
   FUNC_2(VAR_1->lock);
   return;
  }

  VAR_1->Halt = 1;

  VAR_2 = VAR_1->Thread;

  VAR_1->Active = 0;
 }
 FUNC_2(VAR_1->lock);

 FUNC_3(VAR_2, VAR_0);
 FUNC_1(VAR_2);
}
