
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int str ;
struct TYPE_17__ {int NatDoCancelFlag; scalar_t__ Now; scalar_t__ NatTcpTimeout; scalar_t__ TmpBuf; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_21__ {int size; int pos; scalar_t__ p; } ;
struct TYPE_20__ {int RemoteHostname; } ;
struct TYPE_19__ {scalar_t__ size; } ;
struct TYPE_18__ {int TcpStatus; int TcpFinished; int SendAckNext; int TcpDisconnected; scalar_t__ TcpLastRecvAckTime; scalar_t__ LastCommTime; int TcpSendWindowSize; TYPE_3__* SendFifo; TYPE_4__* Sock; int test_TotalSent; int DestPort; int Id; int DestIp; TYPE_7__* RecvFifo; int TcpMakeConnectionSucceed; int * NatTcpConnectThread; int TcpMakeConnectionFailed; scalar_t__ DisconnectNow; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (char*,int ,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,int ) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,char*,int ,char*,char*,...) ;
 int FUNC_8 (TYPE_7__*,int *,int ) ;
 int FUNC_9 (TYPE_4__*,void*,int ,int) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int FUNC_11 (TYPE_4__*,int *,int ,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (TYPE_3__*,void*,int ) ;

bool FUNC_16(VH *VAR_6, NAT_ENTRY *VAR_7)
{
 char VAR_8[VAR_1];
 bool VAR_9 = 0;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return 0;
 }

 if (VAR_7->DisconnectNow)
 {
  goto DISCONNECT;
 }


 switch (VAR_7->TcpStatus)
 {
 case 130:
  if (VAR_7->NatTcpConnectThread == ((void*)0))
  {

   FUNC_0(VAR_6, VAR_7);
  }
  else
  {

   if (VAR_7->TcpMakeConnectionFailed || VAR_7->TcpMakeConnectionSucceed)
   {

    FUNC_14(VAR_7->NatTcpConnectThread, VAR_0);
    FUNC_10(VAR_7->NatTcpConnectThread);
    VAR_7->NatTcpConnectThread = ((void*)0);

    if (VAR_7->TcpMakeConnectionSucceed)
    {

     VAR_7->TcpStatus = 131;
     FUNC_5(VAR_8, sizeof(VAR_8), VAR_7->DestIp);
     FUNC_7(VAR_6, "LH_NAT_TCP_SUCCEED", VAR_7->Id, VAR_7->Sock->RemoteHostname, VAR_8, VAR_7->DestPort);
    }
    else
    {

     VAR_7->TcpStatus = 128;
     FUNC_5(VAR_8, sizeof(VAR_8), VAR_7->DestIp);
     FUNC_7(VAR_6, "LH_NAT_TCP_FAILED", VAR_7->Id, VAR_8, VAR_7->DestPort);
    }
    VAR_6->NatDoCancelFlag = 1;
   }
  }
  break;

 case 131:
  break;

 case 128:
  break;

 case 129:
  {
   UINT VAR_10 = 0;


   while (VAR_7->RecvFifo->size > 0)
   {
    UINT VAR_11 = FUNC_11(VAR_7->Sock, ((UCHAR *)VAR_7->RecvFifo->p) + VAR_7->RecvFifo->pos,
     VAR_7->RecvFifo->size, 0);
    if (VAR_11 == 0)
    {

     VAR_7->TcpFinished = 1;
     VAR_6->NatDoCancelFlag = 1;
     break;
    }
    else if (VAR_11 == VAR_4)
    {

     break;
    }
    else
    {

     FUNC_8(VAR_7->RecvFifo, ((void*)0), VAR_11);
     VAR_7->SendAckNext = 1;

     if (0)
     {
      IP VAR_12;

      VAR_7->test_TotalSent += VAR_11;

      FUNC_13(&VAR_12, VAR_7->DestIp);
      FUNC_1("TCP %u: %r:%u %u\n", VAR_7->Id, &VAR_12, VAR_7->DestPort, (UINT)VAR_7->test_TotalSent);
     }
    }
   }

   VAR_10 = FUNC_4(VAR_7->SendFifo);


   while (1)
   {
    void *VAR_13 = (void *)VAR_6->TmpBuf;
    UINT VAR_14 = 0;
    UINT VAR_15;

    if (VAR_7->SendFifo->size < VAR_2)
    {

     VAR_14 = FUNC_6(VAR_2 - VAR_7->SendFifo->size, VAR_3);
    }
    if (VAR_14 == 0)
    {
     FUNC_12(VAR_7->Sock);
     break;
    }
    VAR_15 = FUNC_9(VAR_7->Sock, VAR_13, VAR_14, 0);
    if (VAR_15 == 0)
    {

     VAR_7->TcpFinished = 1;
     VAR_6->NatDoCancelFlag = 1;
     if (VAR_7->TcpDisconnected == 0)
     {
      FUNC_3(VAR_7->Sock);
      VAR_7->TcpDisconnected = 1;
     }
     break;
    }
    else if (VAR_15 == VAR_4)
    {

     break;
    }
    else
    {

     FUNC_15(VAR_7->SendFifo, VAR_13, VAR_15);
     VAR_6->NatDoCancelFlag = 1;
    }
   }

   if (VAR_10 == 0 && FUNC_4(VAR_7->SendFifo) != 0)
   {


    VAR_7->TcpLastRecvAckTime = VAR_6->Now;
   }




   if ((VAR_7->TcpLastRecvAckTime + (UINT64)VAR_5) < VAR_6->Now)
   {
    if (FUNC_4(VAR_7->SendFifo) != 0 && VAR_7->TcpSendWindowSize != 0)
    {
     VAR_9 = 1;
    }
   }
  }
  break;

 }


 if ((VAR_7->LastCommTime + (UINT64)VAR_6->NatTcpTimeout) < VAR_6->Now || VAR_7->LastCommTime > VAR_6->Now)
 {
  VAR_9 = 1;
 }

 if (VAR_9)
 {

  VAR_7->TcpStatus = 128;
  VAR_6->NatDoCancelFlag = 1;
 }

 return 1;

DISCONNECT:
 FUNC_2(VAR_6, VAR_7);

 return 0;
}
