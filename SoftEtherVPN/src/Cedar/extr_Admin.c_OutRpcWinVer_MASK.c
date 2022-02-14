
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Title; int ServicePack; int Build; int VerMinor; int VerMajor; int IsBeta; int IsServer; int IsNT; int IsWindows; } ;
typedef TYPE_1__ RPC_WINVER ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_WINVER *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "V_IsWindows", VAR_1->IsWindows);
 FUNC_0(VAR_0, "V_IsNT", VAR_1->IsNT);
 FUNC_0(VAR_0, "V_IsServer", VAR_1->IsServer);
 FUNC_0(VAR_0, "V_IsBeta", VAR_1->IsBeta);
 FUNC_1(VAR_0, "V_VerMajor", VAR_1->VerMajor);
 FUNC_1(VAR_0, "V_VerMinor", VAR_1->VerMinor);
 FUNC_1(VAR_0, "V_Build", VAR_1->Build);
 FUNC_1(VAR_0, "V_ServicePack", VAR_1->ServicePack);
 FUNC_2(VAR_0, "V_Title", VAR_1->Title);
}
