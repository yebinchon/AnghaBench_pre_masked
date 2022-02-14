
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__* Items; } ;
struct TYPE_6__ {void* Enabled; void* Support; int DriverType; int DriverName; int DeviceInstanceId; int Guid; int DeviceName; } ;
typedef TYPE_1__ RPC_ENUM_ETH_VLAN_ITEM ;
typedef TYPE_2__ RPC_ENUM_ETH_VLAN ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int,size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_4 (int) ;

void FUNC_5(RPC_ENUM_ETH_VLAN *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_ENUM_ETH_VLAN));

 VAR_0->NumItem = FUNC_1(VAR_1, "DeviceName");
 VAR_0->Items = FUNC_4(sizeof(RPC_ENUM_ETH_VLAN_ITEM) * VAR_0->NumItem);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_ENUM_ETH_VLAN_ITEM *VAR_3 = &VAR_0->Items[VAR_2];

  FUNC_2(VAR_1, "DeviceName", VAR_3->DeviceName, sizeof(VAR_3->DeviceName), VAR_2);
  FUNC_2(VAR_1, "Guid", VAR_3->Guid, sizeof(VAR_3->Guid), VAR_2);
  FUNC_2(VAR_1, "DeviceInstanceId", VAR_3->DeviceInstanceId, sizeof(VAR_3->DeviceInstanceId), VAR_2);
  FUNC_2(VAR_1, "DriverName", VAR_3->DriverName, sizeof(VAR_3->DriverName), VAR_2);
  FUNC_2(VAR_1, "DriverType", VAR_3->DriverType, sizeof(VAR_3->DriverType), VAR_2);
  VAR_3->Support = FUNC_0(VAR_1, "Support", VAR_2);
  VAR_3->Enabled = FUNC_0(VAR_1, "Enabled", VAR_2);
 }
}
