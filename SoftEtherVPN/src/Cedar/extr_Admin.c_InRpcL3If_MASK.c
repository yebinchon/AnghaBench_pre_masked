
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* SubnetMask; void* IpAddress; int HubName; int Name; } ;
typedef TYPE_1__ RPC_L3IF ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(RPC_L3IF *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(RPC_L3IF));
 FUNC_1(VAR_1, "Name", VAR_0->Name, sizeof(VAR_0->Name));
 FUNC_1(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->IpAddress = FUNC_0(VAR_1, "IpAddress");
 VAR_0->SubnetMask = FUNC_0(VAR_1, "SubnetMask");
}
