
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int VpnOverDnsListener; int VpnOverIcmpListener; } ;
typedef TYPE_1__ RPC_SPECIAL_LISTENER ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(PACK *VAR_0, RPC_SPECIAL_LISTENER *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "VpnOverIcmpListener", VAR_1->VpnOverIcmpListener);
 FUNC_0(VAR_0, "VpnOverDnsListener", VAR_1->VpnOverDnsListener);
}
