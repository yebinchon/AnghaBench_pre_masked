
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int NumItem; TYPE_1__** Items; } ;
struct TYPE_5__ {int Manufacturer; int DeviceName; void* Type; void* DeviceId; } ;
typedef TYPE_1__ RPC_CLIENT_ENUM_SECURE_ITEM ;
typedef TYPE_2__ RPC_CLIENT_ENUM_SECURE ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int,size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 void* FUNC_4 (int) ;

void FUNC_5(RPC_CLIENT_ENUM_SECURE *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_CLIENT_ENUM_SECURE));

 VAR_0->NumItem = FUNC_1(VAR_1, "NumItem");
 VAR_0->Items = FUNC_4(sizeof(RPC_CLIENT_ENUM_SECURE_ITEM *) * VAR_0->NumItem);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_CLIENT_ENUM_SECURE_ITEM *VAR_3 = VAR_0->Items[VAR_2] = FUNC_4(sizeof(RPC_CLIENT_ENUM_SECURE_ITEM));

  VAR_3->DeviceId = FUNC_0(VAR_1, "DeviceId", VAR_2);
  VAR_3->Type = FUNC_0(VAR_1, "Type", VAR_2);
  FUNC_2(VAR_1, "DeviceName", VAR_3->DeviceName, sizeof(VAR_3->DeviceName), VAR_2);
  FUNC_2(VAR_1, "Manufacturer", VAR_3->Manufacturer, sizeof(VAR_3->Manufacturer), VAR_2);
 }
}
