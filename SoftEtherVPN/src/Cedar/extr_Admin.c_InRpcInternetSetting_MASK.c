
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CustomHttpHeader; int ProxyPassword; int ProxyUsername; void* ProxyPort; int ProxyHostName; void* ProxyType; } ;
typedef int PACK ;
typedef TYPE_1__ INTERNET_SETTING ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;

void FUNC_2(INTERNET_SETTING *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_0->ProxyType = FUNC_0(VAR_1, "ProxyType");
 FUNC_1(VAR_1, "ProxyHostName", VAR_0->ProxyHostName, sizeof(VAR_0->ProxyHostName));
 VAR_0->ProxyPort = FUNC_0(VAR_1, "ProxyPort");
 FUNC_1(VAR_1, "ProxyUsername", VAR_0->ProxyUsername, sizeof(VAR_0->ProxyUsername));
 FUNC_1(VAR_1, "ProxyPassword", VAR_0->ProxyPassword, sizeof(VAR_0->ProxyPassword));
 FUNC_1(VAR_1, "CustomHttpHeader", VAR_0->CustomHttpHeader, sizeof(VAR_0->CustomHttpHeader));
}
