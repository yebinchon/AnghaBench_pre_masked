
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int UseNat; int Mtu; int NatTcpTimeout; int NatUdpTimeout; int UseDhcp; int DhcpExpireTimeSpan; int SaveLog; int DhcpDomainName; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
typedef int NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(NAT *VAR_0, VH_OPTION *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1, sizeof(VH_OPTION));
 FUNC_0(VAR_1->MacAddress);


 FUNC_2(&VAR_1->Ip, 192, 168, 30, 1);
 FUNC_2(&VAR_1->Mask, 255, 255, 255, 0);
 VAR_1->UseNat = 1;
 VAR_1->Mtu = 1500;
 VAR_1->NatTcpTimeout = 1800;
 VAR_1->NatUdpTimeout = 60;
 VAR_1->UseDhcp = 1;
 FUNC_2(&VAR_1->DhcpLeaseIPStart, 192, 168, 30, 10);
 FUNC_2(&VAR_1->DhcpLeaseIPEnd, 192, 168, 30, 200);
 FUNC_2(&VAR_1->DhcpSubnetMask, 255, 255, 255, 0);
 VAR_1->DhcpExpireTimeSpan = 7200;
 VAR_1->SaveLog = 1;

 FUNC_2(&VAR_1->DhcpGatewayAddress, 192, 168, 30, 1);
 FUNC_2(&VAR_1->DhcpDnsServerAddress, 192, 168, 30, 1);

 FUNC_1(VAR_1->DhcpDomainName, sizeof(VAR_1->DhcpDomainName));
}
