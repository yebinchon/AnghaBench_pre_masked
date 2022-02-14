
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef void* UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int member_0; } ;
struct TYPE_17__ {char* TmpBuf; int UdpIpQueryPacketSize; scalar_t__ UdpIpQueryPort; scalar_t__ MyPortByNatTServer; int MyPortByNatTServerChanged; int FatalError; scalar_t__ NextSendKeepAlive; scalar_t__ Now; int YourPortByNatTServerChanged; int FastDetect; int NoNatT; scalar_t__ NextPerformNatTTick; scalar_t__ UseSuperRelayQuery; scalar_t__ UseUdpIpQuery; scalar_t__ CommToNatT_NumFail; TYPE_8__* UdpSock; int RecvBlockQueue; int UdpIpQueryPacketData; TYPE_2__ UdpIpQueryHost; int * NatT_GetIpThread; int NatT_Lock; int NatT_IP; } ;
typedef TYPE_1__ UDP_ACCEL ;
typedef char UCHAR ;
struct TYPE_19__ {int IgnoreRecvErr; } ;
typedef TYPE_2__ IP ;
typedef int BUF ;
typedef int BLOCK ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int * FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (char*,scalar_t__,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_11 (TYPE_8__*,TYPE_2__*,scalar_t__*,char*,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (TYPE_8__*,TYPE_2__*,scalar_t__,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (TYPE_1__*,int) ;
 int * FUNC_15 (TYPE_1__*,char*,scalar_t__,TYPE_2__*,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int *,int ,int,int,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int ) ;
 scalar_t__ FUNC_19 () ;

void FUNC_20(UDP_ACCEL *VAR_13)
{
 IP VAR_14;
 UINT VAR_15 = 0;
 UCHAR *VAR_16;

 if (VAR_13 == ((void*)0))
 {
  return;
 }

 VAR_16 = VAR_13->TmpBuf;

 FUNC_7(VAR_13->NatT_Lock);
 {
  FUNC_1(&VAR_14, &VAR_13->NatT_IP, sizeof(IP));
 }
 FUNC_17(VAR_13->NatT_Lock);

 if (FUNC_6(&VAR_14) == 0)
 {

  if (VAR_13->NatT_GetIpThread != ((void*)0))
  {
   FUNC_18(VAR_13->NatT_GetIpThread, VAR_0);
   FUNC_12(VAR_13->NatT_GetIpThread);
   VAR_13->NatT_GetIpThread = ((void*)0);
  }
 }


 while (1)
 {
  IP VAR_17;
  UINT VAR_18;
  UINT VAR_19;

  VAR_19 = FUNC_11(VAR_13->UdpSock, &VAR_17, &VAR_18, VAR_16, VAR_7);

  if (VAR_19 != 0 && VAR_19 != VAR_2)
  {
   if (VAR_13->UseUdpIpQuery && VAR_13->UdpIpQueryPacketSize >= 8 && FUNC_0(&VAR_13->UdpIpQueryHost, &VAR_17) == 0 &&
    VAR_18 == VAR_13->UdpIpQueryPort)
   {

    IP VAR_20 = {0};
    UINT VAR_21 = 0;
    BUF *VAR_22 = FUNC_9(VAR_13->UdpIpQueryPacketData, VAR_13->UdpIpQueryPacketSize);


    FUNC_3(VAR_22);
   }
   else if (FUNC_6(&VAR_14) == 0 && FUNC_0(&VAR_14, &VAR_17) == 0 &&
    VAR_18 == VAR_12)
   {

    IP VAR_23;
    UINT VAR_24;

    if (FUNC_10(VAR_16, VAR_19, &VAR_23, &VAR_24))
    {
     if (VAR_24 >= 1 && VAR_24 <= 65535)
     {
      if (VAR_13->MyPortByNatTServer != VAR_24)
      {
       VAR_13->MyPortByNatTServer = VAR_24;
       VAR_13->MyPortByNatTServerChanged = 1;
       VAR_13->CommToNatT_NumFail = 0;

       FUNC_2("NAT-T: MyPort = %u\n", VAR_24);
      }
     }
    }
   }
   else
   {
    BLOCK *VAR_25 = FUNC_15(VAR_13, VAR_16, VAR_19, &VAR_17, VAR_18);
    if (VAR_25 != ((void*)0))
    {

     FUNC_5(VAR_13->RecvBlockQueue, VAR_25);
    }
   }
  }
  else
  {
   if (VAR_19 == 0)
   {
    if (VAR_13->UdpSock->IgnoreRecvErr == 0)
    {

     VAR_13->FatalError = 1;
     break;
    }

    if ((VAR_15++) >= VAR_1)
    {
     VAR_13->FatalError = 1;
     break;
    }
   }
   else
   {

    break;
   }
  }
 }


 if (VAR_13->NextSendKeepAlive == 0 || (VAR_13->NextSendKeepAlive <= VAR_13->Now) || VAR_13->YourPortByNatTServerChanged)
 {
  VAR_13->YourPortByNatTServerChanged = 0;

  if (FUNC_14(VAR_13, 0))
  {
   UINT VAR_26;

   if (VAR_13->FastDetect == 0)
   {
    VAR_26 = FUNC_19() % (VAR_3 - VAR_5) + VAR_5;
   }
   else
   {
    VAR_26 = FUNC_19() % (VAR_4 - VAR_6) + VAR_6;
   }

   VAR_13->NextSendKeepAlive = VAR_13->Now + (UINT64)VAR_26;



   FUNC_16(VAR_13, ((void*)0), 0, 0, 1000, 0);
  }
 }


 if (VAR_13->NoNatT == 0)
 {

  if (FUNC_6(&VAR_14) == 0)
  {
   if (FUNC_14(VAR_13, 1) == 0)
   {
    if (VAR_13->NextPerformNatTTick == 0 || (VAR_13->NextPerformNatTTick <= VAR_13->Now))
    {
     UINT VAR_27;
     UCHAR VAR_28 = 'B';

     VAR_13->CommToNatT_NumFail++;

     VAR_27 = VAR_9 * FUNC_8(VAR_13->CommToNatT_NumFail, VAR_8);



     if (VAR_13->MyPortByNatTServer != 0)
     {
      VAR_27 = FUNC_4(VAR_11, VAR_10);
     }

     VAR_13->NextPerformNatTTick = VAR_13->Now + (UINT64)VAR_27;
     FUNC_13(VAR_13->UdpSock, &VAR_14, VAR_12, &VAR_28, 1);


    }
   }
   else
   {
    VAR_13->NextPerformNatTTick = 0;
    VAR_13->CommToNatT_NumFail = 0;
   }
  }
 }
 else
 {

  if (VAR_13->UseUdpIpQuery || VAR_13->UseSuperRelayQuery)
  {
  }
 }
}
