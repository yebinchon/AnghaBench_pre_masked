
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__* Items; } ;
struct TYPE_4__ {int Enabled; int Support; int DriverType; int DriverName; int DeviceInstanceId; int Guid; int DeviceName; } ;
typedef TYPE_1__ RPC_ENUM_ETH_VLAN_ITEM ;
typedef TYPE_2__ RPC_ENUM_ETH_VLAN ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(PACK *VAR_0, RPC_ENUM_ETH_VLAN *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "Devices");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_ENUM_ETH_VLAN_ITEM *VAR_3 = &VAR_1->Items[VAR_2];

  FUNC_1(VAR_0, "DeviceName", VAR_3->DeviceName, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "Guid", VAR_3->Guid, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "DeviceInstanceId", VAR_3->DeviceInstanceId, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "DriverName", VAR_3->DriverName, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "DriverType", VAR_3->DriverType, VAR_2, VAR_1->NumItem);
  FUNC_0(VAR_0, "Support", VAR_3->Support, VAR_2, VAR_1->NumItem);
  FUNC_0(VAR_0, "Enabled", VAR_3->Enabled, VAR_2, VAR_1->NumItem);
 }
 FUNC_2(VAR_0, ((void*)0));
}
