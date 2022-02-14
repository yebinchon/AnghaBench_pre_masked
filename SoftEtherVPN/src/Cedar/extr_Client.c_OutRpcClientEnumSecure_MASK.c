
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__** Items; } ;
struct TYPE_4__ {int Manufacturer; int DeviceName; int Type; int DeviceId; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_SECURE_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_SECURE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(PACK *VAR_0, RPC_CLIENT_ENUM_SECURE *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "NumItem", VAR_1->NumItem);

 FUNC_3(VAR_0, "SecureDeviceList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_CLIENT_ENUM_SECURE_ITEM *VAR_3 = VAR_1->Items[VAR_2];

  FUNC_0(VAR_0, "DeviceId", VAR_3->DeviceId, VAR_2, VAR_1->NumItem);
  FUNC_0(VAR_0, "Type", VAR_3->Type, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "DeviceName", VAR_3->DeviceName, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "Manufacturer", VAR_3->Manufacturer, VAR_2, VAR_1->NumItem);
 }
 FUNC_3(VAR_0, ((void*)0));
}
