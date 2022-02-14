
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UseNat; int UseDhcp; int SaveLog; int DhcpPushRoutes; int HubName; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; int NatUdpTimeout; int NatTcpTimeout; int Mtu; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int ) ;

void FUNC_5(PACK *VAR_0, VH_OPTION *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "MacAddress", VAR_1->MacAddress, 6);
 FUNC_3(VAR_0, "Ip", &VAR_1->Ip);
 FUNC_3(VAR_0, "Mask", &VAR_1->Mask);
 FUNC_0(VAR_0, "UseNat", VAR_1->UseNat);
 FUNC_2(VAR_0, "Mtu", VAR_1->Mtu);
 FUNC_2(VAR_0, "NatTcpTimeout", VAR_1->NatTcpTimeout);
 FUNC_2(VAR_0, "NatUdpTimeout", VAR_1->NatUdpTimeout);
 FUNC_0(VAR_0, "UseDhcp", VAR_1->UseDhcp);
 FUNC_3(VAR_0, "DhcpLeaseIPStart", &VAR_1->DhcpLeaseIPStart);
 FUNC_3(VAR_0, "DhcpLeaseIPEnd", &VAR_1->DhcpLeaseIPEnd);
 FUNC_3(VAR_0, "DhcpSubnetMask", &VAR_1->DhcpSubnetMask);
 FUNC_2(VAR_0, "DhcpExpireTimeSpan", VAR_1->DhcpExpireTimeSpan);
 FUNC_3(VAR_0, "DhcpGatewayAddress", &VAR_1->DhcpGatewayAddress);
 FUNC_3(VAR_0, "DhcpDnsServerAddress", &VAR_1->DhcpDnsServerAddress);
 FUNC_3(VAR_0, "DhcpDnsServerAddress2", &VAR_1->DhcpDnsServerAddress2);
 FUNC_4(VAR_0, "DhcpDomainName", VAR_1->DhcpDomainName);
 FUNC_0(VAR_0, "SaveLog", VAR_1->SaveLog);
 FUNC_4(VAR_0, "RpcHubName", VAR_1->HubName);
 FUNC_0(VAR_0, "ApplyDhcpPushRoutes", 1);
 FUNC_4(VAR_0, "DhcpPushRoutes", VAR_1->DhcpPushRoutes);
}
