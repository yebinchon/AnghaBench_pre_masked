
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int NatDoCancelFlag; scalar_t__ Now; void* TmpBuf; int SockEvent; scalar_t__ IcmpRawSocketOk; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_31__ {int IgnoreRecvErr; int IgnoreSendErr; int LocalPort; int LocalIP; } ;
struct TYPE_30__ {int Size; int Buf; int Ttl; } ;
struct TYPE_29__ {int DataSize; scalar_t__ Data; int IpAddress; scalar_t__ Ok; } ;
struct TYPE_28__ {scalar_t__ DstIP; } ;
struct TYPE_27__ {scalar_t__ DestPort; int UdpSocketCreated; scalar_t__ LastCommTime; scalar_t__ DestIp; int * IcmpThread; TYPE_6__* Sock; TYPE_20__* UdpSendQueue; int UdpRecvQueue; int SrcPort; TYPE_5__* IcmpResponseBlock; scalar_t__ IcmpTaskFinished; TYPE_5__* IcmpQueryBlock; int PublicPort; int PublicIp; scalar_t__ DisconnectNow; } ;
struct TYPE_26__ {int num_item; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef TYPE_3__ IPV4_HEADER ;
typedef int IP ;
typedef TYPE_4__ ICMP_RESULT ;
typedef TYPE_5__ BLOCK ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (void*,void*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_5__* FUNC_6 (TYPE_20__*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (int *,int ,int ,void*,scalar_t__) ;
 int FUNC_10 (int ,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_2 ;
 void* FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_14 (void*,scalar_t__,int ) ;
 int * FUNC_15 (int ,TYPE_2__*) ;
 TYPE_6__* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (TYPE_6__*,int *,scalar_t__*,void*,int) ;
 int FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_20 (TYPE_6__*,int *,scalar_t__,int ,int ) ;
 int FUNC_21 (TYPE_6__*,int ) ;
 int FUNC_22 (int *,scalar_t__) ;
 int FUNC_23 (int *,int ) ;

bool FUNC_24(VH *VAR_7, NAT_ENTRY *VAR_8)
{
 void *VAR_9;
 UINT VAR_10;
 BLOCK *VAR_11;
 IP VAR_12;
 UINT VAR_13 = 0;
 UINT VAR_14 = 0;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 1;
 }

 VAR_14 = VAR_8->DestPort;

 if (VAR_8->DisconnectNow)
 {
  goto DISCONNECT;
 }

 if (VAR_7->IcmpRawSocketOk)
 {

  if (VAR_8->UdpSocketCreated == 0)
  {

   VAR_8->Sock = FUNC_16(FUNC_12(VAR_1));
   if (VAR_8->Sock == ((void*)0))
   {

    goto DISCONNECT;
   }
   else
   {
    VAR_8->PublicIp = FUNC_7(&VAR_8->Sock->LocalIP);
    VAR_8->PublicPort = VAR_8->Sock->LocalPort;

    FUNC_11(VAR_8->Sock, VAR_7->SockEvent);
    VAR_8->UdpSocketCreated = 1;
   }
  }
 }
 else
 {

  if (VAR_8->IcmpThread == ((void*)0))
  {
   if (VAR_8->UdpSendQueue->num_item >= 1)
   {


    BLOCK *VAR_15 = FUNC_6(VAR_8->UdpSendQueue);

    VAR_8->IcmpQueryBlock = VAR_15;

    VAR_8->IcmpThread = FUNC_15(VAR_5, VAR_8);
   }
  }

  if (VAR_8->IcmpTaskFinished)
  {
   if (VAR_8->IcmpResponseBlock != ((void*)0))
   {

    VAR_11 = VAR_8->IcmpResponseBlock;
    VAR_8->IcmpResponseBlock = ((void*)0);
    FUNC_10(VAR_8->UdpRecvQueue, VAR_11);
    VAR_7->NatDoCancelFlag = 1;
    VAR_8->LastCommTime = VAR_7->Now;
   }
   else
   {

    goto DISCONNECT;
   }
  }


  if ((VAR_8->LastCommTime + (UINT64)VAR_4) < VAR_7->Now || VAR_8->LastCommTime > VAR_7->Now)
  {

   goto DISCONNECT;
  }

  return 1;
 }


 VAR_9 = VAR_7->TmpBuf;
 FUNC_22(&VAR_12, VAR_8->DestIp);


 while (1)
 {
  IP VAR_16;
  UINT VAR_17;
  VAR_10 = FUNC_17(VAR_8->Sock, &VAR_16, &VAR_17, VAR_9, 65536);

  if (VAR_10 == VAR_6)
  {

   break;
  }
  else if (VAR_10 == 0)
  {
   FUNC_2("ICMP ERROR\n");

   if (VAR_8->Sock->IgnoreRecvErr == 0)
   {

    goto DISCONNECT;
   }
   else
   {
    if ((VAR_13++) >= VAR_2)
    {
     goto DISCONNECT;
    }
   }
  }
  else
  {

   ICMP_RESULT *VAR_18 = FUNC_9(&VAR_12, VAR_8->SrcPort, 0, VAR_9, VAR_10);

   if (VAR_18 != ((void*)0))
   {
    if ((VAR_18->Ok && FUNC_0(&VAR_18->IpAddress, &VAR_12) == 0) ||
     (VAR_18->DataSize >= sizeof(IPV4_HEADER) && ((IPV4_HEADER *)VAR_18->Data)->DstIP == VAR_8->DestIp))
    {

     void *VAR_19 = FUNC_13(VAR_10);
     FUNC_1(VAR_19, VAR_9, VAR_10);
     VAR_11 = FUNC_14(VAR_19, VAR_10, 0);
     FUNC_10(VAR_8->UdpRecvQueue, VAR_11);
     VAR_7->NatDoCancelFlag = 1;
     VAR_8->LastCommTime = VAR_7->Now;
    }

    FUNC_8(VAR_18);
   }
  }
 }


 while ((VAR_11 = FUNC_6(VAR_8->UdpSendQueue)))
 {

  UINT VAR_20;

  FUNC_21(VAR_8->Sock, VAR_11->Ttl);
  VAR_20 = FUNC_20(VAR_8->Sock, &VAR_12, VAR_14, VAR_11->Buf, VAR_11->Size);

  FUNC_5(VAR_11);
  if (VAR_20 == 0)
  {
   FUNC_2("ICMP ERROR\n");

   if (VAR_8->Sock->IgnoreSendErr == 0)
   {

    goto DISCONNECT;
   }
  }
  else
  {
   VAR_8->LastCommTime = VAR_7->Now;
  }
 }


 if ((VAR_8->LastCommTime + (UINT64)VAR_3) < VAR_7->Now || VAR_8->LastCommTime > VAR_7->Now)
 {

  goto DISCONNECT;
 }

 return 1;

DISCONNECT:

 if (VAR_8->UdpSocketCreated)
 {

  FUNC_4(VAR_8->Sock);
  FUNC_18(VAR_8->Sock);
  VAR_8->Sock = ((void*)0);
 }


 if (VAR_8->IcmpThread != ((void*)0))
 {
  FUNC_23(VAR_8->IcmpThread, VAR_0);
  FUNC_19(VAR_8->IcmpThread);
  VAR_8->IcmpThread = ((void*)0);
 }


 FUNC_3(VAR_7, VAR_8);

 return 0;
}
