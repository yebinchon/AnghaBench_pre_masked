
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int Lock; int Cedar; int SockEvent; int SendPacketList; int * Ipc; int * IpcConnectThread; } ;
typedef TYPE_1__ ETHERIP_SERVER ;
typedef int BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(ETHERIP_SERVER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "LE_STOP");

 if (VAR_0->IpcConnectThread != ((void*)0))
 {
  FUNC_10(VAR_0->IpcConnectThread);
 }

 if (VAR_0->Ipc != ((void*)0))
 {
  FUNC_4(VAR_0->Ipc);
 }

 for (VAR_1 = 0;VAR_1 < FUNC_6(VAR_0->SendPacketList);VAR_1++)
 {
  BLOCK *VAR_2 = FUNC_5(VAR_0->SendPacketList, VAR_1);

  FUNC_3(VAR_2);
 }

 FUNC_8(VAR_0->SendPacketList);

 FUNC_9(VAR_0->SockEvent);

 FUNC_7(VAR_0->Cedar);

 FUNC_0(VAR_0->Lock);

 FUNC_2(VAR_0);
}
