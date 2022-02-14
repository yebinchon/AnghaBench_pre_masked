
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Enabled; int Guid; int FileName; int Version; int MacAddress; int DeviceName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_VLAN ;
typedef int PACK ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(RPC_CLIENT_GET_VLAN *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(RPC_CLIENT_GET_VLAN));
 FUNC_1(VAR_1, "DeviceName", VAR_0->DeviceName, sizeof(VAR_0->DeviceName));
 VAR_0->Enabled = FUNC_0(VAR_1, "Enabled") ? 1 : 0;
 FUNC_1(VAR_1, "MacAddress", VAR_0->MacAddress, sizeof(VAR_0->MacAddress));
 FUNC_1(VAR_1, "Version", VAR_0->Version, sizeof(VAR_0->Version));
 FUNC_1(VAR_1, "FileName", VAR_0->FileName, sizeof(VAR_0->FileName));
 FUNC_1(VAR_1, "Guid", VAR_0->Guid, sizeof(VAR_0->Guid));
}
