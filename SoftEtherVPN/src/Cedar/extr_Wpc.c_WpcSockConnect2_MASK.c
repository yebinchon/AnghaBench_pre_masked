
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int t2 ;
typedef int c ;
struct TYPE_6__ {char* HostName; char* ProxyHostName; char* ProxyUsername; char* ProxyPassword; char* CustomHttpHeader; int ProxyPort; int ProxyType; int Port; } ;
typedef TYPE_1__ WPC_CONNECT ;
typedef int UINT ;
typedef int SOCK ;
typedef TYPE_1__ INTERNET_SETTING ;


 int FUNC_0 (char*,int,char*) ;
 int * FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

SOCK *FUNC_3(char *VAR_0, UINT VAR_1, INTERNET_SETTING *VAR_2, UINT *VAR_3, UINT VAR_4)
{

 INTERNET_SETTING VAR_5;
 WPC_CONNECT VAR_6;
 if (VAR_2 == ((void*)0))
 {
  FUNC_2(&VAR_5, sizeof(VAR_5));

  VAR_2 = &VAR_5;
 }

 FUNC_2(&VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_6.HostName, sizeof(VAR_6.HostName), VAR_0);
 VAR_6.Port = VAR_1;
 VAR_6.ProxyType = VAR_2->ProxyType;
 FUNC_0(VAR_6.ProxyHostName, sizeof(VAR_6.HostName), VAR_2->ProxyHostName);
 VAR_6.ProxyPort = VAR_2->ProxyPort;
 FUNC_0(VAR_6.ProxyUsername, sizeof(VAR_6.ProxyUsername), VAR_2->ProxyUsername);
 FUNC_0(VAR_6.ProxyPassword, sizeof(VAR_6.ProxyPassword), VAR_2->ProxyPassword);
 FUNC_0(VAR_6.CustomHttpHeader, sizeof(VAR_6.CustomHttpHeader), VAR_2->CustomHttpHeader);

 return FUNC_1(&VAR_6, VAR_3, VAR_4);
}
