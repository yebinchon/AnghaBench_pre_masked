
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int NatTcpTimeout; int NatUdpTimeout; int DhcpExpireTimeSpan; int ApplyDhcpPushRoutes; int DhcpPushRoutes; int SaveLog; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; int UseDhcp; int UseNat; int Mtu; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
struct TYPE_9__ {int NatTcpTimeout; int NatUdpTimeout; int DhcpExpire; int PushRoute; int SaveLog; int DhcpDomain; int DhcpDns2; int DhcpDns; int DhcpGateway; int DhcpMask; int DhcpIpEnd; int DhcpIpStart; int UseDhcp; int UseNat; int Mtu; int HostMask; int HostIP; int MacAddress; } ;
typedef TYPE_2__ VH ;


 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

void FUNC_7(VH *VAR_1, VH_OPTION *VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_1);
 {
  FUNC_6(VAR_2, sizeof(VH_OPTION));


  FUNC_1(VAR_2->MacAddress, VAR_1->MacAddress, 6);


  FUNC_4(&VAR_2->Ip, VAR_1->HostIP);
  FUNC_4(&VAR_2->Mask, VAR_1->HostMask);

  VAR_2->Mtu = VAR_1->Mtu;


  VAR_2->NatTcpTimeout = VAR_1->NatTcpTimeout / 1000;
  VAR_2->NatUdpTimeout = VAR_1->NatUdpTimeout / 1000;


  VAR_2->UseNat = VAR_1->UseNat;


  VAR_2->UseDhcp = VAR_1->UseDhcp;


  FUNC_4(&VAR_2->DhcpLeaseIPStart, VAR_1->DhcpIpStart);
  FUNC_4(&VAR_2->DhcpLeaseIPEnd, VAR_1->DhcpIpEnd);


  FUNC_4(&VAR_2->DhcpSubnetMask, VAR_1->DhcpMask);


  if (VAR_1->DhcpExpire != VAR_0)
  {
   VAR_2->DhcpExpireTimeSpan = VAR_1->DhcpExpire / 1000;
  }
  else
  {
   VAR_2->DhcpExpireTimeSpan = VAR_0;
  }


  FUNC_4(&VAR_2->DhcpGatewayAddress, VAR_1->DhcpGateway);


  FUNC_4(&VAR_2->DhcpDnsServerAddress, VAR_1->DhcpDns);
  FUNC_4(&VAR_2->DhcpDnsServerAddress2, VAR_1->DhcpDns2);


  FUNC_3(VAR_2->DhcpDomainName, sizeof(VAR_2->DhcpDomainName), VAR_1->DhcpDomain);


  VAR_2->SaveLog = VAR_1->SaveLog;


  FUNC_0(VAR_2->DhcpPushRoutes, sizeof(VAR_2->DhcpPushRoutes), &VAR_1->PushRoute);
  VAR_2->ApplyDhcpPushRoutes = 1;
 }
 FUNC_5(VAR_1);
}
