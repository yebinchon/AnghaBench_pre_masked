
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MemInfo; int OsInfo; int NatHostName; int NatBuildInt; int NatVerInt; int NatBuildInfoString; int NatVersionString; int NatProductName; } ;
typedef TYPE_1__ RPC_NAT_INFO ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, RPC_NAT_INFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, "NatProductName", VAR_1->NatProductName);
 FUNC_3(VAR_0, "NatVersionString", VAR_1->NatVersionString);
 FUNC_3(VAR_0, "NatBuildInfoString", VAR_1->NatBuildInfoString);
 FUNC_2(VAR_0, "NatVerInt", VAR_1->NatVerInt);
 FUNC_2(VAR_0, "NatBuildInt", VAR_1->NatBuildInt);
 FUNC_3(VAR_0, "NatHostName", VAR_1->NatHostName);
 FUNC_1(VAR_0, &VAR_1->OsInfo);
 FUNC_0(VAR_0, &VAR_1->MemInfo);
}
