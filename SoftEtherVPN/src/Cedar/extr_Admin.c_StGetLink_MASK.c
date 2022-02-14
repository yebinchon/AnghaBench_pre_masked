
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int AccountName; } ;
struct TYPE_22__ {TYPE_1__* Server; } ;
struct TYPE_21__ {int LinkList; } ;
struct TYPE_20__ {int lock; int ServerCert; int CheckServerCert; TYPE_16__* Policy; int Auth; TYPE_16__* Option; scalar_t__ Offline; int ref; } ;
struct TYPE_19__ {char* HubName; int Online; int ServerCert; int CheckServerCert; TYPE_6__ Policy; int ClientAuth; TYPE_6__* ClientOption; } ;
struct TYPE_18__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_17__ {int AccountName; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef int POLICY ;
typedef TYPE_3__ LINK ;
typedef TYPE_4__ HUB ;
typedef int CLIENT_OPTION ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_16__*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (int *,char*) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (char*,int,char*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*,int) ;
 TYPE_6__* FUNC_19 (int) ;

UINT FUNC_20(ADMIN *VAR_8, RPC_CREATE_LINK *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 UINT VAR_13 = VAR_4;
 UINT VAR_14;
 char VAR_15[VAR_6];
 LINK *VAR_16;

 if (VAR_10->ServerType != VAR_7)
 {
  return VAR_3;
 }

 VAR_0;

 if (VAR_10->ServerType != VAR_7)
 {
  return VAR_2;
 }

 FUNC_9(VAR_11);
 {
  VAR_12 = FUNC_5(VAR_11, VAR_9->HubName);
 }
 FUNC_16(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_16 = ((void*)0);


 FUNC_10(VAR_12->LinkList);
 {
  for (VAR_14 = 0;VAR_14 < FUNC_7(VAR_12->LinkList);VAR_14++)
  {
   LINK *VAR_17 = FUNC_6(VAR_12->LinkList, VAR_14);
   FUNC_8(VAR_17->lock);
   {
    if (FUNC_14(VAR_17->Option->AccountName, VAR_9->ClientOption->AccountName) == 0)
    {
     VAR_16 = VAR_17;
     FUNC_0(VAR_17->ref);
    }
   }
   FUNC_15(VAR_17->lock);

   if (VAR_16 != ((void*)0))
   {
    break;
   }
  }
 }
 FUNC_17(VAR_12->LinkList);

 if (VAR_16 == ((void*)0))
 {

  FUNC_11(VAR_12);
  return VAR_5;
 }

 FUNC_13(VAR_15, sizeof(VAR_15), VAR_9->HubName);
 FUNC_4(VAR_9);
 FUNC_18(VAR_9, sizeof(RPC_CREATE_LINK));
 FUNC_13(VAR_9->HubName, sizeof(VAR_9->HubName), VAR_15);

 FUNC_8(VAR_16->lock);
 {

  VAR_9->Online = VAR_16->Offline ? 0 : 1;
  VAR_9->ClientOption = FUNC_19(sizeof(CLIENT_OPTION));
  FUNC_2(VAR_9->ClientOption, VAR_16->Option, sizeof(CLIENT_OPTION));
  VAR_9->ClientAuth = FUNC_3(VAR_16->Auth);
  FUNC_2(&VAR_9->Policy, VAR_16->Policy, sizeof(POLICY));

  VAR_9->CheckServerCert = VAR_16->CheckServerCert;
  VAR_9->ServerCert = FUNC_1(VAR_16->ServerCert);
 }
 FUNC_15(VAR_16->lock);

 FUNC_12(VAR_16);
 FUNC_11(VAR_12);

 return VAR_13;
}
