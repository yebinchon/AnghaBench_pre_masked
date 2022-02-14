
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wchar_t ;
typedef int hubname ;
typedef int accountname ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {TYPE_3__* Server; } ;
struct TYPE_23__ {int LinkList; } ;
struct TYPE_22__ {int Offline; int lock; TYPE_2__* ClientSession; int ref; TYPE_1__* Option; } ;
struct TYPE_21__ {char* HubName; int Status; int * AccountName; } ;
struct TYPE_20__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_19__ {int ref; } ;
struct TYPE_18__ {int AccountName; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_LINK_STATUS ;
typedef TYPE_5__ LINK ;
typedef TYPE_6__ HUB ;
typedef int CEDAR ;
typedef TYPE_7__ ADMIN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_6__* FUNC_3 (int *,char*) ;
 TYPE_5__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (char*,int,char*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,int,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_4__*,int) ;

UINT FUNC_20(ADMIN *VAR_10, RPC_LINK_STATUS *VAR_11)
{
 UINT VAR_12;
 SERVER *VAR_13 = VAR_10->Server;
 CEDAR *VAR_14 = VAR_13->Cedar;
 HUB *VAR_15;
 UINT VAR_16 = VAR_5;
 char VAR_17[VAR_8 + 1];
 wchar_t VAR_18[VAR_7 + 1];
 LINK *VAR_19;
 SESSION *VAR_20;

 if (FUNC_13(VAR_11->AccountName))
 {
  return VAR_2;
 }

 if (VAR_13->ServerType != VAR_9)
 {
  return VAR_4;
 }

 VAR_0;

 FUNC_7(VAR_14);
 {
  VAR_15 = FUNC_3(VAR_14, VAR_11->HubName);
 }
 FUNC_17(VAR_14);

 if (VAR_15 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_12(VAR_17, sizeof(VAR_17), VAR_11->HubName);
 FUNC_15(VAR_18, sizeof(VAR_18), VAR_11->AccountName);
 FUNC_2(VAR_11);
 FUNC_19(VAR_11, sizeof(RPC_LINK_STATUS));
 FUNC_12(VAR_11->HubName, sizeof(VAR_11->HubName), VAR_17);
 FUNC_15(VAR_11->AccountName, sizeof(VAR_11->AccountName), VAR_18);

 VAR_19 = ((void*)0);


 FUNC_8(VAR_15->LinkList);
 {
  for (VAR_12 = 0;VAR_12 < FUNC_5(VAR_15->LinkList);VAR_12++)
  {
   LINK *VAR_21 = FUNC_4(VAR_15->LinkList, VAR_12);
   FUNC_6(VAR_21->lock);
   {
    if (FUNC_14(VAR_21->Option->AccountName, VAR_18) == 0)
    {
     VAR_19 = VAR_21;
     FUNC_0(VAR_21->ref);
    }
   }
   FUNC_16(VAR_21->lock);

   if (VAR_19 != ((void*)0))
   {
    break;
   }
  }
 }
 FUNC_18(VAR_15->LinkList);

 if (VAR_19 == ((void*)0))
 {

  FUNC_9(VAR_15);

  return VAR_6;
 }


 FUNC_6(VAR_19->lock);
 {
  VAR_20 = VAR_19->ClientSession;
  if (VAR_20 != ((void*)0))
  {
   FUNC_0(VAR_20->ref);
  }
 }
 FUNC_16(VAR_19->lock);

 if (VAR_20 != ((void*)0) && VAR_19->Offline == 0)
 {
  FUNC_1(&VAR_11->Status, VAR_20);
 }
 else
 {
  VAR_16 = VAR_3;
 }
 FUNC_11(VAR_20);

 FUNC_10(VAR_19);
 FUNC_9(VAR_15);

 return VAR_16;
}
