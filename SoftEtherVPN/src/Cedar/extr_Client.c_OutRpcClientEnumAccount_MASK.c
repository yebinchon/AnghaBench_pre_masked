
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__** Items; } ;
struct TYPE_4__ {int LastConnectDateTime; int UpdateDateTime; int CreateDateTime; int HubName; int Port; int Connected; int StartupAccount; int Active; int ProxyType; int DeviceName; int ProxyName; int ServerName; int UserName; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_ACCOUNT_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_ACCOUNT ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*,int ,size_t,size_t) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(PACK *VAR_0, RPC_CLIENT_ENUM_ACCOUNT *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "NumItem", VAR_1->NumItem);

 FUNC_6(VAR_0, "AccountList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_CLIENT_ENUM_ACCOUNT_ITEM *VAR_3 = VAR_1->Items[VAR_2];

  FUNC_5(VAR_0, "AccountName", VAR_3->AccountName, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "UserName", VAR_3->UserName, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "ServerName", VAR_3->ServerName, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "ProxyName", VAR_3->ProxyName, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "DeviceName", VAR_3->DeviceName, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "ProxyType", VAR_3->ProxyType, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "Active", VAR_3->Active, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "StartupAccount", VAR_3->StartupAccount, VAR_2, VAR_1->NumItem);
  FUNC_0(VAR_0, "Connected", VAR_3->Connected, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "Port", VAR_3->Port, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "HubName", VAR_3->HubName, VAR_2, VAR_1->NumItem);
  FUNC_4(VAR_0, "CreateDateTime", VAR_3->CreateDateTime, VAR_2, VAR_1->NumItem);
  FUNC_4(VAR_0, "UpdateDateTime", VAR_3->UpdateDateTime, VAR_2, VAR_1->NumItem);
  FUNC_4(VAR_0, "LastConnectDateTime", VAR_3->LastConnectDateTime, VAR_2, VAR_1->NumItem);
 }
 FUNC_6(VAR_0, ((void*)0));
}
