
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__* Items; int Name; } ;
struct TYPE_4__ {int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; } ;
typedef TYPE_1__ RPC_L3TABLE ;
typedef TYPE_2__ RPC_ENUM_L3TABLE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(PACK *VAR_0, RPC_ENUM_L3TABLE *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "NumItem", VAR_1->NumItem);
 FUNC_3(VAR_0, "Name", VAR_1->Name);

 FUNC_4(VAR_0, "L3Table");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_L3TABLE *VAR_3 = &VAR_1->Items[VAR_2];

  FUNC_2(VAR_0, "NetworkAddress", VAR_3->NetworkAddress, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "SubnetMask", VAR_3->SubnetMask, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "GatewayAddress", VAR_3->GatewayAddress, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "Metric", VAR_3->Metric, VAR_2, VAR_1->NumItem);
 }
 FUNC_4(VAR_0, ((void*)0));
}
