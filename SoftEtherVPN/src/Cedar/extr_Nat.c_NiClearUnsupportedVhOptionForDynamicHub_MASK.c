
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UseNat; int DhcpDomainName; int DhcpDnsServerAddress2; int DhcpDnsServerAddress; int DhcpGatewayAddress; } ;
typedef TYPE_1__ VH_OPTION ;
typedef int IP ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(VH_OPTION *VAR_0, bool VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->UseNat = 0;

 if (VAR_1)
 {
  FUNC_1(&VAR_0->DhcpGatewayAddress, sizeof(IP));
  FUNC_1(&VAR_0->DhcpDnsServerAddress, sizeof(IP));
  FUNC_1(&VAR_0->DhcpDnsServerAddress2, sizeof(IP));
  FUNC_0(VAR_0->DhcpDomainName, sizeof(VAR_0->DhcpDomainName), "");
 }
}
