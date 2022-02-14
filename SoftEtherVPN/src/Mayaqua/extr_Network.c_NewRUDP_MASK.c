
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int tmp ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef size_t UCHAR ;
struct TYPE_17__ {char* SvcName; size_t RandPortId; scalar_t__ volatile* NatTGlobalUdpPort; int ServerMode; scalar_t__ Port; size_t* SvcNameHash; int Client_IcmpId; int Client_IcmpSeqNo; scalar_t__ Protocol; int NoNatTRegister; void* Thread; TYPE_1__* SockEvent; TYPE_2__* UdpSock; void* IpQueryThread; int * ProcRpcRecv; int * ProcInterrupts; int CurrentRegisterHostname; int NatT_SourceIpList; void* NatT_TranId; int NewSockQueue; void* NewSockConnectEvent; void* SendPacketList; void* TargetConnectedEvent; void* Param; int Lock; int Now; void* HaltEvent; void* SessionList; int Interrupt; void* NatT_SessionKey; } ;
struct TYPE_16__ {scalar_t__ LocalPort; int ref; } ;
struct TYPE_15__ {int ref; } ;
typedef TYPE_1__ SOCK_EVENT ;
typedef TYPE_2__ SOCK ;
typedef int RUDP_STACK_RPC_RECV_PROC ;
typedef int RUDP_STACK_INTERRUPTS_PROC ;
typedef TYPE_3__ RUDP_STACK ;
typedef int IP ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 () ;
 void* FUNC_7 () ;
 int FUNC_8 () ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_1__* FUNC_13 () ;
 void* FUNC_14 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_15 (int *,scalar_t__) ;
 TYPE_2__* FUNC_16 (scalar_t__,int,int *) ;
 TYPE_2__* FUNC_17 (int,int *,int ,size_t) ;
 int FUNC_18 (size_t*) ;
 int * VAR_2 ;
 int FUNC_19 (int ,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_20 () ;
 void* FUNC_21 () ;
 int VAR_8 ;
 int FUNC_22 (size_t*,...) ;
 int FUNC_23 (char*,int,char*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 () ;
 int FUNC_27 (char*) ;
 int FUNC_28 (void*) ;
 TYPE_3__* FUNC_29 (int) ;
 int FUNC_30 () ;
 scalar_t__* VAR_9 ;

RUDP_STACK *FUNC_31(bool VAR_10, char *VAR_11, RUDP_STACK_INTERRUPTS_PROC *VAR_12, RUDP_STACK_RPC_RECV_PROC *VAR_13, void *VAR_14, UINT VAR_15, SOCK *VAR_16, SOCK_EVENT *VAR_17, bool VAR_18, bool VAR_19, IP *VAR_20, volatile UINT *VAR_21, UCHAR VAR_22, IP *VAR_23)
{
 RUDP_STACK *VAR_24;
 char VAR_25[VAR_1];
 UCHAR VAR_26[VAR_8];
 UINT VAR_27;
 USHORT VAR_28;


 if (FUNC_2(VAR_11))
 {
  return ((void*)0);
 }

 FUNC_4();

 if (VAR_16 == ((void*)0))
 {
  if (VAR_10 == 0 && VAR_20 != ((void*)0))
  {
   VAR_16 = FUNC_15(VAR_20, VAR_15);
  }
  else
  {
   if (VAR_22 == 0)
   {
    VAR_16 = FUNC_16(VAR_15, 0, VAR_23);
   }
   else
   {
    VAR_16 = FUNC_17(0, VAR_23, 0, VAR_22);
   }
  }

  if (VAR_16 == ((void*)0))
  {
   return ((void*)0);
  }
 }
 else
 {
  FUNC_0(VAR_16->ref);
 }

 if (VAR_15 == 0)
 {
  VAR_15 = VAR_16->LocalPort;
 }

 if (VAR_22 != 0)
 {
  VAR_9[VAR_22] = VAR_15;
 }

 if (VAR_17 == ((void*)0))
 {
  VAR_17 = FUNC_13();
 }
 else
 {
  FUNC_0(VAR_17->ref);
 }

 VAR_24 = FUNC_29(sizeof(RUDP_STACK));

 VAR_24->NatT_SessionKey = FUNC_21();

 FUNC_23(VAR_24->SvcName, sizeof(VAR_24->SvcName), VAR_11);
 VAR_24->RandPortId = VAR_22;
 VAR_24->NatTGlobalUdpPort = VAR_21;
 VAR_24->ServerMode = VAR_10;
 VAR_24->Interrupt = FUNC_8();
 VAR_24->SessionList = FUNC_9(VAR_2);
 VAR_24->UdpSock = VAR_16;
 VAR_24->Port = VAR_15;
 VAR_24->SockEvent = VAR_17;
 VAR_24->HaltEvent = FUNC_7();
 VAR_24->Now = FUNC_26();
 VAR_24->Lock = FUNC_11();
 VAR_24->Param = VAR_14;
 VAR_24->TargetConnectedEvent = FUNC_7();
 VAR_24->SendPacketList = FUNC_9(((void*)0));
 VAR_24->NewSockConnectEvent = FUNC_7();
 VAR_24->NewSockQueue = FUNC_12();
 VAR_24->NatT_TranId = FUNC_21();

 VAR_24->NatT_SourceIpList = FUNC_10(((void*)0));

 FUNC_23(VAR_25, sizeof(VAR_25), VAR_24->SvcName);
 FUNC_27(VAR_25);
 FUNC_25(VAR_25);

 FUNC_22(VAR_24->SvcNameHash, VAR_25, FUNC_24(VAR_25));

 VAR_24->Client_IcmpId = (USHORT)(FUNC_20() % 65534 + 1);
 VAR_24->Client_IcmpSeqNo = (USHORT)(FUNC_20() % 65534 + 1);


 VAR_24->Protocol = VAR_7;
 if (VAR_24->Port == FUNC_5(VAR_0))
 {
  VAR_24->Protocol = VAR_6;





  VAR_27 = (UINT)FUNC_30();


  VAR_27 = FUNC_1(VAR_27);
  FUNC_22(VAR_26, &VAR_27, sizeof(UINT));

  VAR_28 = FUNC_18(VAR_26);
  if (VAR_28 == 0 || VAR_28 == 0xFFFF)
  {
   VAR_28 = 1;
  }

  VAR_24->Client_IcmpId = VAR_28;
 }
 else if (VAR_19)
 {
  VAR_24->Protocol = VAR_5;
 }

 if (VAR_24->ServerMode)
 {
  VAR_24->NoNatTRegister = VAR_18;

  if (VAR_24->Protocol == VAR_6 || VAR_24->Protocol == VAR_5)
  {

   VAR_24->NoNatTRegister = 1;
  }
 }

 if (1
  )
 {
  FUNC_19(VAR_24->CurrentRegisterHostname, sizeof(VAR_24->CurrentRegisterHostname), ((void*)0));
 }

 if (VAR_24->ServerMode)
 {
  VAR_24->ProcInterrupts = VAR_12;
  VAR_24->ProcRpcRecv = VAR_13;
 }

 if (VAR_24->ServerMode && VAR_24->NoNatTRegister == 0
  )
 {
  VAR_24->IpQueryThread = FUNC_14(VAR_3, VAR_24);
 }

 FUNC_3(VAR_24->UdpSock, VAR_24->SockEvent);

 VAR_24->Thread = FUNC_14(VAR_4, VAR_24);
 FUNC_28(VAR_24->Thread);

 return VAR_24;
}
