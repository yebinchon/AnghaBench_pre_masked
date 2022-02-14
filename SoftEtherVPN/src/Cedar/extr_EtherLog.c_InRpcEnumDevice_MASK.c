
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumItem; int IsLicenseSupported; TYPE_1__* Items; } ;
struct TYPE_6__ {int Active; int DeviceName; } ;
typedef TYPE_1__ RPC_ENUM_DEVICE_ITEM ;
typedef TYPE_2__ RPC_ENUM_DEVICE ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int,size_t) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_5 (int) ;

void FUNC_6(RPC_ENUM_DEVICE *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_ENUM_DEVICE));
 VAR_0->NumItem = FUNC_2(VAR_1, "NumItem");
 VAR_0->Items = FUNC_5(sizeof(RPC_ENUM_DEVICE_ITEM) * VAR_0->NumItem);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_ENUM_DEVICE_ITEM *VAR_3 = &VAR_0->Items[VAR_2];

  FUNC_3(VAR_1, "DeviceName", VAR_3->DeviceName, sizeof(VAR_3->DeviceName), VAR_2);
  VAR_3->Active = FUNC_1(VAR_1, "Active", VAR_2);
 }

 VAR_0->IsLicenseSupported = FUNC_0(VAR_1, "IsLicenseSupported");
}
