
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int wchar_t ;
typedef int title ;
typedef int t ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_28__ {scalar_t__* ShortcutKey; int lock; TYPE_1__* ClientOption; } ;
struct TYPE_23__ {int AllowRemoteConfig; } ;
struct TYPE_27__ {scalar_t__ Err; scalar_t__* EncryptedPassword; int lock; TYPE_2__ Config; scalar_t__ PasswordRemoteOnly; int AccountList; } ;
struct TYPE_26__ {int * AccountName; } ;
struct TYPE_24__ {int* addr; } ;
struct TYPE_25__ {TYPE_3__ RemoteIP; } ;
struct TYPE_22__ {int * AccountName; } ;
typedef TYPE_4__ SOCK ;
typedef TYPE_5__ RPC_CLIENT_CONNECT ;
typedef int RPC ;
typedef TYPE_6__ CLIENT ;
typedef TYPE_7__ ACCOUNT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,TYPE_4__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_7__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_4__*,scalar_t__*,int,int) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_4__*,scalar_t__*,int,int) ;
 int * FUNC_13 (TYPE_4__*,int ,TYPE_6__*) ;
 int FUNC_14 (int *,int,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_5__*,int) ;

void FUNC_18(CLIENT *VAR_8, SOCK *VAR_9)
{
 UCHAR VAR_10[VAR_7];
 UINT VAR_11;
 UINT VAR_12;
 RPC *VAR_13;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }


 if (FUNC_10(VAR_9, &VAR_11, sizeof(UINT), 0) == 0)
 {
  return;
 }

 VAR_11 = FUNC_5(VAR_11);

 if (VAR_11 == VAR_0)
 {

  FUNC_0(VAR_8, VAR_9);
  return;
 }
 else if (VAR_11 == VAR_1 || VAR_11 == VAR_2)
 {

  UCHAR VAR_14[VAR_7];
  UINT VAR_15 = VAR_5;
  if (FUNC_10(VAR_9, VAR_14, VAR_7, 0))
  {
   UINT VAR_16;
   wchar_t VAR_17[VAR_6 + 1];
   bool VAR_18 = 0;

   FUNC_9(VAR_8->AccountList);
   {
    for (VAR_16 = 0;VAR_16 < FUNC_7(VAR_8->AccountList);VAR_16++)
    {
     ACCOUNT *VAR_19 = FUNC_6(VAR_8->AccountList, VAR_16);
     FUNC_8(VAR_19->lock);
     {
      if (FUNC_1(VAR_19->ShortcutKey, VAR_14, VAR_7) == 0)
      {
       VAR_18 = 1;
       FUNC_14(VAR_17, sizeof(VAR_17), VAR_19->ClientOption->AccountName);
      }
     }
     FUNC_15(VAR_19->lock);
    }
   }
   FUNC_16(VAR_8->AccountList);

   if (VAR_18 == 0)
   {
    VAR_15 = VAR_4;
   }
   else
   {
    RPC_CLIENT_CONNECT VAR_20;
    FUNC_17(&VAR_20, sizeof(VAR_20));
    FUNC_14(VAR_20.AccountName, sizeof(VAR_20.AccountName), VAR_17);

    if (VAR_11 == VAR_1)
    {

     if (FUNC_2(VAR_8, &VAR_20))
     {
      VAR_15 = VAR_5;
     }
     else
     {
      VAR_15 = VAR_8->Err;
     }
    }
    else
    {

     if (FUNC_3(VAR_8, &VAR_20, 0))
     {
      VAR_15 = VAR_5;
     }
     else
     {
      VAR_15 = VAR_8->Err;
     }
    }
   }

   VAR_15 = FUNC_5(VAR_15);
   FUNC_12(VAR_9, &VAR_15, sizeof(UINT), 0);
   (void)FUNC_10(VAR_9, &VAR_15, sizeof(UINT), 0);
  }
  return;
 }


 if (FUNC_10(VAR_9, VAR_10, VAR_7, 0) == 0)
 {
  return;
 }

 VAR_12 = 0;


 if (FUNC_1(VAR_10, VAR_8->EncryptedPassword, VAR_7) != 0)
 {
  VAR_12 = 1;
 }

 if (VAR_8->PasswordRemoteOnly && VAR_9->RemoteIP.addr[0] == 127)
 {


  VAR_12 = 0;
 }

 FUNC_8(VAR_8->lock);
 {
  if (VAR_8->Config.AllowRemoteConfig == 0)
  {


   if (VAR_9->RemoteIP.addr[0] != 127)
   {
    VAR_12 = 2;
   }
  }
 }
 FUNC_15(VAR_8->lock);

 VAR_12 = FUNC_5(VAR_12);

 if (FUNC_12(VAR_9, &VAR_12, sizeof(UINT), 0) == 0)
 {
  return;
 }



 if (VAR_12 != 0)
 {

  return;
 }


 VAR_13 = FUNC_13(VAR_9, VAR_3, VAR_8);


 FUNC_11(VAR_13);


 FUNC_4(VAR_13);
}
