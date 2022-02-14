
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IsRawIpMode; int IsKernelMode; int NumDhcpClients; int NumDnsSessions; int NumIcmpSessions; int NumUdpSessions; int NumTcpSessions; int HubName; } ;
typedef TYPE_1__ RPC_NAT_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_NAT_STATUS *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "HubName", VAR_1->HubName);
 FUNC_1(VAR_0, "NumTcpSessions", VAR_1->NumTcpSessions);
 FUNC_1(VAR_0, "NumUdpSessions", VAR_1->NumUdpSessions);
 FUNC_1(VAR_0, "NumIcmpSessions", VAR_1->NumIcmpSessions);
 FUNC_1(VAR_0, "NumDnsSessions", VAR_1->NumDnsSessions);
 FUNC_1(VAR_0, "NumDhcpClients", VAR_1->NumDhcpClients);
 FUNC_0(VAR_0, "IsKernelMode", VAR_1->IsKernelMode);
 FUNC_0(VAR_0, "IsRawIpMode", VAR_1->IsRawIpMode);
}
