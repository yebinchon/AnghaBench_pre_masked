
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_17__ {int UpdateDateTime; int LastConnectDateTime; int CreateDateTime; TYPE_3__* ClientOption; TYPE_2__* ClientSession; int StartupAccount; TYPE_1__* ClientAuth; } ;
struct TYPE_16__ {int AccountList; } ;
struct TYPE_15__ {int NumItem; TYPE_4__** Items; } ;
struct TYPE_14__ {scalar_t__ ProxyType; int Active; int Connected; int UpdateDateTime; int LastConnectDateTime; int CreateDateTime; int HubName; int Port; int StartupAccount; int ProxyName; int DeviceName; int ServerName; int UserName; int AccountName; } ;
struct TYPE_13__ {scalar_t__ ProxyType; int HubName; int Port; int ProxyName; int DeviceName; int Hostname; int AccountName; } ;
struct TYPE_12__ {int ConnectSucceed; } ;
struct TYPE_11__ {int Username; } ;
typedef TYPE_4__ RPC_CLIENT_ENUM_ACCOUNT_ITEM ;
typedef TYPE_5__ RPC_CLIENT_ENUM_ACCOUNT ;
typedef TYPE_6__ CLIENT ;
typedef TYPE_7__ ACCOUNT ;


 TYPE_7__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;

bool FUNC_7(CLIENT *VAR_1, RPC_CLIENT_ENUM_ACCOUNT *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_1->AccountList);
 {
  UINT VAR_3;

  VAR_2->NumItem = FUNC_1(VAR_1->AccountList);
  VAR_2->Items = FUNC_6(sizeof(RPC_CLIENT_ENUM_ACCOUNT_ITEM *) * VAR_2->NumItem);

  for (VAR_3 = 0;VAR_3 < VAR_2->NumItem;VAR_3++)
  {
   ACCOUNT *VAR_4 = FUNC_0(VAR_1->AccountList, VAR_3);
   RPC_CLIENT_ENUM_ACCOUNT_ITEM *VAR_5 = FUNC_6(sizeof(RPC_CLIENT_ENUM_ACCOUNT_ITEM));
   VAR_2->Items[VAR_3] = VAR_5;


   FUNC_4(VAR_5->AccountName, sizeof(VAR_5->AccountName), VAR_4->ClientOption->AccountName);


   FUNC_3(VAR_5->UserName, sizeof(VAR_5->UserName), VAR_4->ClientAuth->Username);


   FUNC_3(VAR_5->ServerName, sizeof(VAR_5->ServerName), VAR_4->ClientOption->Hostname);


   VAR_5->ProxyType = VAR_4->ClientOption->ProxyType;


   FUNC_3(VAR_5->DeviceName, sizeof(VAR_5->DeviceName), VAR_4->ClientOption->DeviceName);


   if (VAR_5->ProxyType != VAR_0)
   {
    FUNC_3(VAR_5->ProxyName, sizeof(VAR_5->ProxyName), VAR_4->ClientOption->ProxyName);
   }


   VAR_5->StartupAccount = VAR_4->StartupAccount;


   VAR_5->Active = (VAR_4->ClientSession == ((void*)0) ? 0 : 1);


   VAR_5->Connected = (VAR_5->Active == 0) ? 0 : VAR_4->ClientSession->ConnectSucceed;


   VAR_5->Port = VAR_4->ClientOption->Port;


   FUNC_3(VAR_5->HubName, sizeof(VAR_5->HubName), VAR_4->ClientOption->HubName);

   VAR_5->CreateDateTime = VAR_4->CreateDateTime;
   VAR_5->LastConnectDateTime = VAR_4->LastConnectDateTime;
   VAR_5->UpdateDateTime = VAR_4->UpdateDateTime;
  }
 }
 FUNC_5(VAR_1->AccountList);

 return 1;
}
