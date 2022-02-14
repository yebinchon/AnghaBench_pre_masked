
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_5__ {int Halt; int NoNatTRegister; size_t RandPortId; int Lock; int * TargetConnectedSock; int NewSockConnectEvent; int TargetConnectedEvent; int HaltEvent; int SockEvent; int * UdpSock; int Interrupt; int SendPacketList; int NewSockQueue; int NatT_SourceIpList; int SessionList; int * Thread; int * IpQueryThread; scalar_t__ ServerMode; } ;
typedef int SOCK ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_1__ RUDP_SOURCE_IP ;
typedef int RUDP_SESSION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 void* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int ) ;
 scalar_t__* VAR_1 ;

void FUNC_18(RUDP_STACK *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_2->Halt = 1;
 FUNC_15(VAR_2->HaltEvent);
 FUNC_16(VAR_2->SockEvent);

 if (VAR_2->ServerMode && VAR_2->NoNatTRegister == 0)
 {
  if (VAR_2->IpQueryThread != ((void*)0))
  {
   FUNC_17(VAR_2->IpQueryThread, VAR_0);
   FUNC_14(VAR_2->IpQueryThread);
  }
 }

 FUNC_17(VAR_2->Thread, VAR_0);
 FUNC_14(VAR_2->Thread);

 for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_2->SessionList);VAR_3++)
 {
  RUDP_SESSION *VAR_4 = FUNC_6(VAR_2->SessionList, VAR_3);

  FUNC_8(VAR_4);
 }

 FUNC_10(VAR_2->SessionList);

 for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_2->SendPacketList);VAR_3++)
 {
  UDPPACKET *VAR_5 = FUNC_6(VAR_2->SendPacketList, VAR_3);

  FUNC_4(VAR_5);
 }

 while (1)
 {
  SOCK *VAR_6 = FUNC_5(VAR_2->NewSockQueue);
  if (VAR_6 == ((void*)0))
  {
   break;
  }

  FUNC_1(VAR_6);
  FUNC_12(VAR_6);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_2->NatT_SourceIpList);VAR_3++)
 {
  RUDP_SOURCE_IP *VAR_7 = (RUDP_SOURCE_IP *)FUNC_6(VAR_2->NatT_SourceIpList, VAR_3);

  FUNC_2(VAR_7);
 }

 FUNC_10(VAR_2->NatT_SourceIpList);

 FUNC_11(VAR_2->NewSockQueue);

 FUNC_10(VAR_2->SendPacketList);

 FUNC_3(VAR_2->Interrupt);

 FUNC_1(VAR_2->UdpSock);
 FUNC_12(VAR_2->UdpSock);
 FUNC_13(VAR_2->SockEvent);
 FUNC_9(VAR_2->HaltEvent);
 FUNC_9(VAR_2->TargetConnectedEvent);

 FUNC_9(VAR_2->NewSockConnectEvent);

 FUNC_1(VAR_2->TargetConnectedSock);
 FUNC_12(VAR_2->TargetConnectedSock);

 FUNC_0(VAR_2->Lock);

 if (VAR_2->RandPortId != 0)
 {
  VAR_1[VAR_2->RandPortId] = 0;
 }

 FUNC_2(VAR_2);
}
