
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


typedef scalar_t__ UINT ;
struct TYPE_27__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_26__ {int LinkList; } ;
struct TYPE_25__ {int Offline; int ServerCert; int CheckServerCert; int lock; int ref; TYPE_1__* Option; } ;
struct TYPE_24__ {int ServerCert; int CheckServerCert; int Policy; int ClientAuth; TYPE_14__* ClientOption; int HubName; } ;
struct TYPE_23__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_22__ {int AccountName; } ;
struct TYPE_21__ {int AccountName; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CREATE_LINK ;
typedef TYPE_4__ LINK ;
typedef TYPE_5__ HUB ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_4__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (int *,TYPE_5__*,TYPE_14__*,int ,int *) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

UINT FUNC_19(ADMIN *VAR_8, RPC_CREATE_LINK *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 UINT VAR_13 = VAR_6;
 UINT VAR_14;
 LINK *VAR_15;

 VAR_0;


 if (VAR_10->ServerType != VAR_7)
 {
  return VAR_4;
 }

 FUNC_9(VAR_11);
 {
  VAR_12 = FUNC_3(VAR_11, VAR_9->HubName);
 }
 FUNC_17(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_8->ServerAdmin == 0 && FUNC_4(VAR_12, "no_cascade") != 0)
 {
  FUNC_12(VAR_12);
  return VAR_5;
 }

 VAR_15 = ((void*)0);


 FUNC_10(VAR_12->LinkList);
 {
  for (VAR_14 = 0;VAR_14 < FUNC_7(VAR_12->LinkList);VAR_14++)
  {
   LINK *VAR_16 = FUNC_6(VAR_12->LinkList, VAR_14);
   FUNC_8(VAR_16->lock);
   {
    if (FUNC_15(VAR_16->Option->AccountName, VAR_9->ClientOption->AccountName) == 0)
    {
     VAR_15 = VAR_16;
     FUNC_1(VAR_16->ref);
    }
   }
   FUNC_16(VAR_16->lock);

   if (VAR_15 != ((void*)0))
   {
    break;
   }
  }
 }
 FUNC_18(VAR_12->LinkList);

 if (VAR_15 != ((void*)0))
 {

  FUNC_13(VAR_15);
  FUNC_12(VAR_12);
  return VAR_3;
 }

 FUNC_0(VAR_8, VAR_12, "LA_CREATE_LINK", VAR_9->ClientOption->AccountName);


 VAR_15 = FUNC_11(VAR_11, VAR_12, VAR_9->ClientOption, VAR_9->ClientAuth, &VAR_9->Policy);

 if (VAR_15 == ((void*)0))
 {

  VAR_13 = VAR_2;
 }
 else
 {


  VAR_15->CheckServerCert = VAR_9->CheckServerCert;
  VAR_15->ServerCert = FUNC_2(VAR_9->ServerCert);


  VAR_15->Offline = 0;
  FUNC_14(VAR_15);
  FUNC_13(VAR_15);

  FUNC_5(VAR_10);
 }

 FUNC_12(VAR_12);

 return VAR_13;
}
