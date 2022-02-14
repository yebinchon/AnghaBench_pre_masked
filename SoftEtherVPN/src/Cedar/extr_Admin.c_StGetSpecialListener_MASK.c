
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {TYPE_1__* Server; } ;
struct TYPE_8__ {int VpnOverIcmpListener; int VpnOverDnsListener; } ;
struct TYPE_7__ {int EnableVpnOverIcmp; int EnableVpnOverDns; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_SPECIAL_LISTENER ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;

UINT FUNC_1(ADMIN *VAR_3, RPC_SPECIAL_LISTENER *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 UINT VAR_7 = VAR_0;

 VAR_2;
 VAR_1;

 FUNC_0(VAR_4, sizeof(RPC_SPECIAL_LISTENER));
 VAR_4->VpnOverDnsListener = VAR_5->EnableVpnOverDns;
 VAR_4->VpnOverIcmpListener = VAR_5->EnableVpnOverIcmp;

 return VAR_0;
}
