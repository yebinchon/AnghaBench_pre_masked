
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SubnetMask; int IpAddress; int HubName; int Name; } ;
typedef TYPE_1__ RPC_L3IF ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, RPC_L3IF *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "Name", VAR_1->Name);
 FUNC_1(VAR_0, "HubName", VAR_1->HubName);
 FUNC_0(VAR_0, "IpAddress", VAR_1->IpAddress);
 FUNC_0(VAR_0, "SubnetMask", VAR_1->SubnetMask);
}
