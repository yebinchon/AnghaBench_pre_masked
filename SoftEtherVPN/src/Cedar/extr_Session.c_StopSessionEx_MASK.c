
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ref; } ;
struct TYPE_6__ {int UserCanceled; int CancelConnect; int Halt; int ForceStopFlag; int Thread; TYPE_2__* Connection; int HaltEvent; int Cancel1; int Name; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ CONNECTION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (int ,int) ;

void FUNC_7(SESSION *VAR_0, bool VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 VAR_0->UserCanceled = 1;
 VAR_0->CancelConnect = 1;
 VAR_0->Halt = 1;

 FUNC_2("Stop Session %s\n", VAR_0->Name);


 FUNC_1(VAR_0->Cancel1);


 FUNC_4(VAR_0->HaltEvent);


 if (VAR_0->Connection)
 {
  CONNECTION *VAR_2 = VAR_0->Connection;
  FUNC_0(VAR_2->ref);
  FUNC_5(VAR_2, VAR_1);
  FUNC_3(VAR_2);
 }


 if (VAR_1 == 0)
 {
  while (1)
  {
   VAR_0->ForceStopFlag = 1;
   VAR_0->Halt = 1;
   if (FUNC_6(VAR_0->Thread, 20))
   {
    break;
   }
  }
 }
 else
 {
  VAR_0->ForceStopFlag = 1;
  VAR_0->Halt = 1;
 }
}
