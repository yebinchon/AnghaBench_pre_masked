
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mac_address ;
struct TYPE_3__ {char* DhcpDomainName; char* DhcpPushRoutes; int SaveLog; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; int UseDhcp; int NatUdpTimeout; int NatTcpTimeout; int Mtu; int UseNat; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,int ) ;

void FUNC_6(VH_OPTION *VAR_1, FOLDER *VAR_2)
{
 FOLDER *VAR_3, *VAR_4, *VAR_5;
 char VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_4(VAR_2, "VirtualHost");
 VAR_4 = FUNC_4(VAR_2, "VirtualRouter");
 VAR_5 = FUNC_4(VAR_2, "VirtualDhcpServer");

 FUNC_5(VAR_6, sizeof(VAR_6), VAR_1->MacAddress);
 FUNC_3(VAR_3, "VirtualHostMacAddress", VAR_6);
 FUNC_2(VAR_3, "VirtualHostIp", &VAR_1->Ip);
 FUNC_2(VAR_3, "VirtualHostIpSubnetMask", &VAR_1->Mask);

 FUNC_0(VAR_4, "NatEnabled", VAR_1->UseNat);
 FUNC_1(VAR_4, "NatMtu", VAR_1->Mtu);
 FUNC_1(VAR_4, "NatTcpTimeout", VAR_1->NatTcpTimeout);
 FUNC_1(VAR_4, "NatUdpTimeout", VAR_1->NatUdpTimeout);

 FUNC_0(VAR_5, "DhcpEnabled", VAR_1->UseDhcp);
 FUNC_2(VAR_5, "DhcpLeaseIPStart", &VAR_1->DhcpLeaseIPStart);
 FUNC_2(VAR_5, "DhcpLeaseIPEnd", &VAR_1->DhcpLeaseIPEnd);
 FUNC_2(VAR_5, "DhcpSubnetMask", &VAR_1->DhcpSubnetMask);
 FUNC_1(VAR_5, "DhcpExpireTimeSpan", VAR_1->DhcpExpireTimeSpan);
 FUNC_2(VAR_5, "DhcpGatewayAddress", &VAR_1->DhcpGatewayAddress);
 FUNC_2(VAR_5, "DhcpDnsServerAddress", &VAR_1->DhcpDnsServerAddress);
 FUNC_2(VAR_5, "DhcpDnsServerAddress2", &VAR_1->DhcpDnsServerAddress2);
 FUNC_3(VAR_5, "DhcpDomainName", VAR_1->DhcpDomainName);
 FUNC_3(VAR_5, "DhcpPushRoutes", VAR_1->DhcpPushRoutes);

 FUNC_0(VAR_2, "SaveLog", VAR_1->SaveLog);
}
