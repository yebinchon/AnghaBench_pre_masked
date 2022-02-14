
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int str ;
struct TYPE_3__ {char* ClientProductName; char* ClientOsName; char* ClientOsVer; char* ClientOsProductId; char* ClientHostname; char* ServerHostname; char* ProxyHostname; int ProxyPort; int ProxyIpAddress6; int ProxyIpAddress; int ServerPort; int ServerIpAddress6; int ServerIpAddress; int ClientPort; int ClientIpAddress6; int ClientIpAddress; int ClientProductBuild; int ClientProductVer; } ;
typedef TYPE_1__ NODE_INFO ;
typedef int CT ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int,char*,int,...) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*) ;

void FUNC_8(CT *VAR_1, NODE_INFO *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ClientProductName);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_NAME"), VAR_3);

 FUNC_5(VAR_3, sizeof(VAR_3), L"%u.%02u", FUNC_1(VAR_2->ClientProductVer) / 100, FUNC_1(VAR_2->ClientProductVer) % 100);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_VER"), VAR_3);

 FUNC_5(VAR_3, sizeof(VAR_3), L"Build %u", FUNC_1(VAR_2->ClientProductBuild));
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_BUILD"), VAR_3);

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ClientOsName);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_OS_NAME"), VAR_3);

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ClientOsVer);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_OS_VER"), VAR_3);

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ClientOsProductId);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_OS_PID"), VAR_3);

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ClientHostname);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_HOST"), VAR_3);

 FUNC_2(VAR_4, sizeof(VAR_4), VAR_2->ClientIpAddress, VAR_2->ClientIpAddress6);
 FUNC_4(VAR_3, sizeof(VAR_3), VAR_4);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_IP"), VAR_3);

 FUNC_6(VAR_3, FUNC_1(VAR_2->ClientPort));
 FUNC_0(VAR_1, FUNC_7("SM_NODE_CLIENT_PORT"), VAR_3);

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ServerHostname);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_SERVER_HOST"), VAR_3);

 FUNC_2(VAR_4, sizeof(VAR_4), VAR_2->ServerIpAddress, VAR_2->ServerIpAddress6);
 FUNC_4(VAR_3, sizeof(VAR_3), VAR_4);
 FUNC_0(VAR_1, FUNC_7("SM_NODE_SERVER_IP"), VAR_3);

 FUNC_6(VAR_3, FUNC_1(VAR_2->ServerPort));
 FUNC_0(VAR_1, FUNC_7("SM_NODE_SERVER_PORT"), VAR_3);

 if (FUNC_3(VAR_2->ProxyHostname) != 0)
 {
  FUNC_4(VAR_3, sizeof(VAR_3), VAR_2->ProxyHostname);
  FUNC_0(VAR_1, FUNC_7("SM_NODE_PROXY_HOSTNAME"), VAR_3);

  FUNC_2(VAR_4, sizeof(VAR_4), VAR_2->ProxyIpAddress, VAR_2->ProxyIpAddress6);
  FUNC_4(VAR_3, sizeof(VAR_3), VAR_4);
  FUNC_0(VAR_1, FUNC_7("SM_NODE_PROXY_IP"), VAR_3);

  FUNC_6(VAR_3, FUNC_1(VAR_2->ProxyPort));
  FUNC_0(VAR_1, FUNC_7("SM_NODE_PROXY_PORT"), VAR_3);
 }
}
