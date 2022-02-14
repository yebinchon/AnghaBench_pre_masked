
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DhcpPushRoutes; void* ApplyDhcpPushRoutes; int HubName; void* SaveLog; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; void* DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; void* UseDhcp; void* NatUdpTimeout; void* NatTcpTimeout; void* Mtu; void* UseNat; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(VH_OPTION *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(VH_OPTION));
 FUNC_1(VAR_1, "MacAddress", VAR_0->MacAddress, 6);
 FUNC_3(VAR_1, "Ip", &VAR_0->Ip);
 FUNC_3(VAR_1, "Mask", &VAR_0->Mask);
 VAR_0->UseNat = FUNC_0(VAR_1, "UseNat");
 VAR_0->Mtu = FUNC_2(VAR_1, "Mtu");
 VAR_0->NatTcpTimeout = FUNC_2(VAR_1, "NatTcpTimeout");
 VAR_0->NatUdpTimeout = FUNC_2(VAR_1, "NatUdpTimeout");
 VAR_0->UseDhcp = FUNC_0(VAR_1, "UseDhcp");
 FUNC_3(VAR_1, "DhcpLeaseIPStart", &VAR_0->DhcpLeaseIPStart);
 FUNC_3(VAR_1, "DhcpLeaseIPEnd", &VAR_0->DhcpLeaseIPEnd);
 FUNC_3(VAR_1, "DhcpSubnetMask", &VAR_0->DhcpSubnetMask);
 VAR_0->DhcpExpireTimeSpan = FUNC_2(VAR_1, "DhcpExpireTimeSpan");
 FUNC_3(VAR_1, "DhcpGatewayAddress", &VAR_0->DhcpGatewayAddress);
 FUNC_3(VAR_1, "DhcpDnsServerAddress", &VAR_0->DhcpDnsServerAddress);
 FUNC_3(VAR_1, "DhcpDnsServerAddress2", &VAR_0->DhcpDnsServerAddress2);
 FUNC_4(VAR_1, "DhcpDomainName", VAR_0->DhcpDomainName, sizeof(VAR_0->DhcpDomainName));
 VAR_0->SaveLog = FUNC_0(VAR_1, "SaveLog");
 FUNC_4(VAR_1, "RpcHubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->ApplyDhcpPushRoutes = FUNC_0(VAR_1, "ApplyDhcpPushRoutes");
 FUNC_4(VAR_1, "DhcpPushRoutes", VAR_0->DhcpPushRoutes, sizeof(VAR_0->DhcpPushRoutes));
}
