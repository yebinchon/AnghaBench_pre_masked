
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_24__ {scalar_t__ Jitter; scalar_t__ Loss; scalar_t__ Delay; int DestUsername; int SrcUsername; int RedirectUrl; scalar_t__ IsIPv6; } ;
struct TYPE_23__ {int ServerAdmin; int ClientBuild; TYPE_1__* Server; } ;
struct TYPE_22__ {int AccessList; int CurrentVersion; } ;
struct TYPE_21__ {int NumAccess; TYPE_5__* Accesses; int HubName; } ;
struct TYPE_20__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_ACCESS_LIST ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;
typedef TYPE_5__ ACCESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 TYPE_5__* FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;

UINT FUNC_20(ADMIN *VAR_11, RPC_ENUM_ACCESS_LIST *VAR_12)
{
 SERVER *VAR_13 = VAR_11->Server;
 CEDAR *VAR_14 = VAR_13->Cedar;
 HUB *VAR_15;
 UINT VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 UINT VAR_19 = VAR_6;


 VAR_9;
 if (VAR_13->ServerType == VAR_10)
 {
  return VAR_5;
 }

 VAR_2;

 if (VAR_12->NumAccess > FUNC_7(VAR_11->Server, "i_max_access_lists"))
 {
  return VAR_7;
 }

 FUNC_12(VAR_14);
 {
  VAR_15 = FUNC_5(VAR_14, VAR_12->HubName);
 }
 FUNC_18(VAR_14);

 if (VAR_15 == ((void*)0))
 {
  return VAR_3;
 }

 VAR_17 = FUNC_6(VAR_15, "no_delay_jitter_packet_loss");
 VAR_18 = FUNC_6(VAR_15, "no_access_list_include_file");

 if (VAR_11->ServerAdmin == 0 && FUNC_6(VAR_15, "no_change_access_list") != 0)
 {
  FUNC_14(VAR_15);
  return VAR_4;
 }

 if (VAR_11->ServerAdmin == 0 && FUNC_6(VAR_15, "max_accesslists") != 0 &&
  VAR_12->NumAccess > FUNC_6(VAR_15, "max_accesslists"))
 {
  FUNC_14(VAR_15);
  return VAR_7;
 }

 FUNC_13(VAR_15->AccessList);
 {
  UINT VAR_20;

  if (VAR_11->ClientBuild != 0)
  {

   if (VAR_11->ClientBuild < 6560)
   {
    for (VAR_20 = 0;VAR_20 < FUNC_11(VAR_15->AccessList);VAR_20++)
    {
     ACCESS *VAR_21 = FUNC_10(VAR_15->AccessList, VAR_20);
     if (VAR_21->IsIPv6 ||
      VAR_21->Jitter != 0 || VAR_21->Loss != 0 || VAR_21->Delay != 0)
     {
      VAR_19 = VAR_8;
      break;
     }
    }
   }

   if (VAR_11->ClientBuild < 8234)
   {
    for (VAR_20 = 0;VAR_20 < FUNC_11(VAR_15->AccessList);VAR_20++)
    {
     ACCESS *VAR_22 = FUNC_10(VAR_15->AccessList, VAR_20);

     if (FUNC_9(VAR_22->RedirectUrl) == 0)
     {
      VAR_19 = VAR_8;
      break;
     }
    }
   }
  }

  if (VAR_19 == VAR_6)
  {

   for (VAR_20 = 0;VAR_20 < FUNC_11(VAR_15->AccessList);VAR_20++)
   {
    ACCESS *VAR_23 = FUNC_10(VAR_15->AccessList, VAR_20);
    FUNC_4(VAR_23);
   }

   FUNC_3(VAR_15->AccessList);
  }
 }

 if (VAR_19 == VAR_6)
 {
  FUNC_0(VAR_11, VAR_15, "LA_SET_ACCESS_LIST", VAR_12->NumAccess);


  for (VAR_16 = 0;VAR_16 < VAR_12->NumAccess;VAR_16++)
  {
   ACCESS *VAR_24 = &VAR_12->Accesses[VAR_16];

   if (VAR_17)
   {
    VAR_24->Jitter = VAR_24->Loss = VAR_24->Delay = 0;
   }

   if (VAR_18)
   {
    if (FUNC_17(VAR_24->SrcUsername, VAR_1) ||
     FUNC_17(VAR_24->SrcUsername, VAR_0))
    {
     FUNC_2(VAR_24->SrcUsername, sizeof(VAR_24->SrcUsername));
    }

    if (FUNC_17(VAR_24->DestUsername, VAR_1) ||
     FUNC_17(VAR_24->DestUsername, VAR_0))
    {
     FUNC_2(VAR_24->DestUsername, sizeof(VAR_24->DestUsername));
    }
   }

   if (VAR_16 == (VAR_12->NumAccess - 1))
   {
    FUNC_16(VAR_15->AccessList);
   }

   FUNC_1(VAR_15, VAR_24, ((VAR_16 != (VAR_12->NumAccess - 1)) ? 1 : 0), ((VAR_16 != (VAR_12->NumAccess - 1)) ? 1 : 0));
  }

  FUNC_19(VAR_15->AccessList);

  FUNC_8(VAR_13);

  VAR_15->CurrentVersion++;
  FUNC_15(VAR_15);
 }
 else
 {
  FUNC_19(VAR_15->AccessList);
 }

 FUNC_14(VAR_15);

 return VAR_19;
}
