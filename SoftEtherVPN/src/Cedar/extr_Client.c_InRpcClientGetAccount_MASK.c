
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int StartupAccount; int CheckServerCert; int RetryOnServerCert; int ShortcutKey; void* LastConnectDateTime; void* UpdateDateTime; void* CreateDateTime; void* ClientAuth; void* ClientOption; int ServerCert; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_ACCOUNT ;
typedef int PACK ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;
typedef int BUF ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (void*,int *) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_9 (TYPE_1__*,int) ;
 void* FUNC_10 (int) ;

void FUNC_11(RPC_CLIENT_GET_ACCOUNT *VAR_1, PACK *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_9(VAR_1, sizeof(RPC_CLIENT_GET_ACCOUNT));

 VAR_1->ClientOption = FUNC_10(sizeof(CLIENT_OPTION));
 VAR_1->ClientAuth = FUNC_10(sizeof(CLIENT_AUTH));

 FUNC_8(VAR_2, "AccountName", VAR_1->AccountName, sizeof(VAR_1->AccountName));
 VAR_1->StartupAccount = FUNC_6(VAR_2, "StartupAccount") ? 1 : 0;
 VAR_1->CheckServerCert = FUNC_6(VAR_2, "CheckServerCert") ? 1 : 0;
 VAR_1->RetryOnServerCert = FUNC_6(VAR_2, "RetryOnServerCert") ? 1 : 0;
 VAR_3 = FUNC_4(VAR_2, "ServerCert");
 if (VAR_3 != ((void*)0))
 {
  VAR_1->ServerCert = FUNC_0(VAR_3, 0);
  FUNC_1(VAR_3);
 }

 FUNC_3(VAR_1->ClientOption, VAR_2);
 FUNC_2(VAR_1->ClientAuth, VAR_2);

 VAR_1->CreateDateTime = FUNC_7(VAR_2, "CreateDateTime");
 VAR_1->UpdateDateTime = FUNC_7(VAR_2, "UpdateDateTime");
 VAR_1->LastConnectDateTime = FUNC_7(VAR_2, "LastConnectDateTime");

 FUNC_5(VAR_2, "ShortcutKey", VAR_1->ShortcutKey, VAR_0);
}
