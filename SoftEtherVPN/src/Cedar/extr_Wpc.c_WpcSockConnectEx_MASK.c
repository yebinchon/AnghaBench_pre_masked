
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int in ;
struct TYPE_12__ {int ProxyType; int CustomHttpHeader; int ProxyPassword; int ProxyUsername; int ProxyPort; int ProxyHostName; int Port; int HostName; } ;
typedef TYPE_1__ WPC_CONNECT ;
typedef int UINT ;
struct TYPE_14__ {int Timeout; int HttpCustomHeader; int Password; int Username; int Port; int Hostname; int TargetPort; int TargetHostname; } ;
struct TYPE_13__ {int * Sock; } ;
typedef int SOCK ;
typedef TYPE_2__ PROXY_PARAM_OUT ;
typedef TYPE_3__ PROXY_PARAM_IN ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int*) ;
 int FUNC_5 (int ,int,int ) ;
 int * FUNC_6 (int ,int ,int,int*,int *,int,int *,int,int *) ;
 int FUNC_7 (TYPE_3__*,int) ;

SOCK *FUNC_8(WPC_CONNECT *VAR_4, UINT *VAR_5, UINT VAR_6, bool *VAR_7)
{
 SOCK *VAR_8;
 UINT VAR_9;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_5 == ((void*)0))
 {
  VAR_5 = &VAR_9;
 }

 if (VAR_4->ProxyType == VAR_3)
 {
  VAR_8 = FUNC_6(VAR_4->HostName, VAR_4->Port, VAR_6, VAR_7, ((void*)0), 1, ((void*)0), 0, ((void*)0));
  *VAR_5 = (VAR_8 != ((void*)0) ? VAR_2 : VAR_0);
  return VAR_8;
 }
 else
 {
  PROXY_PARAM_OUT VAR_10;
  PROXY_PARAM_IN VAR_11;
  UINT VAR_12;

  FUNC_7(&VAR_11, sizeof(VAR_11));

  VAR_11.Timeout = VAR_6;

  FUNC_5(VAR_11.TargetHostname, sizeof(VAR_11.TargetHostname), VAR_4->HostName);
  VAR_11.TargetPort = VAR_4->Port;

  FUNC_5(VAR_11.Hostname, sizeof(VAR_11.Hostname), VAR_4->ProxyHostName);
  VAR_11.Port = VAR_4->ProxyPort;

  FUNC_5(VAR_11.Username, sizeof(VAR_11.Username), VAR_4->ProxyUsername);
  FUNC_5(VAR_11.Password, sizeof(VAR_11.Password), VAR_4->ProxyPassword);

  FUNC_5(VAR_11.HttpCustomHeader, sizeof(VAR_11.HttpCustomHeader), VAR_4->CustomHttpHeader);

  switch (VAR_4->ProxyType)
  {
  case 130:
   VAR_12 = FUNC_2(&VAR_10, &VAR_11, VAR_7);
   break;
  case 129:
   VAR_12 = FUNC_3(&VAR_10, &VAR_11, VAR_7);
   break;
  case 128:
   VAR_12 = FUNC_4(&VAR_10, &VAR_11, VAR_7);
   break;
  default:
   *VAR_5 = VAR_1;
   FUNC_0("WpcSockConnect(): Unknown proxy type: %u!\n", VAR_4->ProxyType);
   return ((void*)0);
  }

  *VAR_5 = FUNC_1(VAR_12);

  if (*VAR_5 != VAR_2)
  {
   FUNC_0("ClientConnectGetSocket(): Connection via proxy server failed with error %u\n", VAR_12);
   return ((void*)0);
  }

  return VAR_10.Sock;
 }
}
