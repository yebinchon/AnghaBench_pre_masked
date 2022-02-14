
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ProxyPort; int ProxyIpAddress6; void* ProxyIpAddress; void* ServerPort; int ServerIpAddress6; void* ServerIpAddress; void* ClientPort; int ClientIpAddress6; void* ClientIpAddress; void* ServerProductBuild; void* ServerProductVer; void* ClientProductBuild; void* ClientProductVer; int UniqueId; int HubName; int ProxyHostname; int ServerHostname; int ClientHostname; int ClientOsProductId; int ClientOsVer; int ClientOsName; int ServerProductName; int ClientProductName; } ;
typedef int PACK ;
typedef TYPE_1__ NODE_INFO ;


 int FUNC_0 (int *,char*,int ,int) ;
 void* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(NODE_INFO *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(NODE_INFO));
 FUNC_3(VAR_1, "ClientProductName", VAR_0->ClientProductName, sizeof(VAR_0->ClientProductName));
 FUNC_3(VAR_1, "ServerProductName", VAR_0->ServerProductName, sizeof(VAR_0->ServerProductName));
 FUNC_3(VAR_1, "ClientOsName", VAR_0->ClientOsName, sizeof(VAR_0->ClientOsName));
 FUNC_3(VAR_1, "ClientOsVer", VAR_0->ClientOsVer, sizeof(VAR_0->ClientOsVer));
 FUNC_3(VAR_1, "ClientOsProductId", VAR_0->ClientOsProductId, sizeof(VAR_0->ClientOsProductId));
 FUNC_3(VAR_1, "ClientHostname", VAR_0->ClientHostname, sizeof(VAR_0->ClientHostname));
 FUNC_3(VAR_1, "ServerHostname", VAR_0->ServerHostname, sizeof(VAR_0->ServerHostname));
 FUNC_3(VAR_1, "ProxyHostname", VAR_0->ProxyHostname, sizeof(VAR_0->ProxyHostname));
 FUNC_3(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 FUNC_0(VAR_1, "UniqueId", VAR_0->UniqueId, sizeof(VAR_0->UniqueId));

 VAR_0->ClientProductVer = FUNC_1(VAR_1, "ClientProductVer");
 VAR_0->ClientProductBuild = FUNC_1(VAR_1, "ClientProductBuild");
 VAR_0->ServerProductVer = FUNC_1(VAR_1, "ServerProductVer");
 VAR_0->ServerProductBuild = FUNC_1(VAR_1, "ServerProductBuild");
 VAR_0->ClientIpAddress = FUNC_2(VAR_1, "ClientIpAddress");
 FUNC_0(VAR_1, "ClientIpAddress6", VAR_0->ClientIpAddress6, sizeof(VAR_0->ClientIpAddress6));
 VAR_0->ClientPort = FUNC_1(VAR_1, "ClientPort");
 VAR_0->ServerIpAddress = FUNC_2(VAR_1, "ServerIpAddress");
 FUNC_0(VAR_1, "ServerIpAddress6", VAR_0->ServerIpAddress6, sizeof(VAR_0->ServerIpAddress6));
 VAR_0->ServerPort = FUNC_1(VAR_1, "ServerPort2");
 VAR_0->ProxyIpAddress = FUNC_2(VAR_1, "ProxyIpAddress");
 FUNC_0(VAR_1, "ProxyIpAddress6", VAR_0->ProxyIpAddress6, sizeof(VAR_0->ProxyIpAddress6));
 VAR_0->ProxyPort = FUNC_1(VAR_1, "ProxyPort");
}
