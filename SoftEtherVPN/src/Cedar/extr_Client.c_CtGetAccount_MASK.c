
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int AccountName; } ;
struct TYPE_14__ {int lock; int UpdateDateTime; int LastConnectDateTime; int CreateDateTime; TYPE_6__* ShortcutKey; int * ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int ClientAuth; TYPE_6__* ClientOption; } ;
struct TYPE_13__ {int AccountList; } ;
struct TYPE_12__ {int UpdateDateTime; int LastConnectDateTime; int CreateDateTime; TYPE_6__* ShortcutKey; int * ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int * ClientAuth; TYPE_6__* ClientOption; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_ACCOUNT ;
typedef int CLIENT_OPTION ;
typedef TYPE_2__ CLIENT ;
typedef TYPE_3__ ACCOUNT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,TYPE_6__*,int) ;
 int * FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int) ;

bool FUNC_13(CLIENT *VAR_2, RPC_CLIENT_GET_ACCOUNT *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_7(VAR_2->AccountList);
 {
  ACCOUNT VAR_4, *VAR_5;


  VAR_4.ClientOption = FUNC_12(sizeof(CLIENT_OPTION));
  FUNC_9(VAR_4.ClientOption->AccountName, sizeof(VAR_4.ClientOption->AccountName), VAR_3->AccountName);

  VAR_5 = FUNC_8(VAR_2->AccountList, &VAR_4);
  if (VAR_5 == ((void*)0))
  {

   FUNC_11(VAR_2->AccountList);

   FUNC_5(VAR_4.ClientOption);
   FUNC_1(VAR_2, VAR_0);
   return 0;
  }

  FUNC_5(VAR_4.ClientOption);

  FUNC_6(VAR_5->lock);
  {

   if (VAR_3->ClientOption != ((void*)0))
   {
    FUNC_5(VAR_3->ClientOption);
   }
   VAR_3->ClientOption = FUNC_12(sizeof(CLIENT_OPTION));
   FUNC_3(VAR_3->ClientOption, VAR_5->ClientOption, sizeof(CLIENT_OPTION));


   if (VAR_3->ClientAuth != ((void*)0))
   {
    FUNC_0(VAR_3->ClientAuth);
   }
   VAR_3->ClientAuth = FUNC_4(VAR_5->ClientAuth);

   VAR_3->StartupAccount = VAR_5->StartupAccount;

   VAR_3->CheckServerCert = VAR_5->CheckServerCert;
   VAR_3->RetryOnServerCert = VAR_5->RetryOnServerCert;
   VAR_3->ServerCert = ((void*)0);
   if (VAR_5->ServerCert != ((void*)0))
   {
    VAR_3->ServerCert = FUNC_2(VAR_5->ServerCert);
   }


   FUNC_3(VAR_3->ShortcutKey, VAR_5->ShortcutKey, VAR_1);

   VAR_3->CreateDateTime = VAR_5->CreateDateTime;
   VAR_3->LastConnectDateTime = VAR_5->LastConnectDateTime;
   VAR_3->UpdateDateTime = VAR_5->UpdateDateTime;
  }
  FUNC_10(VAR_5->lock);

 }
 FUNC_11(VAR_2->AccountList);

 return 1;
}
