
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int ShortcutKey; int * ServerCert; int LastConnectDateTime; int UpdateDateTime; int CreateDateTime; int RetryOnServerCert; int CheckServerCert; int StartupAccount; int ClientAuth; int ClientOption; } ;
typedef int FOLDER ;
typedef int BUF ;
typedef TYPE_1__ ACCOUNT ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_10 (int *,int) ;

void FUNC_11(FOLDER *VAR_1, ACCOUNT *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_7(FUNC_5(VAR_1, "ClientOption"), VAR_2->ClientOption);


 FUNC_6(FUNC_5(VAR_1, "ClientAuth"), VAR_2->ClientAuth);


 FUNC_1(VAR_1, "StartupAccount", VAR_2->StartupAccount);


 FUNC_1(VAR_1, "CheckServerCert", VAR_2->CheckServerCert);


 FUNC_1(VAR_1, "RetryOnServerCert", VAR_2->RetryOnServerCert);


 FUNC_3(VAR_1, "CreateDateTime", VAR_2->CreateDateTime);
 FUNC_3(VAR_1, "UpdateDateTime", VAR_2->UpdateDateTime);
 FUNC_3(VAR_1, "LastConnectDateTime", VAR_2->LastConnectDateTime);


 if (VAR_2->ServerCert != ((void*)0))
 {
  BUF *VAR_3 = FUNC_10(VAR_2->ServerCert, 0);
  if (VAR_3 != ((void*)0))
  {
   FUNC_2(VAR_1, "ServerCert", VAR_3);
   FUNC_8(VAR_3);
  }
 }


 if (FUNC_9(VAR_2->ShortcutKey, VAR_0) == 0)
 {
  char VAR_4[64];
  FUNC_0(VAR_4, sizeof(VAR_4), VAR_2->ShortcutKey, VAR_0);
  FUNC_4(VAR_1, "ShortcutKey", VAR_4);
 }
}
