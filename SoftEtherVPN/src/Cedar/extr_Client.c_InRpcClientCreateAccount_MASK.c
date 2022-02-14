
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int StartupAccount; int CheckServerCert; int RetryOnServerCert; int ShortcutKey; int ServerCert; void* ClientAuth; void* ClientOption; } ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int PACK ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;
typedef int BUF ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (void*,int *) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 void* FUNC_8 (int) ;

void FUNC_9(RPC_CLIENT_CREATE_ACCOUNT *VAR_0, PACK *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, sizeof(RPC_CLIENT_CREATE_ACCOUNT));
 VAR_0->ClientOption = FUNC_8(sizeof(CLIENT_OPTION));
 VAR_0->ClientAuth = FUNC_8(sizeof(CLIENT_AUTH));

 FUNC_3(VAR_0->ClientOption, VAR_1);
 FUNC_2(VAR_0->ClientAuth, VAR_1);

 VAR_0->StartupAccount = FUNC_6(VAR_1, "StartupAccount") ? 1 : 0;
 VAR_0->CheckServerCert = FUNC_6(VAR_1, "CheckServerCert") ? 1 : 0;
 VAR_0->RetryOnServerCert = FUNC_6(VAR_1, "RetryOnServerCert") ? 1 : 0;
 VAR_2 = FUNC_4(VAR_1, "ServerCert");
 if (VAR_2 != ((void*)0))
 {
  VAR_0->ServerCert = FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2);
 }
 FUNC_5(VAR_1, "ShortcutKey", VAR_0->ShortcutKey, sizeof(VAR_0->ShortcutKey));
}
