
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Cedar; } ;
struct TYPE_9__ {int MemInfo; int OsInfo; int NatHostName; int NatBuildInt; int NatVerInt; int NatBuildInfoString; int NatVersionString; int NatProductName; } ;
struct TYPE_8__ {int Build; int BuildInfo; int VerString; } ;
typedef TYPE_2__ RPC_NAT_INFO ;
typedef int OS_INFO ;
typedef TYPE_3__ NAT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

UINT FUNC_7(NAT *VAR_2, RPC_NAT_INFO *VAR_3)
{
 OS_INFO *VAR_4;
 FUNC_1(VAR_3);
 FUNC_6(VAR_3, sizeof(RPC_NAT_INFO));

 FUNC_5(VAR_3->NatProductName, sizeof(VAR_3->NatProductName), VAR_0);
 FUNC_5(VAR_3->NatVersionString, sizeof(VAR_3->NatVersionString), VAR_2->Cedar->VerString);
 FUNC_5(VAR_3->NatBuildInfoString, sizeof(VAR_3->NatBuildInfoString), VAR_2->Cedar->BuildInfo);
 VAR_3->NatVerInt = VAR_2->Cedar->Build;
 VAR_3->NatBuildInt = VAR_2->Cedar->Build;

 FUNC_2(VAR_3->NatHostName, sizeof(VAR_3->NatHostName));

 VAR_4 = FUNC_4();

 FUNC_0(&VAR_3->OsInfo, VAR_4);

 FUNC_3(&VAR_3->MemInfo);

 return VAR_1;
}
