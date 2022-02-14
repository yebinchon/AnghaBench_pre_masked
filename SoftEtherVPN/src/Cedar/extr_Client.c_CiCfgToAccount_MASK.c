
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int ClientAuth; int ClientOption; int lock; } ;
struct TYPE_7__ {int ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int ClientAuth; int ClientOption; } ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int FOLDER ;
typedef int BUF ;
typedef TYPE_2__ ACCOUNT ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int) ;

RPC_CLIENT_CREATE_ACCOUNT *FUNC_6(BUF *VAR_0)
{
 RPC_CLIENT_CREATE_ACCOUNT *VAR_1;
 FOLDER *VAR_2;
 ACCOUNT *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_3->lock);

 VAR_1 = FUNC_5(sizeof(RPC_CLIENT_CREATE_ACCOUNT));
 VAR_1->ClientOption = VAR_3->ClientOption;
 VAR_1->ClientAuth = VAR_3->ClientAuth;
 VAR_1->StartupAccount = VAR_3->StartupAccount;
 VAR_1->CheckServerCert = VAR_3->CheckServerCert;
 VAR_1->RetryOnServerCert = VAR_3->RetryOnServerCert;
 VAR_1->ServerCert = VAR_3->ServerCert;
 FUNC_4(VAR_3);

 return VAR_1;
}
