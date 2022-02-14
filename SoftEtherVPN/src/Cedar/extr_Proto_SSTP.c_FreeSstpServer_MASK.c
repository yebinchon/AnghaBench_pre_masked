
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int TubeRecv; int TubeSend; int Cedar; int Interrupt; int SockEvent; int SendQueue; int RecvQueue; int PPPThread; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef int BLOCK ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(SSTP_SERVER *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_9(VAR_1->TubeRecv);
 FUNC_9(VAR_1->TubeSend);

 FUNC_10(VAR_1->PPPThread, VAR_0);
 FUNC_7(VAR_1->PPPThread);

 while (1)
 {
  BLOCK *VAR_2 = FUNC_3(VAR_1->RecvQueue);

  if (VAR_2 == ((void*)0))
  {
   break;
  }

  FUNC_1(VAR_2);
 }

 while (1)
 {
  BLOCK *VAR_3 = FUNC_3(VAR_1->SendQueue);

  if (VAR_3 == ((void*)0))
  {
   break;
  }

  FUNC_1(VAR_3);
 }

 FUNC_5(VAR_1->RecvQueue);
 FUNC_5(VAR_1->SendQueue);

 FUNC_6(VAR_1->SockEvent);

 FUNC_2(VAR_1->Interrupt);

 FUNC_4(VAR_1->Cedar);

 FUNC_8(VAR_1->TubeSend);
 FUNC_8(VAR_1->TubeRecv);

 FUNC_0(VAR_1);
}
