
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_28__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int data ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_36__ {scalar_t__ CurrentExpiresSoftTick_CtoS; scalar_t__ CurrentExpiresSoftTick_StoC; scalar_t__ CurrentNumHealtyIPsecSA_CtoS; scalar_t__ CurrentNumHealtyIPsecSA_StoC; scalar_t__ ServerPort; int StartQuickModeAsSoon; scalar_t__ LastQuickModeStartTick; scalar_t__ NeedQmBeginTick; scalar_t__ LastCommTick; scalar_t__ NextKeepAliveSendTick; scalar_t__ NextDpdSendTick; int DpdSeqNo; TYPE_5__* CurrentIkeSa; int ClientPort; int ClientIP; int ServerIP; int * EtherIP; int * L2TP; TYPE_3__* CurrentIpSecSaSend; TYPE_3__* CurrentIpSecSaRecv; scalar_t__ Deleting; scalar_t__ CurrentNumEstablishedIPsecSA_CtoS; scalar_t__ CurrentNumEstablishedIPsecSA_StoC; } ;
struct TYPE_32__ {scalar_t__ DpdRfc3706; } ;
struct TYPE_35__ {scalar_t__ NextSendTick; scalar_t__ NumResends; int Established; scalar_t__ LastCommTick; int ResponderCookie; int InitiatorCookie; TYPE_2__ Caps; scalar_t__ Deleting; TYPE_6__* IkeClient; TYPE_28__* SendBuffer; } ;
struct TYPE_34__ {scalar_t__ Now; int StateHasChanged; int ThreadList; int Interrupts; int ClientList; int IPsecSaList; int IkeSaList; } ;
struct TYPE_33__ {scalar_t__ NextSendTick; scalar_t__ NumResends; int Established; int Deleting; scalar_t__ ExpiresSoftTick; scalar_t__ LastCommTick; TYPE_1__* PairIPsecSa; scalar_t__ ServerToClient; TYPE_6__* IkeClient; TYPE_28__* SendBuffer; } ;
struct TYPE_31__ {int* Buf; int Size; } ;
struct TYPE_30__ {scalar_t__ LastCommTick; } ;
typedef TYPE_3__ IPSECSA ;
typedef TYPE_4__ IKE_SERVER ;
typedef TYPE_5__ IKE_SA ;
typedef TYPE_6__ IKE_CLIENT ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,TYPE_6__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_28__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*,int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*,int *) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int *,scalar_t__,int *,int ,int ,int) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 void* FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_17 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_21 (TYPE_4__*,TYPE_6__*) ;
 int VAR_10 ;
 int FUNC_22 (int*,int) ;

