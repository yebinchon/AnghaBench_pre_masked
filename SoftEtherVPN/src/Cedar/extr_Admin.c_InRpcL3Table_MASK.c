
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Metric; void* GatewayAddress; void* SubnetMask; void* NetworkAddress; int Name; } ;
typedef TYPE_1__ RPC_L3TABLE ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_L3TABLE *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_L3TABLE));
 FUNC_2(VAR_1, "Name", VAR_0->Name, sizeof(VAR_0->Name));
 VAR_0->NetworkAddress = FUNC_1(VAR_1, "NetworkAddress");
 VAR_0->SubnetMask = FUNC_1(VAR_1, "SubnetMask");
 VAR_0->GatewayAddress = FUNC_1(VAR_1, "GatewayAddress");
 VAR_0->Metric = FUNC_0(VAR_1, "Metric");
}
