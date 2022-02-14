
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_24__ {int AccountName; } ;
struct TYPE_23__ {int lock; int UpdateDateTime; int * ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; TYPE_7__* ClientOption; int ClientAuth; int * ClientSession; } ;
struct TYPE_22__ {int AccountList; } ;
struct TYPE_21__ {TYPE_13__* ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; TYPE_12__* ClientOption; TYPE_10__* ClientAuth; } ;
struct TYPE_20__ {int is_compatible_bit; } ;
struct TYPE_19__ {int is_compatible_bit; } ;
struct TYPE_18__ {int AccountName; } ;
struct TYPE_17__ {scalar_t__ AuthType; int * ClientK; TYPE_1__* ClientX; } ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int CLIENT_OPTION ;
typedef TYPE_3__ CLIENT ;
typedef TYPE_4__ ACCOUNT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int * FUNC_4 (TYPE_13__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_12__*,int) ;
 int FUNC_6 (TYPE_10__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (int ,TYPE_4__*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (int) ;

bool FUNC_17(CLIENT *VAR_4, RPC_CLIENT_CREATE_ACCOUNT *VAR_5, bool VAR_6)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }



 FUNC_10(VAR_4->AccountList);
 {
  ACCOUNT VAR_7, *VAR_8;
  VAR_7.ClientOption = FUNC_16(sizeof(CLIENT_OPTION));
  FUNC_13(VAR_7.ClientOption->AccountName, sizeof(VAR_7.ClientOption->AccountName),
   VAR_5->ClientOption->AccountName);

  VAR_8 = FUNC_11(VAR_4->AccountList, &VAR_7);
  if (VAR_8 == ((void*)0))
  {

   FUNC_15(VAR_4->AccountList);
   FUNC_7(VAR_7.ClientOption);

   FUNC_3(VAR_4, VAR_2);

   return 0;
  }
  FUNC_7(VAR_7.ClientOption);

  if (VAR_5->ClientAuth->AuthType == VAR_0)
  {
   if (VAR_5->ClientAuth->ClientX == ((void*)0) ||
    VAR_5->ClientAuth->ClientX->is_compatible_bit == 0 ||
    VAR_5->ClientAuth->ClientK == ((void*)0))
   {

    FUNC_15(VAR_4->AccountList);
    FUNC_3(VAR_4, VAR_3);
    return 0;
   }
  }

  if (VAR_5->ServerCert != ((void*)0) && VAR_5->ServerCert->is_compatible_bit == 0)
  {

   FUNC_15(VAR_4->AccountList);
   FUNC_3(VAR_4, VAR_3);
   return 0;
  }

  FUNC_9(VAR_8->lock);
  {
   FUNC_0(VAR_8->ClientAuth);


   VAR_8->ClientAuth = FUNC_6(VAR_5->ClientAuth);


   FUNC_7(VAR_8->ClientOption);


   VAR_8->ClientOption = FUNC_16(sizeof(CLIENT_OPTION));
   FUNC_5(VAR_8->ClientOption, VAR_5->ClientOption, sizeof(CLIENT_OPTION));

   VAR_8->StartupAccount = VAR_5->StartupAccount;

   VAR_8->CheckServerCert = VAR_5->CheckServerCert;
   VAR_8->RetryOnServerCert = VAR_5->RetryOnServerCert;

   if (VAR_5->ServerCert != ((void*)0))
   {
    if (VAR_8->ServerCert != ((void*)0))
    {
     FUNC_8(VAR_8->ServerCert);
    }
    VAR_8->ServerCert = FUNC_4(VAR_5->ServerCert);
   }
   else
   {
    if (VAR_8->ServerCert != ((void*)0))
    {
     FUNC_8(VAR_8->ServerCert);
    }
    VAR_8->ServerCert = 0;
   }

   VAR_8->UpdateDateTime = FUNC_12();
  }
  FUNC_14(VAR_8->lock);
 }
 FUNC_15(VAR_4->AccountList);

 FUNC_2(VAR_4);

 FUNC_1(VAR_4);

 return 1;
}
