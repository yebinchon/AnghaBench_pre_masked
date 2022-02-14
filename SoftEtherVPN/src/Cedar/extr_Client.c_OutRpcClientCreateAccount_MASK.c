
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ShortcutKey; int * ServerCert; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int ClientAuth; int ClientOption; } ;
typedef TYPE_1__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (int *,int) ;

void FUNC_7(PACK *VAR_0, RPC_CLIENT_CREATE_ACCOUNT *VAR_1)
{
 BUF *VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, VAR_1->ClientOption);
 FUNC_1(VAR_0, VAR_1->ClientAuth);

 FUNC_5(VAR_0, "StartupAccount", VAR_1->StartupAccount);
 FUNC_5(VAR_0, "CheckServerCert", VAR_1->CheckServerCert);
 FUNC_5(VAR_0, "RetryOnServerCert", VAR_1->RetryOnServerCert);
 if (VAR_1->ServerCert != ((void*)0))
 {
  VAR_2 = FUNC_6(VAR_1->ServerCert, 0);
  if (VAR_2 != ((void*)0))
  {
   FUNC_3(VAR_0, "ServerCert", VAR_2);
   FUNC_0(VAR_2);
  }
 }
 FUNC_4(VAR_0, "ShortcutKey", VAR_1->ShortcutKey, sizeof(VAR_1->ShortcutKey));
}
