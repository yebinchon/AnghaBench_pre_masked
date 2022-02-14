
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MemInfo; int OsInfo; int NatHostName; void* NatBuildInt; void* NatVerInt; int NatBuildInfoString; int NatVersionString; int NatProductName; } ;
typedef TYPE_1__ RPC_NAT_INFO ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_NAT_INFO *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_NAT_INFO));
 FUNC_3(VAR_1, "NatProductName", VAR_0->NatProductName, sizeof(VAR_0->NatProductName));
 FUNC_3(VAR_1, "NatVersionString", VAR_0->NatVersionString, sizeof(VAR_0->NatVersionString));
 FUNC_3(VAR_1, "NatBuildInfoString", VAR_0->NatBuildInfoString, sizeof(VAR_0->NatBuildInfoString));
 VAR_0->NatVerInt = FUNC_2(VAR_1, "NatVerInt");
 VAR_0->NatBuildInt = FUNC_2(VAR_1, "NatBuildInt");
 FUNC_3(VAR_1, "NatHostName", VAR_0->NatHostName, sizeof(VAR_0->NatHostName));
 FUNC_1(&VAR_0->OsInfo, VAR_1);
 FUNC_0(&VAR_0->MemInfo, VAR_1);
}
