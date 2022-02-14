
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int TubeForDisconnect; int Cedar; int * SockEvent; int * Ipc; int Thread; } ;
typedef TYPE_1__ IPC_ASYNC ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(IPC_ASYNC *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_1->TubeForDisconnect);
 FUNC_7(VAR_1->Thread, VAR_0);
 FUNC_4(VAR_1->Thread);

 if (VAR_1->Ipc != ((void*)0))
 {
  FUNC_1(VAR_1->Ipc);
  VAR_1->Ipc = ((void*)0);
 }

 if (VAR_1->SockEvent != ((void*)0))
 {
  FUNC_3(VAR_1->SockEvent);
 }

 FUNC_2(VAR_1->Cedar);

 FUNC_5(VAR_1->TubeForDisconnect);
 FUNC_0(VAR_1);
}
