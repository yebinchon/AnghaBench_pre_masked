
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_4__ {int FlushList; int Cedar; int HaltCompletedEvent; int SockEvent; int TunnelList; int SendPacketList; int ThreadList; } ;
typedef int L2TP_TUNNEL ;
typedef TYPE_1__ L2TP_SERVER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(L2TP_SERVER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->ThreadList);

 for (VAR_1 = 0;VAR_1 < FUNC_6(VAR_0->SendPacketList);VAR_1++)
 {
  UDPPACKET *VAR_2 = FUNC_5(VAR_0->SendPacketList, VAR_1);

  FUNC_4(VAR_2);
 }

 FUNC_9(VAR_0->SendPacketList);

 for (VAR_1 = 0;VAR_1 < FUNC_6(VAR_0->TunnelList);VAR_1++)
 {
  L2TP_TUNNEL *VAR_3 = FUNC_5(VAR_0->TunnelList, VAR_1);

  FUNC_1(VAR_3);
 }

 FUNC_9(VAR_0->TunnelList);

 FUNC_10(VAR_0->SockEvent);

 FUNC_8(VAR_0->HaltCompletedEvent);

 FUNC_7(VAR_0->Cedar);

 FUNC_3(VAR_0->FlushList);

 FUNC_0(VAR_0);
}
