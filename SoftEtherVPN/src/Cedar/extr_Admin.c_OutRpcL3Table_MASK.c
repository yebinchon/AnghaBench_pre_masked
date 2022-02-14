
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; int Name; } ;
typedef TYPE_1__ RPC_L3TABLE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_L3TABLE *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "Name", VAR_1->Name);
 FUNC_1(VAR_0, "NetworkAddress", VAR_1->NetworkAddress);
 FUNC_1(VAR_0, "SubnetMask", VAR_1->SubnetMask);
 FUNC_1(VAR_0, "GatewayAddress", VAR_1->GatewayAddress);
 FUNC_0(VAR_0, "Metric", VAR_1->Metric);
}
