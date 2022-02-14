
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int IsWinPcapNeeded; int IsBridgeSupportedOs; } ;
typedef TYPE_1__ RPC_BRIDGE_SUPPORT ;
typedef int ADMIN ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;

UINT FUNC_3(ADMIN *VAR_1, RPC_BRIDGE_SUPPORT *VAR_2)
{
 FUNC_2(VAR_2, sizeof(RPC_BRIDGE_SUPPORT));

 VAR_2->IsBridgeSupportedOs = FUNC_0();
 VAR_2->IsWinPcapNeeded = FUNC_1();

 return VAR_0;
}
