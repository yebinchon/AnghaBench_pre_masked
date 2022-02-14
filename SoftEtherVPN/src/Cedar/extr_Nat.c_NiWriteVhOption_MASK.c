
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mac_address ;
struct TYPE_4__ {char* DhcpDomainName; int SaveLog; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; int UseDhcp; int NatUdpTimeout; int NatTcpTimeout; int Mtu; int UseNat; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
struct TYPE_5__ {TYPE_1__ Option; } ;
typedef TYPE_2__ NAT ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,int ) ;

void FUNC_6(NAT *VAR_1, FOLDER *VAR_2)
{
 VH_OPTION *VAR_3;
 FOLDER *VAR_4, *VAR_5, *VAR_6;
 char VAR_7[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_4(VAR_2, "VirtualHost");
 VAR_5 = FUNC_4(VAR_2, "VirtualRouter");
 VAR_6 = FUNC_4(VAR_2, "VirtualDhcpServer");

 VAR_3 = &VAR_1->Option;

 FUNC_5(VAR_7, sizeof(VAR_7), VAR_3->MacAddress);
 FUNC_3(VAR_4, "VirtualHostMacAddress", VAR_7);
 FUNC_2(VAR_4, "VirtualHostIp", &VAR_3->Ip);
 FUNC_2(VAR_4, "VirtualHostIpSubnetMask", &VAR_3->Mask);

 FUNC_0(VAR_5, "NatEnabled", VAR_3->UseNat);
 FUNC_1(VAR_5, "NatMtu", VAR_3->Mtu);
 FUNC_1(VAR_5, "NatTcpTimeout", VAR_3->NatTcpTimeout);
 FUNC_1(VAR_5, "NatUdpTimeout", VAR_3->NatUdpTimeout);

 FUNC_0(VAR_6, "DhcpEnabled", VAR_3->UseDhcp);
 FUNC_2(VAR_6, "DhcpLeaseIPStart", &VAR_3->DhcpLeaseIPStart);
 FUNC_2(VAR_6, "DhcpLeaseIPEnd", &VAR_3->DhcpLeaseIPEnd);
 FUNC_2(VAR_6, "DhcpSubnetMask", &VAR_3->DhcpSubnetMask);
 FUNC_1(VAR_6, "DhcpExpireTimeSpan", VAR_3->DhcpExpireTimeSpan);
 FUNC_2(VAR_6, "DhcpGatewayAddress", &VAR_3->DhcpGatewayAddress);
 FUNC_2(VAR_6, "DhcpDnsServerAddress", &VAR_3->DhcpDnsServerAddress);
 FUNC_2(VAR_6, "DhcpDnsServerAddress2", &VAR_3->DhcpDnsServerAddress2);
 FUNC_3(VAR_6, "DhcpDomainName", VAR_3->DhcpDomainName);

 FUNC_0(VAR_2, "SaveLog", VAR_3->SaveLog);
}
