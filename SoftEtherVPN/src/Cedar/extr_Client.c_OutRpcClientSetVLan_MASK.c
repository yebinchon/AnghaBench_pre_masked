
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MacAddress; int DeviceName; } ;
typedef TYPE_1__ RPC_CLIENT_SET_VLAN ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(PACK *VAR_0, RPC_CLIENT_SET_VLAN *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "DeviceName", VAR_1->DeviceName);
 FUNC_0(VAR_0, "MacAddress", VAR_1->MacAddress);
}
