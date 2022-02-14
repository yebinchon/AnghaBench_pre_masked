
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int a ;
typedef size_t UINT ;
struct TYPE_17__ {int Rpc; } ;
struct TYPE_16__ {size_t NumItem; TYPE_3__** Items; } ;
struct TYPE_15__ {scalar_t__ Port; int HubName; int AccountName; } ;
struct TYPE_14__ {TYPE_1__* ClientOption; int AccountName; } ;
struct TYPE_13__ {scalar_t__ Port; int HubName; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_3__ RPC_CLIENT_ENUM_ACCOUNT_ITEM ;
typedef TYPE_4__ RPC_CLIENT_ENUM_ACCOUNT ;
typedef TYPE_5__ REMOTE_CLIENT ;
typedef int PACK ;


 size_t FUNC_0 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ,char*,int *) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;

UINT FUNC_11(REMOTE_CLIENT *VAR_2, RPC_CLIENT_ENUM_ACCOUNT *VAR_3)
{
 PACK *VAR_4;
 UINT VAR_5 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_4 = FUNC_5(VAR_2->Rpc, "EnumAccount", ((void*)0));

 if (FUNC_7(VAR_4))
 {
  UINT VAR_6;
  FUNC_3(VAR_3, VAR_4);

  for (VAR_6 = 0;VAR_6 < VAR_3->NumItem;VAR_6++)
  {
   RPC_CLIENT_ENUM_ACCOUNT_ITEM *VAR_7 = VAR_3->Items[VAR_6];

   if (FUNC_4(VAR_7->HubName) && VAR_7->Port == 0)
   {
    UINT VAR_8;
    RPC_CLIENT_GET_ACCOUNT VAR_9;



    FUNC_10(&VAR_9, sizeof(VAR_9));
    FUNC_9(VAR_9.AccountName, sizeof(VAR_9.AccountName), VAR_7->AccountName);
    VAR_8 = FUNC_0(VAR_2, &VAR_9);
    if (VAR_8 == VAR_1)
    {
     FUNC_8(VAR_7->HubName, sizeof(VAR_7->HubName), VAR_9.ClientOption->HubName);
     VAR_7->Port = VAR_9.ClientOption->Port;

     FUNC_1(&VAR_9);
    }
   }
  }
 }
 else
 {
  VAR_5 = FUNC_6(VAR_4);
 }

 FUNC_2(VAR_4);

 return VAR_5;
}
