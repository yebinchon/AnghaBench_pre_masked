
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int NumItem; TYPE_1__** Items; } ;
struct TYPE_5__ {int Active; int StartupAccount; void* LastConnectDateTime; void* UpdateDateTime; void* CreateDateTime; int HubName; void* Port; int Connected; void* ProxyType; int DeviceName; int ProxyName; int ServerName; int UserName; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_ACCOUNT_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_ACCOUNT ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 void* FUNC_1 (int *,char*,size_t) ;
 void* FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int,size_t) ;
 int FUNC_5 (int *,char*,int ,int,size_t) ;
 int FUNC_6 (TYPE_2__*,int) ;
 void* FUNC_7 (int) ;

void FUNC_8(RPC_CLIENT_ENUM_ACCOUNT *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, sizeof(RPC_CLIENT_ENUM_ACCOUNT));

 VAR_0->NumItem = FUNC_3(VAR_1, "NumItem");
 VAR_0->Items = FUNC_7(sizeof(RPC_CLIENT_ENUM_ACCOUNT_ITEM *) * VAR_0->NumItem);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_CLIENT_ENUM_ACCOUNT_ITEM *VAR_3 = VAR_0->Items[VAR_2] =
   FUNC_7(sizeof(RPC_CLIENT_ENUM_ACCOUNT_ITEM));

  FUNC_5(VAR_1, "AccountName", VAR_3->AccountName, sizeof(VAR_3->AccountName), VAR_2);
  FUNC_4(VAR_1, "UserName", VAR_3->UserName, sizeof(VAR_3->UserName), VAR_2);
  FUNC_4(VAR_1, "ServerName", VAR_3->ServerName, sizeof(VAR_3->ServerName), VAR_2);
  FUNC_4(VAR_1, "ProxyName", VAR_3->ProxyName, sizeof(VAR_3->ProxyName), VAR_2);
  FUNC_4(VAR_1, "DeviceName", VAR_3->DeviceName, sizeof(VAR_3->DeviceName), VAR_2);
  VAR_3->ProxyType = FUNC_2(VAR_1, "ProxyType", VAR_2);
  VAR_3->Active = FUNC_2(VAR_1, "Active", VAR_2) ? 1 : 0;
  VAR_3->StartupAccount = FUNC_2(VAR_1, "StartupAccount", VAR_2) ? 1 : 0;
  VAR_3->Connected = FUNC_0(VAR_1, "Connected", VAR_2);
  VAR_3->Port = FUNC_2(VAR_1, "Port", VAR_2);
  FUNC_4(VAR_1, "HubName", VAR_3->HubName, sizeof(VAR_3->HubName), VAR_2);
  VAR_3->CreateDateTime = FUNC_1(VAR_1, "CreateDateTime", VAR_2);
  VAR_3->UpdateDateTime = FUNC_1(VAR_1, "UpdateDateTime", VAR_2);
  VAR_3->LastConnectDateTime = FUNC_1(VAR_1, "LastConnectDateTime", VAR_2);
 }
}
