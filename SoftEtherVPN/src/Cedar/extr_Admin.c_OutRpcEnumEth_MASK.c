
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__* Items; } ;
struct TYPE_4__ {int NetworkConnectionName; int DeviceName; } ;
typedef TYPE_1__ RPC_ENUM_ETH_ITEM ;
typedef TYPE_2__ RPC_ENUM_ETH ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(PACK *VAR_0, RPC_ENUM_ETH *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "NumItem", VAR_1->NumItem);

 FUNC_3(VAR_0, "EthList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_ENUM_ETH_ITEM *VAR_3 = &VAR_1->Items[VAR_2];
  FUNC_1(VAR_0, "DeviceName", VAR_3->DeviceName, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "NetworkConnectionName", VAR_3->NetworkConnectionName, VAR_2, VAR_1->NumItem);
 }
 FUNC_3(VAR_0, ((void*)0));
}