void FUNC_23(IKE_SERVER *VAR_11)
{
 UINT VAR_12;

 if (VAR_11 == ((void*)0))
 {
  return;
 }

 for (VAR_12 = 0;VAR_12 < FUNC_13(VAR_11->ClientList);VAR_12++)
 {
  IKE_CLIENT *VAR_13 = FUNC_12(VAR_11->ClientList, VAR_12);

  VAR_13->CurrentExpiresSoftTick_CtoS = 0;
  VAR_13->CurrentExpiresSoftTick_StoC = 0;
  VAR_13->CurrentNumEstablishedIPsecSA_CtoS = 0;
  VAR_13->CurrentNumEstablishedIPsecSA_StoC = 0;
  VAR_13->CurrentNumHealtyIPsecSA_CtoS = 0;
  VAR_13->CurrentNumHealtyIPsecSA_StoC = 0;
 }


 for (VAR_12 = 0;VAR_12 < FUNC_13(VAR_11->IkeSaList);VAR_12++)
 {
  IKE_SA *VAR_14 = FUNC_12(VAR_11->IkeSaList, VAR_12);

  if (VAR_14->SendBuffer != ((void*)0))
  {
   if (VAR_11->Now >= VAR_14->NextSendTick)
   {
    IKE_CLIENT *VAR_15 = VAR_14->IkeClient;

    FUNC_10(VAR_11, VAR_8, &VAR_15->ServerIP, VAR_15->ServerPort, &VAR_15->ClientIP, VAR_15->ClientPort,
     FUNC_1(VAR_14->SendBuffer->Buf, VAR_14->SendBuffer->Size), VAR_14->SendBuffer->Size);

    VAR_14->NextSendTick += (UINT64)(VAR_4);

    FUNC_0(VAR_11->Interrupts, VAR_14->NextSendTick);

    if (VAR_14->NumResends != 0)
    {
     VAR_14->NumResends--;
     if (VAR_14->NumResends == 0)
     {
      VAR_14->NextSendTick = 0;
      FUNC_4(VAR_14->SendBuffer);
      VAR_14->SendBuffer = ((void*)0);
     }
    }
   }
  }


  if (VAR_14->IkeClient == ((void*)0) || (VAR_14->IkeClient->CurrentIkeSa != VAR_14))
  {

   if (VAR_14->Established == 0)
   {

    if ((VAR_14->LastCommTick + (UINT64)VAR_6) <= VAR_11->Now)
    {
     VAR_10;
     FUNC_18(VAR_11, VAR_14);
    }
   }
   else
   {

    if ((VAR_14->LastCommTick + (UINT64)VAR_5) <= VAR_11->Now)
    {
     VAR_10;
     FUNC_18(VAR_11, VAR_14);
    }
   }
  }
 }


 for (VAR_12 = 0;VAR_12 < FUNC_13(VAR_11->IPsecSaList);VAR_12++)
 {
  IPSECSA *VAR_16 = FUNC_12(VAR_11->IPsecSaList, VAR_12);
  IKE_CLIENT *VAR_17 = VAR_16->IkeClient;

  if (VAR_16->SendBuffer != ((void*)0))
  {
   if (VAR_11->Now >= VAR_16->NextSendTick)
   {
    IKE_CLIENT *VAR_18 = VAR_16->IkeClient;

    FUNC_10(VAR_11, VAR_8, &VAR_18->ServerIP, VAR_18->ServerPort, &VAR_18->ClientIP, VAR_18->ClientPort,
     FUNC_1(VAR_16->SendBuffer->Buf, VAR_16->SendBuffer->Size), VAR_16->SendBuffer->Size);

    VAR_16->NextSendTick += (UINT64)(VAR_4);

    FUNC_0(VAR_11->Interrupts, VAR_16->NextSendTick);

    if (VAR_16->NumResends != 0)
    {
     VAR_16->NumResends--;

     if (VAR_16->NumResends == 0)
     {
      VAR_16->NextSendTick = 0;
      FUNC_4(VAR_16->SendBuffer);
      VAR_16->SendBuffer = ((void*)0);
     }
    }
   }
  }

  if (VAR_16->Established && VAR_16->Deleting == 0 && VAR_17 != ((void*)0))
  {

   if (VAR_16->ServerToClient)
   {
    VAR_17->CurrentExpiresSoftTick_StoC = FUNC_14(VAR_17->CurrentExpiresSoftTick_StoC, VAR_16->ExpiresSoftTick);
    VAR_17->CurrentNumEstablishedIPsecSA_StoC++;

    if (VAR_16->ExpiresSoftTick == 0 || VAR_16->ExpiresSoftTick > VAR_11->Now)
    {
     VAR_17->CurrentNumHealtyIPsecSA_StoC++;
    }
   }
   else
   {
    VAR_17->CurrentExpiresSoftTick_CtoS = FUNC_14(VAR_17->CurrentExpiresSoftTick_CtoS, VAR_16->ExpiresSoftTick);
    VAR_17->CurrentNumEstablishedIPsecSA_CtoS++;

    if (VAR_16->ExpiresSoftTick == 0 || VAR_16->ExpiresSoftTick > VAR_11->Now)
    {
     VAR_17->CurrentNumHealtyIPsecSA_CtoS++;
    }
   }
  }


  if (VAR_16->IkeClient == ((void*)0) || (VAR_16->IkeClient->CurrentIpSecSaRecv != VAR_16 && VAR_16->IkeClient->CurrentIpSecSaSend != VAR_16))
  {

   UINT64 VAR_19 = VAR_16->LastCommTick;

   if (VAR_16->ServerToClient && VAR_16->PairIPsecSa != ((void*)0))
   {
    VAR_19 = VAR_16->PairIPsecSa->LastCommTick;
   }

   if (VAR_16->Established == 0)
   {

    if ((VAR_19 + (UINT64)VAR_6) <= VAR_11->Now)
    {
     VAR_10;
     FUNC_16(VAR_11, VAR_16);
    }
   }
   else
   {

    if ((VAR_19 + (UINT64)VAR_5) <= VAR_11->Now)
    {
     VAR_10;
     FUNC_16(VAR_11, VAR_16);
    }
   }
  }
 }


 for (VAR_12 = 0;VAR_12 < FUNC_13(VAR_11->ClientList);VAR_12++)
 {
  IKE_CLIENT *VAR_20 = FUNC_12(VAR_11->ClientList, VAR_12);
  UINT64 VAR_21;
  UCHAR VAR_22[1];
  bool VAR_23 = 0;
  bool VAR_24 = 0;
  UINT64 VAR_25 = 0;


  if (VAR_20->CurrentExpiresSoftTick_StoC != 0 && VAR_11->Now >= VAR_20->CurrentExpiresSoftTick_StoC)
  {
   VAR_23 = 1;
   VAR_25 = FUNC_14(VAR_25, VAR_20->CurrentExpiresSoftTick_StoC);
  }

  if (VAR_20->CurrentExpiresSoftTick_CtoS != 0 && VAR_11->Now >= VAR_20->CurrentExpiresSoftTick_CtoS)
  {
   VAR_23 = 1;
   VAR_25 = FUNC_14(VAR_25, VAR_20->CurrentExpiresSoftTick_StoC);
  }

  if (VAR_20->CurrentNumHealtyIPsecSA_CtoS == 0 || VAR_20->CurrentNumHealtyIPsecSA_StoC == 0)
  {
   VAR_23 = 1;
   VAR_24 = 1;
  }

  if (VAR_20->StartQuickModeAsSoon)
  {
   VAR_23 = 1;
   VAR_24 = 1;
  }

  if (VAR_20->Deleting || VAR_20->CurrentIkeSa == ((void*)0) || VAR_20->CurrentIkeSa->Deleting)
  {
   VAR_23 = 0;
   VAR_24 = 1;
  }

  if (VAR_23)
  {
   if (VAR_20->StartQuickModeAsSoon || ((VAR_20->LastQuickModeStartTick + (UINT64)VAR_3) <= VAR_11->Now))
   {

    FUNC_2("IKE_CLIENT 0x%X: Begin QuickMode\n", VAR_20);
    VAR_20->StartQuickModeAsSoon = 0;
    VAR_20->LastQuickModeStartTick = VAR_11->Now;

    FUNC_0(VAR_11->Interrupts, VAR_20->LastQuickModeStartTick + (UINT64)VAR_3);

    FUNC_21(VAR_11, VAR_20);
   }
  }

  if (VAR_24)
  {
   if (VAR_20->NeedQmBeginTick == 0)
   {
    VAR_20->NeedQmBeginTick = VAR_11->Now;
   }
  }
  else
  {
   VAR_20->NeedQmBeginTick = 0;
  }

  if (((VAR_20->LastCommTick + (UINT64)VAR_5) <= VAR_11->Now) ||
   ((VAR_20->CurrentIkeSa == ((void*)0) && VAR_20->CurrentIpSecSaRecv == ((void*)0) && VAR_20->CurrentIpSecSaSend == ((void*)0)) && (VAR_20->LastCommTick + (UINT64)VAR_6) <= VAR_11->Now) ||
   (VAR_20->NeedQmBeginTick != 0 && ((VAR_20->NeedQmBeginTick + (UINT64)VAR_2) <= VAR_11->Now)))
  {

   VAR_10;
   FUNC_17(VAR_11, VAR_20);
  }


  if (VAR_20->L2TP != ((void*)0))
  {
   FUNC_6(VAR_11, VAR_20);


   FUNC_11(VAR_20->L2TP);


   FUNC_8(VAR_11, VAR_20, VAR_20->L2TP);
  }


  if (VAR_20->EtherIP != ((void*)0))
  {
   FUNC_5(VAR_11, VAR_20);


   FUNC_3(VAR_20->EtherIP);


   FUNC_7(VAR_11, VAR_20, VAR_20->EtherIP);
  }


  VAR_21 = FUNC_14(VAR_20->LastCommTick + (UINT64)VAR_1, VAR_20->NextKeepAliveSendTick);

  if (VAR_21 <= VAR_11->Now && VAR_20->ServerPort == VAR_9)
  {
   VAR_20->NextKeepAliveSendTick = VAR_11->Now + (UINT64)VAR_1;

   FUNC_0(VAR_11->Interrupts, VAR_20->NextKeepAliveSendTick);

   FUNC_22(VAR_22, sizeof(VAR_22));
   VAR_22[0] = 0xff;

   FUNC_10(VAR_11, VAR_7, &VAR_20->ServerIP, VAR_20->ServerPort, &VAR_20->ClientIP, VAR_20->ClientPort, FUNC_1(VAR_22, sizeof(VAR_22)), sizeof(VAR_22));
  }


  if (VAR_20->NextDpdSendTick == 0 || VAR_20->NextDpdSendTick <= VAR_11->Now)
  {
   if (VAR_20->CurrentIkeSa != ((void*)0) && VAR_20->CurrentIkeSa->Established)
   {
    if (VAR_20->CurrentIkeSa->Caps.DpdRfc3706)
    {
     VAR_20->NextDpdSendTick = VAR_11->Now + (UINT64)VAR_0;

     FUNC_0(VAR_11->Interrupts, VAR_20->NextDpdSendTick);

     FUNC_20(VAR_11, VAR_20,
      FUNC_9(0, VAR_20->CurrentIkeSa->InitiatorCookie, VAR_20->CurrentIkeSa->ResponderCookie,
      VAR_20->DpdSeqNo++));
    }
   }
  }
 }

 do
 {
  VAR_11->StateHasChanged = 0;


  FUNC_19(VAR_11);
 }
 while (VAR_11->StateHasChanged);


 FUNC_15(VAR_11->ThreadList);
}
