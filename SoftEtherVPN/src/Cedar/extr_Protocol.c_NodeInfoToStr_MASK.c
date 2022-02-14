
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int unique_id ;
typedef int server_ip ;
typedef int proxy_ip ;
typedef int client_ip ;
typedef int UINT ;
struct TYPE_3__ {int HubName; int ProxyPort; int ProxyHostname; int ServerPort; int ServerHostname; int ClientPort; int ClientHostname; int ClientOsProductId; int ClientOsVer; int ClientOsName; int ServerProductBuild; int ServerProductVer; int ServerProductName; int ClientProductBuild; int ClientProductVer; int ClientProductName; int UniqueId; int ProxyIpAddress6; int ProxyIpAddress; int ServerIpAddress6; int ServerIpAddress; int ClientIpAddress6; int ClientIpAddress; } ;
typedef TYPE_1__ NODE_INFO ;


 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*,int ,int ,char*,int ,int ,char*,int ,int ,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(wchar_t *VAR_0, UINT VAR_1, NODE_INFO *VAR_2)
{
 char VAR_3[128], VAR_4[128], VAR_5[128], VAR_6[128];

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_3, sizeof(VAR_3), VAR_2->ClientIpAddress, VAR_2->ClientIpAddress6);
 FUNC_2(VAR_4, sizeof(VAR_4), VAR_2->ServerIpAddress, VAR_2->ServerIpAddress6);
 FUNC_2(VAR_5, sizeof(VAR_5), VAR_2->ProxyIpAddress, VAR_2->ProxyIpAddress6);
 FUNC_0(VAR_6, sizeof(VAR_6), VAR_2->UniqueId, sizeof(VAR_2->UniqueId));

 FUNC_3(VAR_0, VAR_1, FUNC_4("LS_NODE_INFO_TAG"), VAR_2->ClientProductName,
  FUNC_1(VAR_2->ClientProductVer), FUNC_1(VAR_2->ClientProductBuild),
  VAR_2->ServerProductName, FUNC_1(VAR_2->ServerProductVer), FUNC_1(VAR_2->ServerProductBuild),
  VAR_2->ClientOsName, VAR_2->ClientOsVer, VAR_2->ClientOsProductId,
  VAR_2->ClientHostname, VAR_3, FUNC_1(VAR_2->ClientPort),
  VAR_2->ServerHostname, VAR_4, FUNC_1(VAR_2->ServerPort),
  VAR_2->ProxyHostname, VAR_5, FUNC_1(VAR_2->ProxyPort),
  VAR_2->HubName, VAR_6);
}
