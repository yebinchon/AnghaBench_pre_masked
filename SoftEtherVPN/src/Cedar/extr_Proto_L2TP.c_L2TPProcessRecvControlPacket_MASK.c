
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_31__ {int DataSize; int Data; } ;
struct TYPE_30__ {scalar_t__ SessionId; scalar_t__ MessageType; int AvpList; } ;
struct TYPE_29__ {int Halt; int Now; } ;
struct TYPE_28__ {int PseudowireType; scalar_t__ SessionId1; int SessionId2; int IsV3; int Established; int Disconnecting; scalar_t__ IsCiscoV3; } ;
struct TYPE_27__ {int Established; int Disconnecting; int WantToDisconnect; scalar_t__ TunnelId1; int IsYamahaV3; int TunnelId2; scalar_t__ IsV3; int SessionList; int LastHelloSent; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SESSION ;
typedef TYPE_3__ L2TP_SERVER ;
typedef TYPE_4__ L2TP_PACKET ;
typedef TYPE_5__ L2TP_AVP ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_5__* FUNC_7 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,scalar_t__) ;
 int * FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_2__* FUNC_11 (int ,int,int ,scalar_t__*,int) ;
 TYPE_4__* FUNC_12 (int ,int) ;
 TYPE_2__* FUNC_13 (TYPE_3__*,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (TYPE_3__*,TYPE_1__*,scalar_t__,TYPE_4__*) ;

void FUNC_17(L2TP_SERVER *VAR_16, L2TP_TUNNEL *VAR_17, L2TP_PACKET *VAR_18)
{

 if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0) || VAR_18 == ((void*)0))
 {
  return;
 }

 if (VAR_18->SessionId == 0)
 {
  if (VAR_18->MessageType == VAR_14 && VAR_16->Halt == 0)
  {

   if (VAR_17->Established == 0)
   {
    if (VAR_17->Disconnecting == 0)
    {
     VAR_17->Established = 1;
     VAR_17->LastHelloSent = VAR_16->Now;
    }
   }
  }

  if (VAR_17->Established)
  {
   if (VAR_18->MessageType == VAR_13 && VAR_17->WantToDisconnect == 0 && VAR_16->Halt == 0)
   {

    L2TP_AVP *VAR_19 = FUNC_7(VAR_18,
     (VAR_17->IsV3 ? VAR_7 : VAR_3));
    if (VAR_19 != ((void*)0) && VAR_19->DataSize == (VAR_17->IsV3 ? sizeof(UINT) : sizeof(USHORT)) && FUNC_10(VAR_19->Data, (VAR_17->IsV3 ? sizeof(UINT) : sizeof(USHORT))) == 0)
    {
     UINT VAR_20 = (VAR_17->IsV3 ? FUNC_14(VAR_19->Data) : FUNC_15(VAR_19->Data));


     if (FUNC_9(VAR_17, VAR_20) == ((void*)0))
     {

      L2TP_SESSION *VAR_21 = FUNC_13(VAR_16, VAR_17, VAR_20);

      if (VAR_21 != ((void*)0))
      {
       L2TP_PACKET *VAR_22;
       USHORT VAR_23;
       UINT VAR_24;


       if (VAR_17->IsV3)
       {
        VAR_21->PseudowireType = VAR_2;

        VAR_19 = FUNC_7(VAR_18, VAR_6);

        if (VAR_19 != ((void*)0) && VAR_19->DataSize == sizeof(USHORT))
        {
         VAR_24 = FUNC_15(VAR_19->Data);

         VAR_21->PseudowireType = VAR_24;
        }
       }

       FUNC_0(VAR_17->SessionList, VAR_21);
       FUNC_1("L2TP New Session: ID = %u/%u on Tunnel %u/%u\n", VAR_21->SessionId1, VAR_21->SessionId2,
        VAR_17->TunnelId1, VAR_17->TunnelId2);


       VAR_22 = FUNC_12(VAR_12, VAR_21->IsV3);


       if (VAR_21->IsV3 == 0)
       {
        VAR_23 = FUNC_4(VAR_21->SessionId2);
        FUNC_0(VAR_22->AvpList, FUNC_11(VAR_3, 1, 0, &VAR_23, sizeof(USHORT)));
       }
       else
       {
        VAR_24 = FUNC_5(VAR_21->SessionId2);
        FUNC_0(VAR_22->AvpList, FUNC_11(VAR_7, 1, 0, &VAR_24, sizeof(UINT)));

        if (VAR_21->IsCiscoV3)
        {
         FUNC_0(VAR_22->AvpList, FUNC_11(VAR_1, 1, VAR_9, &VAR_24, sizeof(UINT)));
        }
       }

       if (VAR_21->IsV3)
       {
        if (VAR_17->IsYamahaV3 == 0)
        {

         VAR_23 = FUNC_4(VAR_21->PseudowireType);
         FUNC_0(VAR_22->AvpList, FUNC_11(VAR_6, 1, 0, &VAR_23, sizeof(USHORT)));
        }

        if (VAR_21->IsCiscoV3)
        {
         FUNC_0(VAR_22->AvpList, FUNC_11(VAR_0, 1, VAR_9, &VAR_23, sizeof(USHORT)));
        }

        if (VAR_17->IsYamahaV3)
        {
         VAR_23 = FUNC_4(0x0003);
         FUNC_0(VAR_22->AvpList, FUNC_11(VAR_5, 1, 0, &VAR_23, sizeof(USHORT)));
        }
       }

       FUNC_16(VAR_16, VAR_17, VAR_20, VAR_22);

       FUNC_6(VAR_22);
      }
     }
    }
   }
   else if (VAR_18->MessageType == VAR_15)
   {

    L2TP_AVP *VAR_25 = FUNC_7(VAR_18, (VAR_17->IsV3 ? VAR_8 : VAR_4));
    if (VAR_25 != ((void*)0) && VAR_25->DataSize == (VAR_17->IsV3 ? sizeof(UINT) : sizeof(USHORT)))
    {
     UINT VAR_26 = (VAR_17->IsV3 ? FUNC_14(VAR_25->Data) : FUNC_15(VAR_25->Data));

     if (VAR_26 == VAR_17->TunnelId1)
     {

      FUNC_3(VAR_17);
     }
    }
   }
  }
 }
 else
 {

  L2TP_SESSION *VAR_27 = FUNC_8(VAR_17, VAR_18->SessionId);

  if (VAR_27 != ((void*)0))
  {
   if (VAR_27->Established == 0)
   {
    if (VAR_18->MessageType == VAR_11)
    {

     if (VAR_27->Disconnecting == 0)
     {
      VAR_27->Established = 1;
     }
    }
   }
   else
   {
    if (VAR_18->MessageType == VAR_10)
    {

     L2TP_AVP *VAR_28 = FUNC_7(VAR_18,
      (VAR_17->IsV3 ? VAR_7 : VAR_3));
     if (VAR_28 != ((void*)0) && VAR_28->DataSize == (VAR_17->IsV3 ? sizeof(UINT) : sizeof(USHORT)))
     {
      UINT VAR_29 = (VAR_17->IsV3 ? FUNC_14(VAR_28->Data) : FUNC_15(VAR_28->Data));

      if (VAR_29 == VAR_27->SessionId1)
      {

       FUNC_2(VAR_17, VAR_27);
      }
     }
    }
   }
  }
  else
  {
   FUNC_1("Session ID %u not found in Tunnel ID %u/%u\n", VAR_18->SessionId, VAR_17->TunnelId1, VAR_17->TunnelId2);
  }
 }
}
