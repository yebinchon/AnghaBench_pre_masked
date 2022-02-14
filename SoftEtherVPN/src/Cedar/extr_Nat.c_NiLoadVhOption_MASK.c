
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mac_address ;
struct TYPE_8__ {char* DhcpDomainName; void* SaveLog; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; void* DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; void* UseDhcp; void* NatUdpTimeout; void* NatTcpTimeout; void* Mtu; void* UseNat; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
struct TYPE_10__ {int Size; int Buf; } ;
struct TYPE_9__ {TYPE_1__ Option; } ;
typedef TYPE_2__ NAT ;
typedef int FOLDER ;
typedef TYPE_3__ BUF ;


 void* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,char*,char*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*,int) ;

void FUNC_10(NAT *VAR_1, FOLDER *VAR_2)
{
 VH_OPTION *VAR_3;
 FOLDER *VAR_4, *VAR_5, *VAR_6;
 char VAR_7[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_1(VAR_2, "VirtualHost");
 VAR_5 = FUNC_1(VAR_2, "VirtualRouter");
 VAR_6 = FUNC_1(VAR_2, "VirtualDhcpServer");

 VAR_3 = &VAR_1->Option;
 FUNC_9(VAR_3, sizeof(VH_OPTION));

 FUNC_7(VAR_3->MacAddress);
 if (FUNC_4(VAR_4, "VirtualHostMacAddress", VAR_7, sizeof(VAR_7)))
 {
  BUF *VAR_8 = FUNC_8(VAR_7);
  if (VAR_8 != ((void*)0))
  {
   if (VAR_8->Size == 6)
   {
    FUNC_5(VAR_3->MacAddress, VAR_8->Buf, 6);
   }
  }
  FUNC_6(VAR_8);
 }
 FUNC_3(VAR_4, "VirtualHostIp", &VAR_3->Ip);
 FUNC_3(VAR_4, "VirtualHostIpSubnetMask", &VAR_3->Mask);

 VAR_3->UseNat = FUNC_0(VAR_5, "NatEnabled");
 VAR_3->Mtu = FUNC_2(VAR_5, "NatMtu");
 VAR_3->NatTcpTimeout = FUNC_2(VAR_5, "NatTcpTimeout");
 VAR_3->NatUdpTimeout = FUNC_2(VAR_5, "NatUdpTimeout");

 VAR_3->UseDhcp = FUNC_0(VAR_6, "DhcpEnabled");
 FUNC_3(VAR_6, "DhcpLeaseIPStart", &VAR_3->DhcpLeaseIPStart);
 FUNC_3(VAR_6, "DhcpLeaseIPEnd", &VAR_3->DhcpLeaseIPEnd);
 FUNC_3(VAR_6, "DhcpSubnetMask", &VAR_3->DhcpSubnetMask);
 VAR_3->DhcpExpireTimeSpan = FUNC_2(VAR_6, "DhcpExpireTimeSpan");
 FUNC_3(VAR_6, "DhcpGatewayAddress", &VAR_3->DhcpGatewayAddress);
 FUNC_3(VAR_6, "DhcpDnsServerAddress", &VAR_3->DhcpDnsServerAddress);
 FUNC_3(VAR_6, "DhcpDnsServerAddress2", &VAR_3->DhcpDnsServerAddress2);
 FUNC_4(VAR_6, "DhcpDomainName", VAR_3->DhcpDomainName, sizeof(VAR_3->DhcpDomainName));

 VAR_3->SaveLog = FUNC_0(VAR_2, "SaveLog");
}
