
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int ip_str ;
typedef int ctoken_hash ;
typedef void* USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {scalar_t__ SrcPort; int Size; scalar_t__ Type; int Data; int SrcIP; int DestPort; int DstIP; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_25__ {scalar_t__ Status; scalar_t__ YourPort; void* Dns_TranId; scalar_t__ Icmp_Type; int YourIp; scalar_t__ LastSentTick; int Key_Init; } ;
struct TYPE_24__ {int ServerMode; int NoNatTRegister; scalar_t__ Protocol; int SessionList; scalar_t__ NatT_EnableSourceIpValidation; scalar_t__ (* ProcRpcRecv ) (TYPE_2__*,TYPE_1__*) ;int NatT_IP_Safe; } ;
typedef TYPE_2__ RUDP_STACK ;
typedef TYPE_3__ RUDP_SESSION ;
typedef int IP ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,TYPE_3__*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 TYPE_3__* FUNC_10 (int,int *,int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*) ;
 TYPE_3__* FUNC_14 (TYPE_2__*,int *,int ,int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (int *,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_16 (TYPE_2__*,TYPE_1__*) ;

void FUNC_17(RUDP_STACK *VAR_11, UDPPACKET *VAR_12)
{
 RUDP_SESSION *VAR_13 = ((void*)0);

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
 {
  return;
 }

 if (VAR_11->ServerMode)
 {
  if (VAR_10)
  {
   return;
  }
 }

 if (VAR_11->ServerMode && VAR_11->NoNatTRegister == 0)
 {

  if (VAR_12->SrcPort == VAR_9 && FUNC_1(&VAR_12->SrcIP, &VAR_11->NatT_IP_Safe) == 0)
  {

   FUNC_13(VAR_11, VAR_12);
   return;
  }
 }

 if (VAR_11->ServerMode)
 {
  if (VAR_11->ProcRpcRecv != ((void*)0))
  {
   if (VAR_11->ProcRpcRecv(VAR_11, VAR_12))
   {
    return;
   }
  }
 }

 if (VAR_11->ServerMode)
 {

  VAR_13 = FUNC_14(VAR_11, &VAR_12->DstIP, VAR_12->DestPort, &VAR_12->SrcIP, VAR_12->SrcPort);
 }
 else
 {

  if (FUNC_7(VAR_11->SessionList) >= 1)
  {
   VAR_13 = FUNC_6(VAR_11->SessionList, 0);
  }
  else
  {
   VAR_13 = ((void*)0);
  }
 }

 if (VAR_12->Size < 20)
 {

  if (VAR_11->ServerMode == 0)
  {
   if (VAR_13 != ((void*)0) && VAR_13->Status == VAR_6)
   {
    if (FUNC_1(&VAR_13->YourIp, &VAR_12->SrcIP) == 0)
    {



     VAR_13->YourPort = VAR_12->SrcPort;
    }
   }
  }
  return;
 }

 if (VAR_13 == ((void*)0) && VAR_11->ServerMode && VAR_12->Size >= 40)
 {



  UINT VAR_14;
  for (VAR_14 = 0; VAR_14 < FUNC_7(VAR_11->SessionList);VAR_14++)
  {
   RUDP_SESSION *VAR_15 = FUNC_6(VAR_11->SessionList, VAR_14);

   if (FUNC_1(&VAR_15->YourIp, &VAR_12->SrcIP) == 0)
   {
    if (FUNC_8(VAR_11, VAR_15, VAR_12->Data, VAR_12->Size))
    {

     VAR_13 = VAR_15;
     break;
    }
   }
  }
 }

 if (VAR_13 == ((void*)0))
 {

  if (VAR_11->ServerMode)
  {
   if (VAR_12->Size < 40)
   {
    bool VAR_16 = 1;
    UCHAR VAR_17[VAR_8];

    FUNC_15(VAR_17, sizeof(VAR_17));


    if (FUNC_7(VAR_11->SessionList) >= VAR_4)
    {

     VAR_16 = 0;
    }
    else if (VAR_11->NatT_EnableSourceIpValidation && FUNC_9(VAR_11, &VAR_12->SrcIP) == 0)
    {

     VAR_16 = 0;
    }
    else
    {
     UINT VAR_18;

     UINT VAR_19 = 0;

     for (VAR_18 = 0;VAR_18 < FUNC_7(VAR_11->SessionList);VAR_18++)
     {
      RUDP_SESSION *VAR_20 = FUNC_6(VAR_11->SessionList, VAR_18);

      if (FUNC_1(&VAR_20->YourIp, &VAR_12->SrcIP) == 0)
      {
       VAR_19++;
      }
     }

     if (VAR_19 >= VAR_5)
     {

      VAR_16 = 0;
     }
    }


    if (VAR_16)
    {
     char VAR_21[64];


     VAR_13 = FUNC_10(1, &VAR_12->DstIP, VAR_12->DestPort, &VAR_12->SrcIP, VAR_12->SrcPort, VAR_12->Data);
     VAR_13->Status = VAR_7;
     FUNC_5(VAR_11->SessionList, VAR_13);

     FUNC_4(VAR_21, sizeof(VAR_21), &VAR_12->SrcIP);
     FUNC_3("RUDPNewSession %X %s:%u\n", VAR_13, VAR_21, VAR_12->SrcPort);

     if (VAR_11->Protocol == VAR_3)
     {

      VAR_13->Icmp_Type = (VAR_12->Type == VAR_1 ? VAR_0 : VAR_12->Type);
     }
     else if (VAR_11->Protocol == VAR_2)
     {

      VAR_13->Dns_TranId = (USHORT)VAR_12->Type;
     }
    }
   }
  }
 }
 else
 {
  if (VAR_12->Size < 40)
  {
   if (VAR_11->ServerMode)
   {
    if (FUNC_0(VAR_13->Key_Init, VAR_12->Data, VAR_8) == 0)
    {

     VAR_13->LastSentTick = 0;


     FUNC_2(&VAR_13->YourIp, &VAR_12->SrcIP, sizeof(IP));
     VAR_13->YourPort = VAR_12->SrcPort;

     if (VAR_11->Protocol == VAR_3)
     {

      VAR_13->Icmp_Type = (VAR_12->Type == VAR_1 ? VAR_0 : VAR_12->Type);
     }
     else if (VAR_11->Protocol == VAR_2)
     {

      VAR_13->Dns_TranId = (USHORT)VAR_12->Type;
     }
    }
    else
    {

    }
   }
  }
  else
  {

   if (FUNC_12(VAR_11, VAR_13, VAR_12->Data, VAR_12->Size) || FUNC_11(VAR_11, VAR_13, VAR_12->Data, VAR_12->Size))
   {


    VAR_13->YourPort = VAR_12->SrcPort;

    if (VAR_11->Protocol == VAR_3)
    {

     if (VAR_11->ServerMode)
     {
      VAR_13->Icmp_Type = (VAR_12->Type == VAR_1 ? VAR_0 : VAR_12->Type);
     }
     else
     {
      VAR_13->Icmp_Type = (VAR_12->Type == VAR_0 ? VAR_1 : VAR_12->Type);
     }
    }
    else if (VAR_11->Protocol == VAR_2)
    {
     if (VAR_11->ServerMode)
     {

      VAR_13->Dns_TranId = (USHORT)VAR_12->Type;
     }
    }
   }
  }
 }
}
