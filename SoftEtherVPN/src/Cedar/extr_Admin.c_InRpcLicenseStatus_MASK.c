
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ReleaseDate; void* NumUserCreationLicense; void* IsSubscriptionExpired; void* SubscriptionExpires; void* AllowEnterpriseFunction; void* NeedSubscription; void* NumBridgeConnectLicense; void* NumClientConnectLicense; void* SystemExpires; void* SystemId; int EditionStr; void* EditionId; } ;
typedef TYPE_1__ RPC_LICENSE_STATUS ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_LICENSE_STATUS *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_LICENSE_STATUS));

 VAR_0->EditionId = FUNC_1(VAR_1, "EditionId");
 FUNC_3(VAR_1, "EditionStr", VAR_0->EditionStr, sizeof(VAR_0->EditionStr) );
 VAR_0->SystemId = FUNC_2(VAR_1, "SystemId");
 VAR_0->SystemExpires = FUNC_2(VAR_1, "SystemExpires");
 VAR_0->NumClientConnectLicense = FUNC_1(VAR_1, "NumClientConnectLicense");
 VAR_0->NumBridgeConnectLicense = FUNC_1(VAR_1, "NumBridgeConnectLicense");


 VAR_0->NeedSubscription = FUNC_0(VAR_1, "NeedSubscription");
 VAR_0->AllowEnterpriseFunction = FUNC_0(VAR_1, "AllowEnterpriseFunction");
 VAR_0->SubscriptionExpires = FUNC_2(VAR_1, "SubscriptionExpires");
 VAR_0->IsSubscriptionExpired = FUNC_0(VAR_1, "IsSubscriptionExpired");
 VAR_0->NumUserCreationLicense = FUNC_1(VAR_1, "NumUserCreationLicense");
 VAR_0->ReleaseDate = FUNC_2(VAR_1, "ReleaseDate");
}
