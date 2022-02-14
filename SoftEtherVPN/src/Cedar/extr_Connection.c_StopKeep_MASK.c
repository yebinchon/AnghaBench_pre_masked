
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Halt; int HaltEvent; int Cancel; int lock; int Thread; } ;
typedef TYPE_1__ KEEP ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(KEEP *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->Halt = 1;
 FUNC_6(VAR_1->HaltEvent);
 FUNC_0(VAR_1->Cancel);

 FUNC_7(VAR_1->Thread, VAR_0);
 FUNC_5(VAR_1->Thread);
 FUNC_1(VAR_1->lock);

 FUNC_3(VAR_1->Cancel);
 FUNC_4(VAR_1->HaltEvent);

 FUNC_2(VAR_1);
}
