
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_9__ ;
typedef struct TYPE_54__ TYPE_8__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_3__ ;
typedef struct TYPE_49__ TYPE_39__ ;
typedef struct TYPE_48__ TYPE_2__ ;
typedef struct TYPE_47__ TYPE_1__ ;


typedef int error_data ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_55__ {int Size; int Buf; } ;
struct TYPE_54__ {scalar_t__* Buf; int Size; } ;
struct TYPE_53__ {int Ns; int TunnelId; int * AvpList; } ;
struct TYPE_52__ {scalar_t__ NextSendTick; int Buf; } ;
struct TYPE_51__ {int Halting; scalar_t__ Now; int HaltCompleted; int ThreadList; int * IkeServer; int HaltCompletedEvent; int * TunnelList; int FlushList; scalar_t__ Halt; } ;
struct TYPE_50__ {scalar_t__ LastRecvTick; int Timedout; int TunnelId2; int Established; scalar_t__ LastHelloSent; int IsV3; int Disconnecting; int SessionId2; scalar_t__ DisconnectTimeout; int StateChanged; int NextNs; int TunnelId1; int * SendQueue; int * SessionList; scalar_t__ IsCiscoV3; scalar_t__ WantToDisconnect; int SessionId1; TYPE_1__* TubeRecv; TYPE_39__* EtherIP; int TubeSend; scalar_t__ HasThread; } ;
struct TYPE_49__ {int * SendPacketList; } ;
struct TYPE_48__ {int DataSize; int Data; } ;
struct TYPE_47__ {scalar_t__ IntParam1; scalar_t__ IntParam2; } ;
typedef TYPE_2__ TUBEDATA ;
typedef int LIST ;
typedef TYPE_3__ L2TP_TUNNEL ;
typedef TYPE_3__ L2TP_SESSION ;
typedef TYPE_5__ L2TP_SERVER ;
typedef TYPE_6__ L2TP_QUEUE ;
typedef TYPE_7__ L2TP_PACKET ;
typedef TYPE_8__ BUF ;
typedef TYPE_9__ BLOCK ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_2 (char*,int ,int,...) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_39__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_9__*) ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_5__*,scalar_t__) ;
 int FUNC_20 (TYPE_5__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* FUNC_21 (int *,scalar_t__) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 TYPE_3__* FUNC_24 (int ,int,int ,scalar_t__*,int) ;
 TYPE_8__* FUNC_25 () ;
 TYPE_7__* FUNC_26 (int ,int) ;
 int * FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (TYPE_5__*,TYPE_3__*,int ,TYPE_7__*) ;
 int FUNC_30 (TYPE_5__*,TYPE_3__*,TYPE_6__*) ;
 int FUNC_31 (TYPE_5__*,TYPE_3__*,TYPE_3__*,int ,int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (TYPE_5__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_2__* FUNC_34 (int ) ;
 int FUNC_35 (TYPE_8__*,scalar_t__*,int) ;
 int FUNC_36 (scalar_t__*,int) ;
 TYPE_6__* FUNC_37 (int) ;

void FUNC_38(L2TP_SERVER *VAR_17)
{
 UINT VAR_18, VAR_19;
 LIST *VAR_20 = ((void*)0);

 if (VAR_17 == ((void*)0))
 {
  return;
 }

 if (VAR_17->Halt)
 {
  if (VAR_17->Halting == 0)
  {
   VAR_17->Halting = 1;


   for (VAR_18 = 0;VAR_18 < FUNC_22(VAR_17->TunnelList);VAR_18++)
   {
    L2TP_TUNNEL *VAR_21 = FUNC_21(VAR_17->TunnelList, VAR_18);

    FUNC_6(VAR_21);
   }
  }
 }


 FUNC_10(VAR_17->FlushList);


 for (VAR_18 = 0;VAR_18 < FUNC_22(VAR_17->TunnelList);VAR_18++)
 {
  L2TP_TUNNEL *VAR_22 = FUNC_21(VAR_17->TunnelList, VAR_18);
  LIST *VAR_23 = ((void*)0);

  if ((VAR_17->Now >= (VAR_22->LastRecvTick + (UINT64)VAR_16)) && VAR_22->Timedout == 0)
  {

   VAR_22->Timedout = 1;

   FUNC_2("L2TP Tunnel %u/%u Timed out.\n", VAR_22->TunnelId1, VAR_22->TunnelId2);
   FUNC_6(VAR_22);
  }

  if (VAR_22->Established && (VAR_17->Now >= (VAR_22->LastHelloSent + (UINT64)VAR_9)))
  {
   if (FUNC_22(VAR_22->SendQueue) <= VAR_10)
   {
    L2TP_PACKET *VAR_24 = FUNC_26(VAR_12, VAR_22->IsV3);


    VAR_22->LastHelloSent = VAR_17->Now;


    FUNC_29(VAR_17, VAR_22, 0, VAR_24);

    FUNC_13(VAR_24);

    FUNC_19(VAR_17, VAR_22->LastHelloSent + (UINT64)VAR_9);
   }
  }


  for (VAR_19 = 0;VAR_19 < FUNC_22(VAR_22->SessionList);VAR_19++)
  {
   L2TP_SESSION *VAR_25 = FUNC_21(VAR_22->SessionList, VAR_19);

   if (VAR_25->HasThread)
   {

    while (1)
    {
     TUBEDATA *VAR_26 = FUNC_34(VAR_25->TubeSend);

     if (VAR_26 == ((void*)0))
     {
      break;
     }

     FUNC_31(VAR_17, VAR_22, VAR_25, VAR_26->Data, VAR_26->DataSize);

     FUNC_17(VAR_26);
    }

    if (FUNC_18(VAR_25->TubeSend) == 0)
    {

     FUNC_5(VAR_22, VAR_25);
    }
   }

   if (VAR_25->IsV3)
   {
    if (VAR_25->EtherIP != ((void*)0))
    {
     UINT VAR_27;

     FUNC_20(VAR_17, VAR_25);


     FUNC_9(VAR_25->EtherIP);


     for (VAR_27 = 0;VAR_27 < FUNC_22(VAR_25->EtherIP->SendPacketList);VAR_27++)
     {
      BLOCK *VAR_28 = FUNC_21(VAR_25->EtherIP->SendPacketList, VAR_27);

      FUNC_31(VAR_17, VAR_22, VAR_25, VAR_28->Buf, VAR_28->Size);

      FUNC_11(VAR_28);
     }

     FUNC_4(VAR_25->EtherIP->SendPacketList);
    }
   }

   if (VAR_25->WantToDisconnect && VAR_25->Disconnecting == 0)
   {

    UCHAR VAR_29[4];
    USHORT VAR_30;
    UINT VAR_31;
    UINT VAR_32 = 0, VAR_33 = 0;


    L2TP_PACKET *VAR_34 = FUNC_26(VAR_11, VAR_25->IsV3);

    if (VAR_25->TubeRecv != ((void*)0))
    {
     VAR_32 = VAR_25->TubeRecv->IntParam1;
     VAR_33 = VAR_25->TubeRecv->IntParam2;
    }


    if (VAR_25->IsV3 == 0)
    {
     VAR_30 = FUNC_7(VAR_25->SessionId2);
     FUNC_0(VAR_34->AvpList, FUNC_24(VAR_2, 1, 0,
      &VAR_30, sizeof(USHORT)));
    }
    else
    {
     VAR_31 = FUNC_7(VAR_25->SessionId2);
     FUNC_0(VAR_34->AvpList, FUNC_24(VAR_6, 1, 0,
      &VAR_31, sizeof(UINT)));

     if (VAR_22->IsCiscoV3)
     {
      FUNC_0(VAR_34->AvpList, FUNC_24(VAR_0, 1, VAR_8,
       &VAR_31, sizeof(UINT)));
     }
    }


    FUNC_36(VAR_29, sizeof(VAR_29));
    VAR_29[1] = 0x03;
    FUNC_0(VAR_34->AvpList, FUNC_24(VAR_5, 1, 0,
     VAR_29, sizeof(VAR_29)));

    if (VAR_32 != 0)
    {

     BUF *VAR_35 = FUNC_25();
     UCHAR VAR_36;
     USHORT VAR_37;


     VAR_37 = FUNC_7(VAR_32);
     FUNC_35(VAR_35, &VAR_37, sizeof(USHORT));


     VAR_37 = FUNC_7(0xc021);
     FUNC_35(VAR_35, &VAR_37, sizeof(USHORT));


     VAR_36 = (UCHAR)VAR_33;
     FUNC_35(VAR_35, &VAR_36, sizeof(UCHAR));

     FUNC_0(VAR_34->AvpList, FUNC_24(VAR_4, 0, 0,
      VAR_35->Buf, VAR_35->Size));

     FUNC_12(VAR_35);
    }

    FUNC_29(VAR_17, VAR_22, VAR_25->SessionId1, VAR_34);

    FUNC_13(VAR_34);


    FUNC_2("L2TP Session %u/%u on Tunnel %u/%u Disconnected.\n", VAR_25->SessionId1, VAR_25->SessionId2,
     VAR_22->TunnelId1, VAR_22->TunnelId2);
    VAR_25->Disconnecting = 1;
    VAR_25->Established = 0;
    VAR_25->DisconnectTimeout = VAR_17->Now + (UINT64)VAR_15;


    FUNC_33(VAR_17, VAR_22, VAR_25);

    FUNC_19(VAR_17, VAR_25->DisconnectTimeout);
   }

   if (VAR_25->Disconnecting && ((VAR_17->Now >= VAR_25->DisconnectTimeout) || FUNC_22(VAR_22->SendQueue) == 0))
   {


    if (VAR_23 == ((void*)0))
    {
     VAR_23 = FUNC_27(((void*)0));
    }

    FUNC_0(VAR_23, VAR_25);
   }
  }

  if (VAR_23 != ((void*)0))
  {

   for (VAR_19 = 0;VAR_19 < FUNC_22(VAR_23);VAR_19++)
   {
    L2TP_SESSION *VAR_38 = FUNC_21(VAR_23, VAR_19);

    FUNC_2("L2TP Session %u/%u on Tunnel %u/%u Cleaned up.\n", VAR_38->SessionId1, VAR_38->SessionId2,
     VAR_22->TunnelId1, VAR_22->TunnelId2);

    FUNC_15(VAR_38);
    FUNC_3(VAR_22->SessionList, VAR_38);
   }

   FUNC_28(VAR_23);
  }

  if (VAR_22->WantToDisconnect && VAR_22->Disconnecting == 0)
  {

   USHORT VAR_39[4];
   USHORT VAR_40;
   UINT VAR_41;

   L2TP_PACKET *VAR_42 = FUNC_26(VAR_13, VAR_22->IsV3);


   if (VAR_22->IsV3 == 0)
   {
    VAR_40 = FUNC_7(VAR_22->TunnelId2);
    FUNC_0(VAR_42->AvpList, FUNC_24(VAR_3, 1, 0,
     &VAR_40, sizeof(USHORT)));
   }
   else
   {
    VAR_41 = FUNC_8(VAR_22->TunnelId2);
    FUNC_0(VAR_42->AvpList, FUNC_24(VAR_7, 1, 0,
     &VAR_41, sizeof(UINT)));

    if (VAR_22->IsCiscoV3)
    {
     FUNC_0(VAR_42->AvpList, FUNC_24(VAR_1, 1, VAR_8,
      &VAR_41, sizeof(UINT)));
    }
   }


   FUNC_36(VAR_39, sizeof(VAR_39));
   VAR_39[1] = 0x06;
   FUNC_0(VAR_42->AvpList, FUNC_24(VAR_5, 1, 0,
    VAR_39, sizeof(VAR_39)));

   FUNC_29(VAR_17, VAR_22, 0, VAR_42);

   FUNC_13(VAR_42);

   FUNC_2("L2TP Tunnel %u/%u is Disconnected.\n", VAR_22->TunnelId1, VAR_22->TunnelId2);
   VAR_22->Disconnecting = 1;
   VAR_22->Established = 0;
   VAR_22->DisconnectTimeout = VAR_17->Now + (UINT64)VAR_15;
   FUNC_19(VAR_17, VAR_22->DisconnectTimeout);
  }

  if (VAR_22->Disconnecting && (((FUNC_22(VAR_22->SendQueue) == 0) && FUNC_22(VAR_22->SessionList) == 0) || (VAR_17->Now >= VAR_22->DisconnectTimeout)))
  {


   if (VAR_20 == ((void*)0))
   {
    VAR_20 = FUNC_27(((void*)0));
   }

   FUNC_0(VAR_20, VAR_22);
  }
 }

 if (VAR_20 != ((void*)0))
 {
  for (VAR_18 = 0;VAR_18 < FUNC_22(VAR_20);VAR_18++)
  {
   L2TP_TUNNEL *VAR_43 = FUNC_21(VAR_20, VAR_18);

   FUNC_2("L2TP Tunnel %u/%u Cleaned up.\n", VAR_43->TunnelId1, VAR_43->TunnelId2);

   FUNC_16(VAR_43);
   FUNC_3(VAR_17->TunnelList, VAR_43);
  }

  FUNC_28(VAR_20);
 }


 for (VAR_18 = 0;VAR_18 < FUNC_22(VAR_17->TunnelList);VAR_18++)
 {
  L2TP_TUNNEL *VAR_44 = FUNC_21(VAR_17->TunnelList, VAR_18);
  UINT VAR_45;

  if (FUNC_22(VAR_44->SendQueue) >= 1)
  {

   for (VAR_45 = 0;VAR_45 < FUNC_22(VAR_44->SendQueue);VAR_45++)
   {
    L2TP_QUEUE *VAR_46 = FUNC_21(VAR_44->SendQueue, VAR_45);

    if (VAR_17->Now >= VAR_46->NextSendTick)
    {
     VAR_46->NextSendTick = VAR_17->Now + (UINT64)VAR_14;

     FUNC_19(VAR_17, VAR_46->NextSendTick);

     FUNC_30(VAR_17, VAR_44, VAR_46);
    }
   }
  }
  else
  {

   if (VAR_44->StateChanged)
   {

    L2TP_QUEUE *VAR_47 = FUNC_37(sizeof(L2TP_QUEUE));
    L2TP_PACKET *VAR_48 = FUNC_26(0, VAR_44->IsV3);

    VAR_48->TunnelId = VAR_44->TunnelId1;
    VAR_48->Ns = VAR_44->NextNs;
    VAR_47->Buf = FUNC_1(VAR_48, VAR_44);

    FUNC_30(VAR_17, VAR_44, VAR_47);

    FUNC_14(VAR_47);
    FUNC_13(VAR_48);
   }
  }

  VAR_44->StateChanged = 0;
 }

 if (VAR_17->Halting)
 {
  if (FUNC_22(VAR_17->TunnelList) == 0)
  {

   if (VAR_17->HaltCompleted == 0)
   {
    VAR_17->HaltCompleted = 1;

    FUNC_32(VAR_17->HaltCompletedEvent);
   }
  }
 }


 if (VAR_17->IkeServer == ((void*)0))
 {
  FUNC_23(VAR_17->ThreadList);

 }
}
