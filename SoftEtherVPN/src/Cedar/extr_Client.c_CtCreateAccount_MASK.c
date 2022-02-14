
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_13__ ;


struct TYPE_29__ {int AccountName; } ;
struct TYPE_28__ {int AccountName; } ;
struct TYPE_27__ {int UpdateDateTime; int CreateDateTime; TYPE_7__* ShortcutKey; int ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; TYPE_7__* ClientOption; int ClientAuth; int lock; } ;
struct TYPE_26__ {int AccountList; } ;
struct TYPE_25__ {TYPE_8__* ClientOption; TYPE_8__* ShortcutKey; TYPE_16__* ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; TYPE_13__* ClientAuth; } ;
struct TYPE_24__ {int is_compatible_bit; } ;
struct TYPE_23__ {int is_compatible_bit; } ;
struct TYPE_22__ {scalar_t__ AuthType; int * ClientK; TYPE_1__* ClientX; } ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int CLIENT_OPTION ;
typedef TYPE_3__ CLIENT ;
typedef TYPE_4__ ACCOUNT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_16__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_8__*,int) ;
 int FUNC_7 (TYPE_13__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_7__*,int) ;
 int VAR_4 ;
 TYPE_4__* FUNC_14 (int ,TYPE_4__*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 void* FUNC_19 (int) ;

bool FUNC_20(CLIENT *VAR_5, RPC_CLIENT_CREATE_ACCOUNT *VAR_6, bool VAR_7)
{

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }



 FUNC_11(VAR_5->AccountList);
 {
  ACCOUNT VAR_8, *VAR_9, *VAR_10;
  VAR_8.ClientOption = FUNC_19(sizeof(CLIENT_OPTION));
  FUNC_16(VAR_8.ClientOption->AccountName, sizeof(VAR_8.ClientOption->AccountName),
   VAR_6->ClientOption->AccountName);

  VAR_9 = FUNC_14(VAR_5->AccountList, &VAR_8);
  if (VAR_9 != ((void*)0))
  {

   FUNC_18(VAR_5->AccountList);
   FUNC_8(VAR_8.ClientOption);

   FUNC_4(VAR_5, VAR_1);

   return 0;
  }

  FUNC_8(VAR_8.ClientOption);

  if (FUNC_17(VAR_6->ClientOption->AccountName) == 0)
  {

   FUNC_18(VAR_5->AccountList);
   FUNC_4(VAR_5, VAR_2);
   return 0;
  }

  if (VAR_6->ClientAuth->AuthType == VAR_0)
  {
   if (VAR_6->ClientAuth->ClientX == ((void*)0) ||
    VAR_6->ClientAuth->ClientX->is_compatible_bit == 0 ||
    VAR_6->ClientAuth->ClientK == ((void*)0))
   {

    FUNC_18(VAR_5->AccountList);
    FUNC_4(VAR_5, VAR_3);
    return 0;
   }
  }

  if (VAR_6->ServerCert != ((void*)0) && VAR_6->ServerCert->is_compatible_bit == 0)
  {

   FUNC_18(VAR_5->AccountList);
   FUNC_4(VAR_5, VAR_3);
   return 0;
  }


  VAR_10 = FUNC_19(sizeof(ACCOUNT));
  VAR_10->lock = FUNC_12();


  VAR_10->ClientAuth = FUNC_7(VAR_6->ClientAuth);


  VAR_10->ClientOption = FUNC_19(sizeof(CLIENT_OPTION));
  FUNC_6(VAR_10->ClientOption, VAR_6->ClientOption, sizeof(CLIENT_OPTION));

  VAR_10->StartupAccount = VAR_6->StartupAccount;

  VAR_10->CheckServerCert = VAR_6->CheckServerCert;
  VAR_10->RetryOnServerCert = VAR_6->RetryOnServerCert;
  if (VAR_6->ServerCert != ((void*)0))
  {
   VAR_10->ServerCert = FUNC_5(VAR_6->ServerCert);
  }


  if (FUNC_10(VAR_6->ShortcutKey, VAR_4))
  {
   FUNC_13(VAR_10->ShortcutKey, VAR_4);
  }
  else
  {
   FUNC_6(VAR_10->ShortcutKey, VAR_6->ShortcutKey, VAR_4);
  }

  VAR_10->CreateDateTime = VAR_10->UpdateDateTime = FUNC_15();


  FUNC_9(VAR_5->AccountList, VAR_10);

  FUNC_0(VAR_5, "LC_NEW_ACCOUNT", VAR_6->ClientOption->AccountName);
 }
 FUNC_18(VAR_5->AccountList);

 FUNC_1(VAR_5);

 FUNC_3(VAR_5);

 FUNC_2(VAR_5);

 return 1;
}
