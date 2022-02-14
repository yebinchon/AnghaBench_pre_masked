
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef scalar_t__ UINT ;
struct TYPE_24__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_23__ {int LinkList; } ;
struct TYPE_22__ {int lock; int * ServerCert; int CheckServerCert; TYPE_14__* Option; TYPE_14__* Policy; int Auth; int ref; } ;
struct TYPE_19__ {int Ver3; int AccountName; } ;
struct TYPE_21__ {int ServerCert; int CheckServerCert; TYPE_15__ Policy; int ClientAuth; TYPE_15__* ClientOption; int HubName; } ;
struct TYPE_20__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_18__ {int RetryInterval; int NoRoutingTracking; int RequireBridgeRoutingMode; int RequireMonitorMode; int NumRetry; int DeviceName; int AccountName; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef int POLICY ;
typedef TYPE_3__ LINK ;
typedef TYPE_4__ HUB ;
typedef int CLIENT_OPTION ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_14__*,TYPE_15__*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,char*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_8 ;
 TYPE_3__* FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_17 (int ,int,int ) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;

UINT FUNC_22(ADMIN *VAR_11, RPC_CREATE_LINK *VAR_12)
{
 SERVER *VAR_13 = VAR_11->Server;
 CEDAR *VAR_14 = VAR_13->Cedar;
 HUB *VAR_15;
 UINT VAR_16 = VAR_5;
 UINT VAR_17;
 LINK *VAR_18;


 if (VAR_13->ServerType != VAR_10)
 {
  return VAR_4;
 }

 VAR_0;

 if (VAR_13->ServerType != VAR_10)
 {
  return VAR_2;
 }

 FUNC_13(VAR_14);
 {
  VAR_15 = FUNC_7(VAR_14, VAR_12->HubName);
 }
 FUNC_20(VAR_14);

 if (VAR_15 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_11->ServerAdmin == 0 && FUNC_8(VAR_15, "no_cascade") != 0)
 {
  FUNC_15(VAR_15);
  return VAR_3;
 }

 VAR_18 = ((void*)0);


 FUNC_14(VAR_15->LinkList);
 {
  for (VAR_17 = 0;VAR_17 < FUNC_11(VAR_15->LinkList);VAR_17++)
  {
   LINK *VAR_19 = FUNC_10(VAR_15->LinkList, VAR_17);
   FUNC_12(VAR_19->lock);
   {
    if (FUNC_18(VAR_19->Option->AccountName, VAR_12->ClientOption->AccountName) == 0)
    {
     VAR_18 = VAR_19;
     FUNC_1(VAR_19->ref);
    }
   }
   FUNC_19(VAR_19->lock);

   if (VAR_18 != ((void*)0))
   {
    break;
   }
  }
 }
 FUNC_21(VAR_15->LinkList);

 if (VAR_18 == ((void*)0))
 {

  FUNC_15(VAR_15);
  return VAR_6;
 }

 FUNC_0(VAR_11, VAR_15, "LA_SET_LINK", VAR_12->ClientOption->AccountName);

 FUNC_12(VAR_18->lock);
 {

  if (VAR_18->ServerCert != ((void*)0))
  {
   FUNC_6(VAR_18->ServerCert);
   VAR_18->ServerCert = ((void*)0);
  }

  FUNC_4(VAR_18->Option, VAR_12->ClientOption, sizeof(CLIENT_OPTION));
  FUNC_17(VAR_18->Option->DeviceName, sizeof(VAR_18->Option->DeviceName), VAR_8);
  VAR_18->Option->NumRetry = VAR_7;
  VAR_18->Option->RetryInterval = 10;
  VAR_18->Option->NoRoutingTracking = 1;
  FUNC_2(VAR_18->Auth);
  VAR_18->Auth = FUNC_5(VAR_12->ClientAuth);

  if (VAR_12->Policy.Ver3 == 0)
  {
   FUNC_4(VAR_18->Policy, &VAR_12->Policy, sizeof(UINT) * VAR_9);
  }
  else
  {
   FUNC_4(VAR_18->Policy, &VAR_12->Policy, sizeof(POLICY));
  }

  VAR_18->Option->RequireBridgeRoutingMode = 1;
  VAR_18->Option->RequireMonitorMode = 0;

  VAR_18->CheckServerCert = VAR_12->CheckServerCert;
  VAR_18->ServerCert = FUNC_3(VAR_12->ServerCert);
 }
 FUNC_19(VAR_18->lock);

 FUNC_9(VAR_13);

 FUNC_16(VAR_18);
 FUNC_15(VAR_15);

 return VAR_16;
}
