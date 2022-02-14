
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int hubname ;
typedef size_t UINT ;
struct TYPE_24__ {TYPE_3__* Server; } ;
struct TYPE_23__ {int LinkList; } ;
struct TYPE_22__ {int lock; TYPE_2__* ClientSession; scalar_t__ Offline; TYPE_1__* Option; } ;
struct TYPE_21__ {char* HubName; size_t NumLink; TYPE_4__* Links; } ;
struct TYPE_20__ {char* Hostname; char* HubName; int Online; int Connected; int LastError; int ConnectedTime; int AccountName; } ;
struct TYPE_19__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_18__ {scalar_t__ ClientStatus; int Err; int CurrentConnectionEstablishTime; } ;
struct TYPE_17__ {char* Hostname; char* HubName; int AccountName; } ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_ENUM_LINK_ITEM ;
typedef TYPE_5__ RPC_ENUM_LINK ;
typedef TYPE_6__ LINK ;
typedef TYPE_7__ HUB ;
typedef int CEDAR ;
typedef TYPE_8__ ADMIN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_7__* FUNC_1 (int *,char*) ;
 TYPE_6__* FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_7__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_15 (int) ;

UINT FUNC_16(ADMIN *VAR_7, RPC_ENUM_LINK *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;
 char VAR_12[VAR_5 + 1];
 UINT VAR_13;

 if (VAR_9->ServerType != VAR_6)
 {
  return VAR_3;
 }

 VAR_0;

 FUNC_5(VAR_10);
 {
  VAR_11 = FUNC_1(VAR_10, VAR_8->HubName);
 }
 FUNC_12(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_8(VAR_12, sizeof(VAR_12), VAR_8->HubName);
 FUNC_0(VAR_8);
 FUNC_14(VAR_8, sizeof(RPC_ENUM_LINK));
 FUNC_8(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_12);

 FUNC_6(VAR_11->LinkList);
 {
  VAR_8->NumLink = FUNC_3(VAR_11->LinkList);
  VAR_8->Links = FUNC_15(sizeof(RPC_ENUM_LINK_ITEM) * VAR_8->NumLink);

  for (VAR_13 = 0;VAR_13 < FUNC_3(VAR_11->LinkList);VAR_13++)
  {
   LINK *VAR_14 = FUNC_2(VAR_11->LinkList, VAR_13);
   RPC_ENUM_LINK_ITEM *VAR_15 = &VAR_8->Links[VAR_13];

   FUNC_4(VAR_14->lock);
   {
    FUNC_10(VAR_15->AccountName, sizeof(VAR_15->AccountName), VAR_14->Option->AccountName);
    FUNC_8(VAR_15->Hostname, sizeof(VAR_15->Hostname), VAR_14->Option->Hostname);
    FUNC_8(VAR_15->HubName, sizeof(VAR_15->HubName), VAR_14->Option->HubName);
    VAR_15->Online = VAR_14->Offline ? 0 : 1;

    if (VAR_15->Online)
    {
     if (VAR_14->ClientSession != ((void*)0))
     {
      VAR_15->ConnectedTime = FUNC_9(VAR_14->ClientSession->CurrentConnectionEstablishTime);
      VAR_15->Connected = (VAR_14->ClientSession->ClientStatus == VAR_1);
      VAR_15->LastError = VAR_14->ClientSession->Err;
     }
    }
   }
   FUNC_11(VAR_14->lock);
  }
 }
 FUNC_13(VAR_11->LinkList);

 FUNC_7(VAR_11);

 return VAR_4;
}
