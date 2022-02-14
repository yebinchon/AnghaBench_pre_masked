
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {char* member_0; int * member_4; int member_3; int * member_2; int member_1; } ;
struct TYPE_13__ {int RemoteClient; } ;
struct TYPE_12__ {TYPE_2__* ClientOption; TYPE_1__* ClientAuth; scalar_t__ RetryOnServerCert; scalar_t__ CheckServerCert; int * ServerCert; int * AccountName; } ;
struct TYPE_11__ {scalar_t__ ProxyType; scalar_t__ NoUdpAcceleration; scalar_t__ DisableQoS; scalar_t__ NoRoutingTracking; scalar_t__ RequireMonitorMode; scalar_t__ RequireBridgeRoutingMode; scalar_t__ UseCompress; scalar_t__ UseEncrypt; scalar_t__ HalfConnection; int ConnectionDisconnectSpan; int AdditionalConnectionInterval; int MaxConnection; int DeviceName; int ProxyUsername; int ProxyPort; int ProxyName; int HubName; int Port; int Hostname; int * AccountName; } ;
struct TYPE_10__ {scalar_t__ AuthType; int * ClientX; int Username; } ;
typedef TYPE_3__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_4__ PC ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int *) ;
 int * FUNC_8 (scalar_t__) ;
 int * FUNC_9 (int *,char*) ;
 int * FUNC_10 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_11 (int *,char*,int *,TYPE_5__*,int) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int,int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int * FUNC_16 (char*) ;

UINT FUNC_17(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PC *VAR_12 = (PC *)VAR_10;
 UINT VAR_13 = VAR_4;
 RPC_CLIENT_GET_ACCOUNT VAR_14;

 PARAM VAR_15[] =
 {
  {"[name]", &VAR_2, *FUNC_16("CMD_AccountCreate_Prompt_Name"), &VAR_1, ((void*)0)},
 };


 VAR_11 = FUNC_11(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_15(&VAR_14, sizeof(VAR_14));
 FUNC_13(VAR_14.AccountName, sizeof(VAR_14.AccountName), FUNC_9(VAR_11, "[name]"));

 VAR_13 = FUNC_0(VAR_12->RemoteClient, &VAR_14);

 if (VAR_13 == VAR_4)
 {

  wchar_t VAR_16[VAR_5];

  CT *VAR_17 = FUNC_5();


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_NAME"), VAR_14.ClientOption->AccountName);


  FUNC_12(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->Hostname);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_HOSTNAME"), VAR_16);


  FUNC_14(VAR_16, VAR_14.ClientOption->Port);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_PORT"), VAR_16);


  FUNC_12(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->HubName);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_HUBNAME"), VAR_16);


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_PROXY_TYPE"), FUNC_10(VAR_14.ClientOption->ProxyType));

  if (VAR_14.ClientOption->ProxyType != VAR_6)
  {

   FUNC_12(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->ProxyName);
   FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_PROXY_HOSTNAME"), VAR_16);


   FUNC_14(VAR_16, VAR_14.ClientOption->ProxyPort);
   FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_PROXY_PORT"), VAR_16);


   FUNC_12(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->ProxyUsername);
   FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_PROXY_USERNAME"), VAR_16);
  }


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_SERVER_CERT_USE"),
   VAR_14.CheckServerCert ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  if (VAR_14.ServerCert != ((void*)0))
  {
   FUNC_7(VAR_16, sizeof(VAR_16), VAR_14.ServerCert);
   FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_SERVER_CERT_NAME"), VAR_16);
  }

  if (VAR_14.CheckServerCert)
  {
   FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_RETRY_ON_SERVER_CERT"),
    VAR_14.RetryOnServerCert ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));
  }


  FUNC_12(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->DeviceName);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_DEVICE_NAME"), VAR_16);


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_AUTH_TYPE"), FUNC_8(VAR_14.ClientAuth->AuthType));


  FUNC_12(VAR_16, sizeof(VAR_16), VAR_14.ClientAuth->Username);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_AUTH_USERNAME"), VAR_16);

  if (VAR_14.ClientAuth->AuthType == VAR_0)
  {
   if (VAR_14.ClientAuth->ClientX != ((void*)0))
   {

    FUNC_7(VAR_16, sizeof(VAR_16), VAR_14.ClientAuth->ClientX);
    FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_AUTH_CERT_NAME"), VAR_16);
   }
  }


  FUNC_14(VAR_16, VAR_14.ClientOption->MaxConnection);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_NUMTCP"), VAR_16);


  FUNC_14(VAR_16, VAR_14.ClientOption->AdditionalConnectionInterval);
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_TCP_INTERVAL"), VAR_16);


  if (VAR_14.ClientOption->ConnectionDisconnectSpan != 0)
  {
   FUNC_14(VAR_16, VAR_14.ClientOption->ConnectionDisconnectSpan);
  }
  else
  {
   FUNC_13(VAR_16, sizeof(VAR_16), FUNC_16("CMD_MSG_INFINITE"));
  }
  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_TCP_TTL"), VAR_16);


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_TCP_HALF"),
   VAR_14.ClientOption->HalfConnection ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_ENCRYPT"),
   VAR_14.ClientOption->UseEncrypt ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_COMPRESS"),
   VAR_14.ClientOption->UseCompress ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_BRIDGE_ROUTER"),
   VAR_14.ClientOption->RequireBridgeRoutingMode ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_MONITOR"),
   VAR_14.ClientOption->RequireMonitorMode ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_NO_TRACKING"),
   VAR_14.ClientOption->NoRoutingTracking ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_QOS_DISABLE"),
   VAR_14.ClientOption->DisableQoS ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));


  FUNC_4(VAR_17, FUNC_16("CMD_ACCOUNT_COLUMN_DISABLEUDP"),
   VAR_14.ClientOption->NoUdpAcceleration ? FUNC_16("CMD_MSG_ENABLE") : FUNC_16("CMD_MSG_DISABLE"));

  FUNC_3(VAR_17, VAR_7);
 }

 if (VAR_13 != VAR_4)
 {

  FUNC_2(VAR_7, VAR_13);
 }

 FUNC_1(&VAR_14);


 FUNC_6(VAR_11);

 return VAR_13;
}
