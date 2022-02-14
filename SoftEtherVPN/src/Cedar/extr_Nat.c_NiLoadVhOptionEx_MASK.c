
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mac_address ;
struct TYPE_7__ {char* DhcpDomainName; char* DhcpPushRoutes; int ApplyDhcpPushRoutes; void* SaveLog; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; void* DhcpExpireTimeSpan; int DhcpSubnetMask; int DhcpLeaseIPEnd; int DhcpLeaseIPStart; void* UseDhcp; void* NatUdpTimeout; void* NatTcpTimeout; void* Mtu; void* UseNat; int Mask; int Ip; int MacAddress; } ;
typedef TYPE_1__ VH_OPTION ;
struct TYPE_8__ {int Size; int Buf; } ;
typedef int FOLDER ;
typedef TYPE_2__ BUF ;


 void* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,char*,char*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (char*,int,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 TYPE_2__* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int) ;

void FUNC_13(VH_OPTION *VAR_1, FOLDER *VAR_2)
{
 FOLDER *VAR_3, *VAR_4, *VAR_5;
 char VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_2, "VirtualHost");
 VAR_4 = FUNC_1(VAR_2, "VirtualRouter");
 VAR_5 = FUNC_1(VAR_2, "VirtualDhcpServer");

 FUNC_12(VAR_1, sizeof(VH_OPTION));

 FUNC_7(VAR_1->MacAddress);
 if (FUNC_4(VAR_3, "VirtualHostMacAddress", VAR_6, sizeof(VAR_6)))
 {
  BUF *VAR_7 = FUNC_10(VAR_6);
  if (VAR_7 != ((void*)0))
  {
   if (VAR_7->Size == 6)
   {
    FUNC_5(VAR_1->MacAddress, VAR_7->Buf, 6);
   }
  }
  FUNC_6(VAR_7);
 }
 FUNC_3(VAR_3, "VirtualHostIp", &VAR_1->Ip);
 FUNC_3(VAR_3, "VirtualHostIpSubnetMask", &VAR_1->Mask);

 VAR_1->UseNat = FUNC_0(VAR_4, "NatEnabled");
 VAR_1->Mtu = FUNC_2(VAR_4, "NatMtu");
 VAR_1->NatTcpTimeout = FUNC_2(VAR_4, "NatTcpTimeout");
 VAR_1->NatUdpTimeout = FUNC_2(VAR_4, "NatUdpTimeout");

 VAR_1->UseDhcp = FUNC_0(VAR_5, "DhcpEnabled");
 FUNC_3(VAR_5, "DhcpLeaseIPStart", &VAR_1->DhcpLeaseIPStart);
 FUNC_3(VAR_5, "DhcpLeaseIPEnd", &VAR_1->DhcpLeaseIPEnd);
 FUNC_3(VAR_5, "DhcpSubnetMask", &VAR_1->DhcpSubnetMask);
 VAR_1->DhcpExpireTimeSpan = FUNC_2(VAR_5, "DhcpExpireTimeSpan");
 FUNC_3(VAR_5, "DhcpGatewayAddress", &VAR_1->DhcpGatewayAddress);
 FUNC_3(VAR_5, "DhcpDnsServerAddress", &VAR_1->DhcpDnsServerAddress);
 FUNC_3(VAR_5, "DhcpDnsServerAddress2", &VAR_1->DhcpDnsServerAddress2);
 FUNC_4(VAR_5, "DhcpDomainName", VAR_1->DhcpDomainName, sizeof(VAR_1->DhcpDomainName));

 FUNC_4(VAR_5, "DhcpPushRoutes", VAR_1->DhcpPushRoutes, sizeof(VAR_1->DhcpPushRoutes));





 FUNC_8(VAR_1->DhcpPushRoutes, sizeof(VAR_1->DhcpPushRoutes), VAR_1->DhcpPushRoutes);
 VAR_1->ApplyDhcpPushRoutes = 1;

 FUNC_11(VAR_1->DhcpDomainName);
 if (FUNC_9(VAR_1->DhcpDomainName) == 0)
 {

 }

 VAR_1->SaveLog = FUNC_0(VAR_2, "SaveLog");
}
