
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ProxyPort; int ProxyIpAddress6; int ProxyIpAddress; int ServerPort; int ServerIpAddress6; int ServerIpAddress; int ClientPort; int ClientIpAddress6; int ClientIpAddress; int ServerProductBuild; int ServerProductVer; int ClientProductBuild; int ClientProductVer; int UniqueId; int HubName; int ProxyHostname; int ServerHostname; int ClientHostname; int ClientOsProductId; int ClientOsVer; int ClientOsName; int ServerProductName; int ClientProductName; } ;
typedef int PACK ;
typedef TYPE_1__ NODE_INFO ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, NODE_INFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, "ClientProductName", VAR_1->ClientProductName);
 FUNC_3(VAR_0, "ServerProductName", VAR_1->ServerProductName);
 FUNC_3(VAR_0, "ClientOsName", VAR_1->ClientOsName);
 FUNC_3(VAR_0, "ClientOsVer", VAR_1->ClientOsVer);
 FUNC_3(VAR_0, "ClientOsProductId", VAR_1->ClientOsProductId);
 FUNC_3(VAR_0, "ClientHostname", VAR_1->ClientHostname);
 FUNC_3(VAR_0, "ServerHostname", VAR_1->ServerHostname);
 FUNC_3(VAR_0, "ProxyHostname", VAR_1->ProxyHostname);
 FUNC_3(VAR_0, "HubName", VAR_1->HubName);
 FUNC_0(VAR_0, "UniqueId", VAR_1->UniqueId, sizeof(VAR_1->UniqueId));

 FUNC_1(VAR_0, "ClientProductVer", VAR_1->ClientProductVer);
 FUNC_1(VAR_0, "ClientProductBuild", VAR_1->ClientProductBuild);
 FUNC_1(VAR_0, "ServerProductVer", VAR_1->ServerProductVer);
 FUNC_1(VAR_0, "ServerProductBuild", VAR_1->ServerProductBuild);
 FUNC_2(VAR_0, "ClientIpAddress", VAR_1->ClientIpAddress);
 FUNC_0(VAR_0, "ClientIpAddress6", VAR_1->ClientIpAddress6, sizeof(VAR_1->ClientIpAddress6));
 FUNC_1(VAR_0, "ClientPort", VAR_1->ClientPort);
 FUNC_2(VAR_0, "ServerIpAddress", VAR_1->ServerIpAddress);
 FUNC_0(VAR_0, "ServerIpAddress6", VAR_1->ServerIpAddress6, sizeof(VAR_1->ServerIpAddress6));
 FUNC_1(VAR_0, "ServerPort2", VAR_1->ServerPort);
 FUNC_2(VAR_0, "ProxyIpAddress", VAR_1->ProxyIpAddress);
 FUNC_0(VAR_0, "ProxyIpAddress6", VAR_1->ProxyIpAddress6, sizeof(VAR_1->ProxyIpAddress6));
 FUNC_1(VAR_0, "ProxyPort", VAR_1->ProxyPort);
}
