
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_22__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_21__ {int LinkList; } ;
struct TYPE_20__ {TYPE_1__* Option; int lock; int ref; } ;
struct TYPE_19__ {int NewAccountName; int OldAccountName; int HubName; } ;
struct TYPE_18__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_17__ {int AccountName; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_RENAME_LINK ;
typedef TYPE_4__ LINK ;
typedef TYPE_5__ HUB ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

UINT FUNC_16(ADMIN *VAR_9, RPC_RENAME_LINK *VAR_10)
{
 UINT VAR_11;
 SERVER *VAR_12 = VAR_9->Server;
 CEDAR *VAR_13 = VAR_12->Cedar;
 HUB *VAR_14;
 UINT VAR_15 = VAR_6;
 LINK *VAR_16;
 bool VAR_17 = 0;

 if (FUNC_11(VAR_10->OldAccountName) || FUNC_11(VAR_10->NewAccountName))
 {
  return VAR_2;
 }

 if (VAR_12->ServerType != VAR_8)
 {
  return VAR_5;
 }

 VAR_0;

 if (FUNC_12(VAR_10->NewAccountName, VAR_10->OldAccountName) == 0)
 {

  return VAR_6;
 }

 VAR_14 = FUNC_2(VAR_13, VAR_10->HubName);

 if (VAR_14 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_9->ServerAdmin == 0 && FUNC_3(VAR_14, "no_cascade") != 0)
 {
  FUNC_9(VAR_14);
  return VAR_4;
 }

 VAR_16 = ((void*)0);


 FUNC_8(VAR_14->LinkList);
 {
  for (VAR_11 = 0;VAR_11 < FUNC_6(VAR_14->LinkList);VAR_11++)
  {
   LINK *VAR_18 = FUNC_5(VAR_14->LinkList, VAR_11);
   FUNC_7(VAR_18->lock);
   {
    if (FUNC_12(VAR_18->Option->AccountName, VAR_10->OldAccountName) == 0)
    {
     VAR_16 = VAR_18;
     FUNC_1(VAR_18->ref);
    }
   }
   FUNC_14(VAR_18->lock);

   if (VAR_16 != ((void*)0))
   {
    break;
   }
  }

  VAR_17 = 0;

  if (VAR_16 != ((void*)0))
  {

   for (VAR_11 = 0;VAR_11 < FUNC_6(VAR_14->LinkList);VAR_11++)
   {
    LINK *VAR_19 = FUNC_5(VAR_14->LinkList, VAR_11);
    FUNC_7(VAR_19->lock);
    {
     if (FUNC_12(VAR_19->Option->AccountName, VAR_10->NewAccountName) == 0)
     {

      VAR_17 = 1;
     }
    }
    FUNC_14(VAR_19->lock);
   }

   if (VAR_17)
   {

    VAR_15 = VAR_3;
   }
   else
   {

    FUNC_13(VAR_16->Option->AccountName, sizeof(VAR_16->Option->AccountName), VAR_10->NewAccountName);

    FUNC_0(VAR_9, VAR_14, "LA_RENAME_LINK", VAR_10->OldAccountName, VAR_10->NewAccountName);

    FUNC_4(VAR_12);
   }
  }
 }
 FUNC_15(VAR_14->LinkList);

 if (VAR_16 == ((void*)0))
 {

  FUNC_9(VAR_14);
  return VAR_7;
 }

 FUNC_10(VAR_16);

 FUNC_9(VAR_14);

 return VAR_15;
}
