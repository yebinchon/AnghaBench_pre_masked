
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int a ;
struct TYPE_7__ {int StartupAccount; int ServerCert; int RetryOnServerCert; int CheckServerCert; int ClientAuth; int ClientOption; } ;
struct TYPE_6__ {int StartupAccount; int ServerCert; int RetryOnServerCert; int CheckServerCert; int ClientAuth; int ClientOption; } ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int FOLDER ;
typedef int BUF ;
typedef TYPE_2__ ACCOUNT ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*,int) ;

BUF *FUNC_5(RPC_CLIENT_CREATE_ACCOUNT *VAR_1)
{
 BUF *VAR_2;
 FOLDER *VAR_3;
 ACCOUNT VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(((void*)0), VAR_0);
 FUNC_4(&VAR_4, sizeof(VAR_4));
 VAR_4.ClientOption = VAR_1->ClientOption;
 VAR_4.ClientAuth = VAR_1->ClientAuth;
 VAR_4.CheckServerCert = VAR_1->CheckServerCert;
 VAR_4.RetryOnServerCert = VAR_1->RetryOnServerCert;
 VAR_4.ServerCert = VAR_1->ServerCert;
 VAR_4.StartupAccount = VAR_1->StartupAccount;

 FUNC_3(VAR_3, &VAR_4);

 VAR_2 = FUNC_2(VAR_3, 1, 1);
 FUNC_1(VAR_3);

 return VAR_2;
}
