
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Title; void* ServicePack; void* Build; void* VerMinor; void* VerMajor; void* IsBeta; void* IsServer; void* IsNT; void* IsWindows; } ;
typedef TYPE_1__ RPC_WINVER ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_WINVER *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_WINVER));

 VAR_0->IsWindows = FUNC_0(VAR_1, "V_IsWindows");
 VAR_0->IsNT = FUNC_0(VAR_1, "V_IsNT");
 VAR_0->IsServer = FUNC_0(VAR_1, "V_IsServer");
 VAR_0->IsBeta = FUNC_0(VAR_1, "V_IsBeta");
 VAR_0->VerMajor = FUNC_1(VAR_1, "V_VerMajor");
 VAR_0->VerMinor = FUNC_1(VAR_1, "V_VerMinor");
 VAR_0->Build = FUNC_1(VAR_1, "V_Build");
 VAR_0->ServicePack = FUNC_1(VAR_1, "V_ServicePack");
 FUNC_2(VAR_1, "V_Title", VAR_0->Title, sizeof(VAR_0->Title));
}
