
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int NatDoCancelFlag; scalar_t__ Now; scalar_t__ NatUdpTimeout; void* TmpBuf; int SockEvent; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int IgnoreRecvErr; int IgnoreSendErr; scalar_t__ LocalPort; int LocalIP; } ;
struct TYPE_22__ {int Size; scalar_t__ Buf; scalar_t__ Param1; } ;
struct TYPE_21__ {scalar_t__ DestPort; int UdpSocketCreated; int ProxyDns; scalar_t__ DestIp; scalar_t__ DestIpProxy; scalar_t__ LastCommTime; scalar_t__ SrcIp; scalar_t__ SrcPort; TYPE_5__* Sock; scalar_t__ PublicPort; int UdpSendQueue; int UdpRecvQueue; scalar_t__ PublicIp; scalar_t__ DisconnectNow; } ;
struct TYPE_20__ {scalar_t__ SrcIP; scalar_t__ SrcPort; } ;
typedef TYPE_2__ NBTDG_HEADER ;
typedef TYPE_3__ NAT_ENTRY ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_4__ BLOCK ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 TYPE_4__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int * FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ VAR_0 ;
 void* FUNC_16 (scalar_t__) ;
 TYPE_4__* FUNC_17 (void*,scalar_t__,int ) ;
 TYPE_5__* FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (TYPE_5__*,int *,scalar_t__*,void*,int) ;
 int FUNC_20 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_21 (TYPE_5__*,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_22 (int *,scalar_t__) ;

bool FUNC_23(VH *VAR_5, NAT_ENTRY *VAR_6)
{
 void *VAR_7;
 UINT VAR_8;
 BLOCK *VAR_9;
 IP VAR_10;
 UINT VAR_11;
 UINT VAR_12 = 0;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 1;
 }

 VAR_12 = VAR_6->DestPort;

 if (VAR_6->DisconnectNow)
 {
  goto DISCONNECT;
 }

 if (VAR_6->UdpSocketCreated == 0)
 {

  VAR_6->Sock = FUNC_18(0);
  if (VAR_6->Sock == ((void*)0))
  {

   goto DISCONNECT;
  }
  else
  {
   VAR_6->PublicIp = FUNC_8(&VAR_6->Sock->LocalIP);
   VAR_6->PublicPort = VAR_6->Sock->LocalPort;

   FUNC_13(VAR_6->Sock, VAR_5->SockEvent);
   VAR_6->UdpSocketCreated = 1;
  }
 }

 VAR_7 = VAR_5->TmpBuf;
 if (VAR_6->ProxyDns == 0)
 {
  FUNC_22(&VAR_10, VAR_6->DestIp);
 }
 else
 {
  FUNC_22(&VAR_10, VAR_6->DestIpProxy);
 }

 VAR_11 = 0;


 while (1)
 {
  IP VAR_13;
  UINT VAR_14;
  VAR_8 = FUNC_19(VAR_6->Sock, &VAR_13, &VAR_14, VAR_7, 65536);

  if (VAR_8 == VAR_1)
  {

   break;
  }
  else if (VAR_8 == 0)
  {

   if (VAR_6->Sock->IgnoreRecvErr == 0)
   {

    goto DISCONNECT;
   }
   else
   {
    if ((VAR_11++) > VAR_0)
    {
     goto DISCONNECT;
    }
   }
  }
  else
  {

   if (FUNC_8(&VAR_13) == VAR_6->DestIp || VAR_6->DestIp == 0xFFFFFFFF || (FUNC_8(&VAR_13) == VAR_6->DestIpProxy && VAR_6->ProxyDns) && VAR_14 == VAR_6->DestPort)
   {

    void *VAR_15 = FUNC_16(VAR_8);
    FUNC_0(VAR_15, VAR_7, VAR_8);
    VAR_9 = FUNC_17(VAR_15, VAR_8, 0);

    if (VAR_9 != ((void*)0))
    {
     if (VAR_14 == VAR_4 || VAR_14 == VAR_3)
     {

      VAR_9->Param1 = FUNC_8(&VAR_13);
     }
    }

    FUNC_9(VAR_6->UdpRecvQueue, VAR_9);
    VAR_5->NatDoCancelFlag = 1;
    VAR_6->LastCommTime = VAR_5->Now;
   }
  }
 }


 while ((VAR_9 = FUNC_7(VAR_6->UdpSendQueue)))
 {
  UINT VAR_16;
  bool VAR_17 = 0;
  LIST *VAR_18 = ((void*)0);

  if (VAR_12 == VAR_2)
  {

   NBTDG_HEADER *VAR_19 = (NBTDG_HEADER *)VAR_9->Buf;

   if (VAR_19 != ((void*)0) && VAR_9->Size >= sizeof(NBTDG_HEADER))
   {
    if (VAR_19->SrcIP == VAR_6->SrcIp && FUNC_3(VAR_19->SrcPort) == VAR_6->SrcPort)
    {
     VAR_18 = FUNC_6();

     if (VAR_18 != ((void*)0))
     {
      VAR_17 = 1;
     }
    }
   }
  }

  if (VAR_17 == 0)
  {

   VAR_16 = FUNC_21(VAR_6->Sock, &VAR_10, VAR_12, VAR_9->Buf, VAR_9->Size);
  }
  else
  {


   UINT VAR_20;

   for (VAR_20 = 0;VAR_20 < FUNC_15(VAR_18);VAR_20++)
   {
    IP *VAR_21 = FUNC_14(VAR_18, VAR_20);

    if (FUNC_10(VAR_21) && FUNC_12(VAR_21) == 0 && FUNC_11(VAR_21) == 0)
    {
     NBTDG_HEADER *VAR_22 = (NBTDG_HEADER *)VAR_9->Buf;

     VAR_22->SrcIP = FUNC_8(VAR_21);
     VAR_22->SrcPort = FUNC_3(VAR_6->PublicPort);

     VAR_16 = FUNC_21(VAR_6->Sock, &VAR_10, VAR_12, VAR_9->Buf, VAR_9->Size);
    }
   }
  }

  if (VAR_18 != ((void*)0))
  {
   FUNC_5(VAR_18);
  }

  FUNC_4(VAR_9);
  if (VAR_16 == 0)
  {

   if (VAR_6->Sock->IgnoreSendErr == 0)
   {

    goto DISCONNECT;
   }
  }
  else
  {
   VAR_6->LastCommTime = VAR_5->Now;
  }
 }


 if ((VAR_6->LastCommTime + (UINT64)VAR_5->NatUdpTimeout) < VAR_5->Now || VAR_6->LastCommTime > VAR_5->Now)
 {

  goto DISCONNECT;
 }

 return 1;

DISCONNECT:

 if (VAR_6->UdpSocketCreated)
 {

  FUNC_2(VAR_6->Sock);
  FUNC_20(VAR_6->Sock);
  VAR_6->Sock = ((void*)0);
 }


 FUNC_1(VAR_5, VAR_6);

 return 0;
}
