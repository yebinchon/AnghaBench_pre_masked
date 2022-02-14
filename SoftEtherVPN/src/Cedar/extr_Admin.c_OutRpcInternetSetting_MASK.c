
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CustomHttpHeader; int ProxyPassword; int ProxyUsername; int ProxyPort; int ProxyHostName; int ProxyType; } ;
typedef int PACK ;
typedef TYPE_1__ INTERNET_SETTING ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, INTERNET_SETTING *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "ProxyType", VAR_1->ProxyType);
 FUNC_1(VAR_0, "ProxyHostName", VAR_1->ProxyHostName);
 FUNC_0(VAR_0, "ProxyPort", VAR_1->ProxyPort);
 FUNC_1(VAR_0, "ProxyUsername", VAR_1->ProxyUsername);
 FUNC_1(VAR_0, "ProxyPassword", VAR_1->ProxyPassword);
 FUNC_1(VAR_0, "CustomHttpHeader", VAR_1->CustomHttpHeader);
}
