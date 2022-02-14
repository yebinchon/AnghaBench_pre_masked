
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__* Items; } ;
struct TYPE_6__ {void* SerialId; void* SystemId; void* ProductId; void* Status; void* Expires; int LicenseName; int LicenseId; int LicenseKey; void* Id; } ;
typedef TYPE_1__ RPC_ENUM_LICENSE_KEY_ITEM ;
typedef TYPE_2__ RPC_ENUM_LICENSE_KEY ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*,size_t) ;
 void* FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,int,size_t) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_5 (int) ;

void FUNC_6(RPC_ENUM_LICENSE_KEY *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_ENUM_LICENSE_KEY));
 VAR_0->NumItem = FUNC_0(VAR_1, "NumItem");
 VAR_0->Items = FUNC_5(sizeof(RPC_ENUM_LICENSE_KEY_ITEM) * VAR_0->NumItem);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_ENUM_LICENSE_KEY_ITEM *VAR_3 = &VAR_0->Items[VAR_2];

  VAR_3->Id = FUNC_2(VAR_1, "Id", VAR_2);
  FUNC_3(VAR_1, "LicenseKey", VAR_3->LicenseKey, sizeof(VAR_3->LicenseKey), VAR_2);
  FUNC_3(VAR_1, "LicenseId", VAR_3->LicenseId, sizeof(VAR_3->LicenseId), VAR_2);
  FUNC_3(VAR_1, "LicenseName", VAR_3->LicenseName, sizeof(VAR_3->LicenseName), VAR_2);
  VAR_3->Expires = FUNC_1(VAR_1, "Expires", VAR_2);
  VAR_3->Status = FUNC_2(VAR_1, "Status", VAR_2);
  VAR_3->ProductId = FUNC_2(VAR_1, "ProductId", VAR_2);
  VAR_3->SystemId = FUNC_1(VAR_1, "SystemId", VAR_2);
  VAR_3->SerialId = FUNC_2(VAR_1, "SerialId", VAR_2);
 }
}
