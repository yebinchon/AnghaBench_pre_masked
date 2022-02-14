
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


typedef int wchar_t ;
typedef int hubname ;
typedef int accountname ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_22__ {int LinkList; } ;
struct TYPE_21__ {int lock; int ref; TYPE_1__* Option; } ;
struct TYPE_20__ {int AccountName; int HubName; } ;
struct TYPE_19__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_18__ {int AccountName; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_LINK ;
typedef TYPE_4__ LINK ;
typedef TYPE_5__ HUB ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (char*,int,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,int,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;

UINT FUNC_20(ADMIN *VAR_10, RPC_LINK *VAR_11)
{
 UINT VAR_12;
 SERVER *VAR_13 = VAR_10->Server;
 CEDAR *VAR_14 = VAR_13->Cedar;
 HUB *VAR_15;
 UINT VAR_16 = VAR_5;
 char VAR_17[VAR_8 + 1];
 wchar_t VAR_18[VAR_7 + 1];
 LINK *VAR_19;


 if (FUNC_14(VAR_11->AccountName))
 {
  return VAR_2;
 }

 if (VAR_13->ServerType != VAR_9)
 {
  return VAR_4;
 }

 VAR_0;

 FUNC_8(VAR_14);
 {
  VAR_15 = FUNC_2(VAR_14, VAR_11->HubName);
 }
 FUNC_18(VAR_14);

 if (VAR_15 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_10->ServerAdmin == 0 && FUNC_3(VAR_15, "no_cascade") != 0)
 {
  FUNC_10(VAR_15);
  return VAR_3;
 }

 FUNC_13(VAR_17, sizeof(VAR_17), VAR_11->HubName);
 FUNC_16(VAR_18, sizeof(VAR_18), VAR_11->AccountName);
 VAR_19 = ((void*)0);


 FUNC_9(VAR_15->LinkList);
 {
  for (VAR_12 = 0;VAR_12 < FUNC_6(VAR_15->LinkList);VAR_12++)
  {
   LINK *VAR_20 = FUNC_5(VAR_15->LinkList, VAR_12);
   FUNC_7(VAR_20->lock);
   {
    if (FUNC_15(VAR_20->Option->AccountName, VAR_18) == 0)
    {
     VAR_19 = VAR_20;
     FUNC_1(VAR_20->ref);
    }
   }
   FUNC_17(VAR_20->lock);

   if (VAR_19 != ((void*)0))
   {
    break;
   }
  }
 }
 FUNC_19(VAR_15->LinkList);

 if (VAR_19 == ((void*)0))
 {

  FUNC_10(VAR_15);

  return VAR_6;
 }

 FUNC_0(VAR_10, VAR_15, "LA_SET_LINK_ONLINE", VAR_11->AccountName);

 FUNC_12(VAR_19);

 FUNC_11(VAR_19);
 FUNC_10(VAR_15);

 FUNC_4(VAR_13);

 return VAR_16;
}
