
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__* Items; } ;
struct TYPE_4__ {int SerialId; int SystemId; int ProductId; int Status; int Expires; int LicenseName; int LicenseId; int LicenseKey; int Id; } ;
typedef TYPE_1__ RPC_ENUM_LICENSE_KEY_ITEM ;
typedef TYPE_2__ RPC_ENUM_LICENSE_KEY ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(PACK *VAR_0, RPC_ENUM_LICENSE_KEY *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "NumItem", VAR_1->NumItem);

 FUNC_5(VAR_0, "LicenseKeyList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_ENUM_LICENSE_KEY_ITEM *VAR_3 = &VAR_1->Items[VAR_2];

  FUNC_2(VAR_0, "Id", VAR_3->Id, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "LicenseKey", VAR_3->LicenseKey, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "LicenseId", VAR_3->LicenseId, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "LicenseName", VAR_3->LicenseName, VAR_2, VAR_1->NumItem);
  FUNC_4(VAR_0, "Expires", VAR_3->Expires, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "Status", VAR_3->Status, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "ProductId", VAR_3->ProductId, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "SystemId", VAR_3->SystemId, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "SerialId", VAR_3->SerialId, VAR_2, VAR_1->NumItem);
 }
 FUNC_5(VAR_0, ((void*)0));
}
