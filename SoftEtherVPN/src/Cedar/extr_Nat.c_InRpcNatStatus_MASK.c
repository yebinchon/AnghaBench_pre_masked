
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HubName; void* IsRawIpMode; void* IsKernelMode; void* NumDhcpClients; void* NumDnsSessions; void* NumIcmpSessions; void* NumUdpSessions; void* NumTcpSessions; } ;
typedef TYPE_1__ RPC_NAT_STATUS ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_NAT_STATUS *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_NAT_STATUS));
 VAR_0->NumTcpSessions = FUNC_1(VAR_1, "NumTcpSessions");
 VAR_0->NumUdpSessions = FUNC_1(VAR_1, "NumUdpSessions");
 VAR_0->NumIcmpSessions = FUNC_1(VAR_1, "NumIcmpSessions");
 VAR_0->NumDnsSessions = FUNC_1(VAR_1, "NumDnsSessions");
 VAR_0->NumDhcpClients = FUNC_1(VAR_1, "NumDhcpClients");
 VAR_0->IsKernelMode = FUNC_0(VAR_1, "IsKernelMode");
 VAR_0->IsRawIpMode = FUNC_0(VAR_1, "IsRawIpMode");
 FUNC_2(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
}
