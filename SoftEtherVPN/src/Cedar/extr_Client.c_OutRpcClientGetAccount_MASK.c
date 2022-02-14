
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int LastConnectDateTime; int UpdateDateTime; int CreateDateTime; int ShortcutKey; int ClientAuth; int ClientOption; int * ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_ACCOUNT ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 int VAR_0 ;
 int * FUNC_8 (int *,int) ;

void FUNC_9(PACK *VAR_1, RPC_CLIENT_GET_ACCOUNT *VAR_2)
{
 BUF *VAR_3;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_1, "AccountName", VAR_2->AccountName);
 FUNC_5(VAR_1, "StartupAccount", VAR_2->StartupAccount);
 FUNC_5(VAR_1, "CheckServerCert", VAR_2->CheckServerCert);
 FUNC_5(VAR_1, "RetryOnServerCert", VAR_2->RetryOnServerCert);

 if (VAR_2->ServerCert != ((void*)0))
 {
  VAR_3 = FUNC_8(VAR_2->ServerCert, 0);
  if (VAR_3 != ((void*)0))
  {
   FUNC_3(VAR_1, "ServerCert", VAR_3);
   FUNC_0(VAR_3);
  }
 }

 FUNC_2(VAR_1, VAR_2->ClientOption);
 FUNC_1(VAR_1, VAR_2->ClientAuth);

 FUNC_4(VAR_1, "ShortcutKey", VAR_2->ShortcutKey, VAR_0);

 FUNC_6(VAR_1, "CreateDateTime", VAR_2->CreateDateTime);
 FUNC_6(VAR_1, "UpdateDateTime", VAR_2->UpdateDateTime);
 FUNC_6(VAR_1, "LastConnectDateTime", VAR_2->LastConnectDateTime);
}
