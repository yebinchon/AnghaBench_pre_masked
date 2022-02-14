
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_10__ {int ShortcutKey; int ServerCert; void* LastConnectDateTime; void* UpdateDateTime; void* CreateDateTime; void* RetryOnServerCert; void* CheckServerCert; void* StartupAccount; int ClientAuth; int ClientOption; int lock; } ;
struct TYPE_9__ {scalar_t__ Size; int Buf; } ;
typedef int FOLDER ;
typedef TYPE_1__ BUF ;
typedef TYPE_2__ ACCOUNT ;


 int FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_13 (char*) ;
 TYPE_2__* FUNC_14 (int) ;

ACCOUNT *FUNC_15(FOLDER *VAR_1)
{
 ACCOUNT *VAR_2;
 FOLDER *VAR_3, *VAR_4;
 BUF *VAR_5;
 char VAR_6[64];

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(VAR_1, "ClientOption");

 if (VAR_3 != ((void*)0))
 {

 }

 VAR_4 = FUNC_3(VAR_1, "ClientAuth");

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_14(sizeof(ACCOUNT));
 VAR_2->lock = FUNC_11();

 VAR_2->ClientOption = FUNC_7(VAR_3);
 VAR_2->ClientAuth = FUNC_6(VAR_4);

 VAR_2->StartupAccount = FUNC_1(VAR_1, "StartupAccount");
 VAR_2->CheckServerCert = FUNC_1(VAR_1, "CheckServerCert");
 VAR_2->RetryOnServerCert = FUNC_1(VAR_1, "RetryOnServerCert");
 VAR_2->CreateDateTime = FUNC_4(VAR_1, "CreateDateTime");
 VAR_2->UpdateDateTime = FUNC_4(VAR_1, "UpdateDateTime");
 VAR_2->LastConnectDateTime = FUNC_4(VAR_1, "LastConnectDateTime");

 VAR_5 = FUNC_2(VAR_1, "ServerCert");
 if (VAR_5 != ((void*)0))
 {
  VAR_2->ServerCert = FUNC_0(VAR_5, 0);
  FUNC_9(VAR_5);
 }

 if (FUNC_5(VAR_1, "ShortcutKey", VAR_6, sizeof(VAR_6)))
 {
  BUF *VAR_7 = FUNC_13(VAR_6);
  if (VAR_7->Size == VAR_0)
  {
   FUNC_8(VAR_2->ShortcutKey, VAR_7->Buf, VAR_0);
  }
  FUNC_9(VAR_7);
 }

 if (FUNC_10(VAR_2->ShortcutKey, VAR_0))
 {
  FUNC_12(VAR_2->ShortcutKey, VAR_0);
 }

 return VAR_2;
}
