
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rt ;
struct TYPE_7__ {scalar_t__* MacAddress; int Mtu; scalar_t__ NatTcpTimeout; scalar_t__ NatUdpTimeout; int DhcpExpireTimeSpan; int DhcpPushRoutes; scalar_t__ ApplyDhcpPushRoutes; int SaveLog; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; int UseDhcp; int UseNat; int Mask; int Ip; } ;
typedef TYPE_1__ VH_OPTION ;
struct TYPE_8__ {int Mtu; int IpMss; int TcpMss; int UdpMss; int NatTcpTimeout; int NatUdpTimeout; int DhcpExpire; int PushRoute; int SaveLog; int DhcpDomain; void* DhcpDns2; void* DhcpDns; void* DhcpGateway; void* DhcpMask; void* DhcpIpStart; void* DhcpIpEnd; int UseDhcp; int UseNat; void* HostMask; void* HostIP; int * MacAddress; } ;
typedef TYPE_2__ VH ;
typedef int UINT ;
typedef scalar_t__ DHCP_CLASSLESS_ROUTE_TABLE ;


 int FUNC_0 (int *,scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_1 ;
 void* FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 void* FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int) ;
 int VAR_4 ;
 int FUNC_7 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (scalar_t__*,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (scalar_t__*,int) ;

void FUNC_12(VH *VAR_11, VH_OPTION *VAR_12)
{
 UINT VAR_13;

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_11);
 {

  for (VAR_13 = 0;VAR_13 < 6;VAR_13++)
  {
   if (VAR_12->MacAddress[VAR_13] != 0)
   {
    FUNC_0(VAR_11->MacAddress, VAR_12->MacAddress, 6);
    break;
   }
  }


  VAR_11->HostIP = FUNC_3(&VAR_12->Ip);
  VAR_11->HostMask = FUNC_3(&VAR_12->Mask);


  VAR_11->Mtu = FUNC_7(VAR_12->Mtu, VAR_4);
  if (VAR_11->Mtu == 0)
  {
   VAR_11->Mtu = VAR_4;
  }
  VAR_11->Mtu = FUNC_6(VAR_11->Mtu, VAR_9 + VAR_2 + VAR_3 + 8);
  VAR_11->IpMss = ((VAR_11->Mtu - VAR_2) / 8) * 8;
  VAR_11->TcpMss = ((VAR_11->IpMss - VAR_9) / 8) * 8;
  VAR_11->UdpMss = ((VAR_11->IpMss - VAR_10) / 8) * 8;

  if (VAR_12->NatTcpTimeout != 0)
  {
   VAR_11->NatTcpTimeout = FUNC_7(VAR_12->NatTcpTimeout, 4000000) * 1000;
  }
  if (VAR_12->NatUdpTimeout != 0)
  {
   VAR_11->NatUdpTimeout = FUNC_7(VAR_12->NatUdpTimeout, 4000000) * 1000;
  }
  VAR_11->NatTcpTimeout = FUNC_5(VAR_11->NatTcpTimeout, VAR_6, VAR_5);
  VAR_11->NatUdpTimeout = FUNC_5(VAR_11->NatUdpTimeout, VAR_8, VAR_7);
  FUNC_1("Timeout: %d , %d\n", VAR_11->NatTcpTimeout, VAR_11->NatUdpTimeout);


  VAR_11->UseNat = VAR_12->UseNat;


  VAR_11->UseDhcp = VAR_12->UseDhcp;


  if (VAR_12->DhcpExpireTimeSpan == 0 || VAR_12->DhcpExpireTimeSpan == VAR_1)
  {
   VAR_11->DhcpExpire = VAR_1;
  }
  else
  {
   VAR_11->DhcpExpire = FUNC_5(VAR_0,
    FUNC_7(VAR_12->DhcpExpireTimeSpan * 1000, 2000000000),
    VAR_1);
  }


  VAR_11->DhcpIpStart = FUNC_3(&VAR_12->DhcpLeaseIPStart);
  VAR_11->DhcpIpEnd = FUNC_3(&VAR_12->DhcpLeaseIPEnd);
  if (FUNC_2(VAR_11->DhcpIpEnd) < FUNC_2(VAR_11->DhcpIpStart))
  {
   VAR_11->DhcpIpEnd = VAR_11->DhcpIpStart;
  }


  VAR_11->DhcpMask = FUNC_3(&VAR_12->DhcpSubnetMask);


  VAR_11->DhcpGateway = FUNC_3(&VAR_12->DhcpGatewayAddress);


  VAR_11->DhcpDns = FUNC_3(&VAR_12->DhcpDnsServerAddress);
  VAR_11->DhcpDns2 = FUNC_3(&VAR_12->DhcpDnsServerAddress2);


  FUNC_9(VAR_11->DhcpDomain, sizeof(VAR_11->DhcpDomain), VAR_12->DhcpDomainName);


  VAR_11->SaveLog = VAR_12->SaveLog;


  if (VAR_12->ApplyDhcpPushRoutes)
  {
   DHCP_CLASSLESS_ROUTE_TABLE VAR_14;

   FUNC_11(&VAR_14, sizeof(VAR_14));

   if (FUNC_8(&VAR_14, VAR_12->DhcpPushRoutes))
   {
    FUNC_0(&VAR_11->PushRoute, &VAR_14, sizeof(DHCP_CLASSLESS_ROUTE_TABLE));
   }
  }
 }
 FUNC_10(VAR_11);
}
