
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int name ;
typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_18__ {int Me; } ;
struct TYPE_17__ {int Name; int HubName; } ;
struct TYPE_16__ {scalar_t__ ServerType; int FarmMemberList; int * Cedar; } ;
struct TYPE_15__ {scalar_t__ L3SwitchMode; scalar_t__ BridgeMode; scalar_t__ SecureNATMode; scalar_t__ LinkModeServer; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_DELETE_SESSION ;
typedef int HUB ;
typedef TYPE_4__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,int *,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (TYPE_2__*,TYPE_4__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

UINT FUNC_16(ADMIN *VAR_13, RPC_DELETE_SESSION *VAR_14)
{
 SERVER *VAR_15 = VAR_13->Server;
 CEDAR *VAR_16 = VAR_15->Cedar;
 HUB *VAR_17 = ((void*)0);
 UINT VAR_18 = VAR_7;
 char VAR_19[VAR_10 + 1];
 char VAR_20[VAR_11 + 1];
 SESSION *VAR_21;

 if (FUNC_4(VAR_14->Name))
 {
  return VAR_3;
 }

 FUNC_13(VAR_19, sizeof(VAR_19), VAR_14->HubName);
 FUNC_13(VAR_20, sizeof(VAR_20), VAR_14->Name);

 VAR_0;

 FUNC_7(VAR_16);
 {
  VAR_17 = FUNC_1(VAR_16, VAR_14->HubName);
 }
 FUNC_14(VAR_16);

 if (VAR_17 == ((void*)0))
 {
  return VAR_2;
 }

 if (VAR_13->ServerAdmin == 0 && FUNC_2(VAR_17, "no_disconnect_session") != 0)
 {
  FUNC_9(VAR_17);
  return VAR_6;
 }

 VAR_21 = FUNC_3(VAR_17, VAR_20);

 if (VAR_21 == ((void*)0))
 {
  if (VAR_15->ServerType == VAR_12)
  {

   UINT VAR_22;
   FUNC_8(VAR_15->FarmMemberList);
   {
    for (VAR_22 = 0;VAR_22 < FUNC_6(VAR_15->FarmMemberList);VAR_22++)
    {
     FARM_MEMBER *VAR_23 = FUNC_5(VAR_15->FarmMemberList, VAR_22);
     if (VAR_23->Me == 0)
     {

      FUNC_11(VAR_15, VAR_23, VAR_14->HubName, VAR_14->Name);
     }
    }
   }
   FUNC_15(VAR_15->FarmMemberList);
  }
  else
  {
   VAR_18 = VAR_8;
  }
 }
 else
 {
  if (VAR_21->LinkModeServer)
  {
   VAR_18 = VAR_5;
  }
  else if (VAR_21->SecureNATMode)
  {
   VAR_18 = VAR_9;
  }
  else if (VAR_21->BridgeMode)
  {
   VAR_18 = VAR_1;
  }
  else if (VAR_21->L3SwitchMode)
  {
   VAR_18 = VAR_4;
  }
  else
  {
   FUNC_12(VAR_21);
  }
  FUNC_10(VAR_21);
 }

 if (VAR_18 != VAR_7)
 {
  FUNC_0(VAR_13, VAR_17, "LA_DELETE_SESSION", VAR_14->Name);
 }

 FUNC_9(VAR_17);

 return VAR_18;
}
