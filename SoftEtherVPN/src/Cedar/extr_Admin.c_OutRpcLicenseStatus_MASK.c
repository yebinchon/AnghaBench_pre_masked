
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ReleaseDate; int NumUserCreationLicense; int IsSubscriptionExpired; int SubscriptionExpires; int AllowEnterpriseFunction; int NeedSubscription; int NumBridgeConnectLicense; int NumClientConnectLicense; int SystemExpires; int SystemId; int EditionStr; int EditionId; } ;
typedef TYPE_1__ RPC_LICENSE_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;

void FUNC_5(PACK *VAR_0, RPC_LICENSE_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "EditionId", VAR_1->EditionId);
 FUNC_3(VAR_0, "EditionStr", VAR_1->EditionStr);
 FUNC_2(VAR_0, "SystemId", VAR_1->SystemId);
 FUNC_4(VAR_0, "SystemExpires", VAR_1->SystemExpires);
 FUNC_1(VAR_0, "NumClientConnectLicense", VAR_1->NumClientConnectLicense);
 FUNC_1(VAR_0, "NumBridgeConnectLicense", VAR_1->NumBridgeConnectLicense);


 FUNC_0(VAR_0, "NeedSubscription", VAR_1->NeedSubscription);
 FUNC_0(VAR_0, "AllowEnterpriseFunction", VAR_1->AllowEnterpriseFunction);
 FUNC_4(VAR_0, "SubscriptionExpires", VAR_1->SubscriptionExpires);
 FUNC_0(VAR_0, "IsSubscriptionExpired", VAR_1->IsSubscriptionExpired);
 FUNC_1(VAR_0, "NumUserCreationLicense", VAR_1->NumUserCreationLicense);
 FUNC_4(VAR_0, "ReleaseDate", VAR_1->ReleaseDate);
}
