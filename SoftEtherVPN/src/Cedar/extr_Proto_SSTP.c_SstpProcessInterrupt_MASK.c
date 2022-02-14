
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_15__ {int Size; int Buf; } ;
struct TYPE_14__ {scalar_t__ Now; int FlushRecvTube; scalar_t__ Status; int Disconnecting; int Aborting; scalar_t__ NextSendEchoRequestTick; scalar_t__ LastRecvTick; int Disconnected; int DisconnectSent; int AbortSent; scalar_t__ AbortReceived; scalar_t__ DisconnectRecved; int TubeSend; int TubeRecv; int Interrupt; int RecvQueue; } ;
struct TYPE_13__ {int DataSize; int Data; } ;
typedef TYPE_1__ TUBEDATA ;
typedef TYPE_2__ SSTP_SERVER ;
typedef int SSTP_PACKET ;
typedef TYPE_3__ BLOCK ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ) ;
 TYPE_1__* FUNC_16 (int ) ;

void FUNC_17(SSTP_SERVER *VAR_8)
{

 if (VAR_8 == ((void*)0))
 {
  return;
 }

 VAR_8->Now = FUNC_14();

 VAR_8->FlushRecvTube = 0;


 while (1)
 {
  BLOCK *VAR_9 = FUNC_3(VAR_8->RecvQueue);
  SSTP_PACKET *VAR_10;

  if (VAR_9 == ((void*)0))
  {
   break;
  }

  VAR_10 = FUNC_11(VAR_9->Buf, VAR_9->Size);
  if (VAR_10 == ((void*)0))
  {

   FUNC_6(VAR_8);
  }
  else
  {

   FUNC_12(VAR_8, VAR_10);

   FUNC_8(VAR_10);
  }

  FUNC_1(VAR_9);
 }

 if (VAR_8->FlushRecvTube)
 {
  FUNC_15(VAR_8->TubeRecv);
 }


 while (1)
 {
  TUBEDATA *VAR_11 = FUNC_16(VAR_8->TubeSend);
  SSTP_PACKET *VAR_12;
  if (VAR_11 == ((void*)0))
  {
   break;
  }

  VAR_12 = FUNC_10(VAR_11->Data, VAR_11->DataSize);

  FUNC_13(VAR_8, VAR_12);

  FUNC_8(VAR_12);

  FUNC_2(VAR_11);
 }

 if (VAR_8->Status == VAR_6)
 {
  if (VAR_8->Disconnecting == 0 && VAR_8->Aborting == 0)
  {

   if (VAR_8->NextSendEchoRequestTick == 0 || VAR_8->NextSendEchoRequestTick <= VAR_8->Now)
   {
    UINT64 VAR_13 = (UINT64)(VAR_1 + FUNC_5() % (VAR_0 - VAR_1));
    SSTP_PACKET *VAR_14;

    VAR_8->NextSendEchoRequestTick = VAR_8->Now + VAR_13;
    FUNC_0(VAR_8->Interrupt, VAR_8->NextSendEchoRequestTick);

    VAR_14 = FUNC_9(VAR_5);

    FUNC_13(VAR_8, VAR_14);

    FUNC_8(VAR_14);
   }
  }
 }

 if ((VAR_8->LastRecvTick + (UINT64)VAR_7) <= VAR_8->Now)
 {

  FUNC_6(VAR_8);
  VAR_8->Disconnected = 1;
 }

 if (FUNC_4(VAR_8->TubeRecv) == 0 || FUNC_4(VAR_8->TubeSend) == 0)
 {

  FUNC_7(VAR_8);
 }

 if (VAR_8->Disconnecting)
 {

  if (VAR_8->DisconnectSent == 0)
  {

   SSTP_PACKET *VAR_15 = FUNC_9(VAR_8->DisconnectRecved ? VAR_4 : VAR_3);

   FUNC_13(VAR_8, VAR_15);

   FUNC_8(VAR_15);

   VAR_8->DisconnectSent = 1;
  }
 }

 if (VAR_8->Aborting)
 {

  if (VAR_8->AbortSent == 0)
  {

   SSTP_PACKET *VAR_16 = FUNC_9(VAR_2);

   FUNC_13(VAR_8, VAR_16);

   FUNC_8(VAR_16);

   VAR_8->AbortSent = 1;
  }
 }

 if (VAR_8->DisconnectSent && VAR_8->DisconnectRecved)
 {

  VAR_8->Disconnected = 1;
 }

 if (VAR_8->AbortSent && VAR_8->AbortReceived)
 {

  VAR_8->Disconnected = 1;
 }
}
