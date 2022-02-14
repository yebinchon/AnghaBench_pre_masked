
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Halt; int AdminListenSock; int AdminAcceptThread; int HaltEvent; } ;
typedef TYPE_1__ NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(NAT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->Halt = 1;
 FUNC_0(VAR_0->AdminListenSock);
 FUNC_3(VAR_0->HaltEvent);

 while (1)
 {
  if (FUNC_4(VAR_0->AdminAcceptThread, 1000) == 0)
  {
   FUNC_0(VAR_0->AdminListenSock);
  }
  else
  {
   break;
  }
 }
 FUNC_2(VAR_0->AdminAcceptThread);

 FUNC_1(VAR_0->AdminListenSock);
}
