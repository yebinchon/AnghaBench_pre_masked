
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {TYPE_1__* Server; } ;
struct TYPE_10__ {scalar_t__ VpnOverIcmpListener; scalar_t__ VpnOverDnsListener; } ;
struct TYPE_9__ {scalar_t__ EnableVpnOverIcmp; scalar_t__ EnableVpnOverDns; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_SPECIAL_LISTENER ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

UINT FUNC_6(ADMIN *VAR_5, RPC_SPECIAL_LISTENER *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 UINT VAR_9 = VAR_0;

 VAR_4;
 VAR_3;


 if (VAR_6->VpnOverDnsListener && (FUNC_2(VAR_7->EnableVpnOverDns) != FUNC_2(VAR_6->VpnOverDnsListener)))
 {
  if (FUNC_4() == 0)
  {
   return VAR_1;
  }
 }

 if (VAR_6->VpnOverIcmpListener && (FUNC_2(VAR_7->EnableVpnOverIcmp) != FUNC_2(VAR_6->VpnOverIcmpListener)))
 {
  if (FUNC_5() == 0)
  {
   return VAR_2;
  }
 }

 VAR_7->EnableVpnOverDns = VAR_6->VpnOverDnsListener;
 VAR_7->EnableVpnOverIcmp = VAR_6->VpnOverIcmpListener;

 FUNC_3(VAR_7);

 FUNC_0(VAR_5, ((void*)0), "LA_SET_SPECIAL_LISTENER");

 FUNC_1(VAR_7);

 return VAR_0;
}
