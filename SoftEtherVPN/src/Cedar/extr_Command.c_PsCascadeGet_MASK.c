
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {char* AccountName; scalar_t__ ProxyType; scalar_t__ DisableQoS; scalar_t__ NoRoutingTracking; scalar_t__ RequireMonitorMode; scalar_t__ RequireBridgeRoutingMode; scalar_t__ UseCompress; scalar_t__ UseEncrypt; scalar_t__ HalfConnection; int ConnectionDisconnectSpan; int AdditionalConnectionInterval; int MaxConnection; int DeviceName; int ProxyUsername; int ProxyPort; int ProxyName; int HubName; int Port; int Hostname; } ;
struct TYPE_23__ {int (* Write ) (TYPE_5__*,char*) ;} ;
struct TYPE_22__ {char* member_0; char* member_2; int * member_4; int member_3; int member_1; } ;
struct TYPE_21__ {int Rpc; int * HubName; } ;
struct TYPE_20__ {int Policy; TYPE_9__* ClientOption; TYPE_1__* ClientAuth; int * ServerCert; scalar_t__ CheckServerCert; int HubName; } ;
struct TYPE_19__ {scalar_t__ AuthType; int * ClientX; int Username; } ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,int,int *) ;
 char* FUNC_7 (scalar_t__) ;
 char* FUNC_8 (int *,char*) ;
 char* FUNC_9 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_10 (TYPE_5__*,char*,char*,TYPE_4__*,int) ;
 int FUNC_11 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int ,int,int *) ;
 int FUNC_14 (char*,int,int ) ;
 int FUNC_15 (char*,int,char*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (TYPE_2__*,int) ;
 TYPE_9__* FUNC_18 (int) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (TYPE_5__*,char*) ;
 int FUNC_21 (TYPE_5__*,char*) ;
 int FUNC_22 (TYPE_5__*,char*) ;

UINT FUNC_23(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13 = 0;
 RPC_CREATE_LINK VAR_14;

 PARAM VAR_15[] =
 {

  {"[name]", VAR_2, FUNC_19("CMD_CascadeCreate_Prompt_Name"), VAR_1, ((void*)0)},
 };


 if (VAR_12->HubName == ((void*)0))
 {
  VAR_7->Write(VAR_7, FUNC_19("CMD_Hub_Not_Selected"));
  return VAR_3;
 }

 VAR_11 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_17(&VAR_14, sizeof(VAR_14));
 FUNC_13(VAR_14.HubName, sizeof(VAR_14.HubName), VAR_12->HubName);
 VAR_14.ClientOption = FUNC_18(sizeof(CLIENT_OPTION));
 FUNC_15(VAR_14.ClientOption->AccountName, sizeof(VAR_14.ClientOption->AccountName),
  FUNC_8(VAR_11, "[name]"));


 VAR_13 = FUNC_12(VAR_12->Rpc, &VAR_14);

 if (VAR_13 != VAR_4)
 {

  FUNC_0(VAR_7, VAR_13);
  FUNC_4(VAR_11);
  return VAR_13;
 }
 else
 {

  wchar_t VAR_16[VAR_5];

  CT *VAR_17 = FUNC_3();


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_NAME"), VAR_14.ClientOption->AccountName);


  FUNC_14(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->Hostname);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_HOSTNAME"), VAR_16);


  FUNC_16(VAR_16, VAR_14.ClientOption->Port);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_PORT"), VAR_16);


  FUNC_14(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->HubName);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_HUBNAME"), VAR_16);


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_PROXY_TYPE"), FUNC_9(VAR_14.ClientOption->ProxyType));

  if (VAR_14.ClientOption->ProxyType != VAR_6)
  {

   FUNC_14(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->ProxyName);
   FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_PROXY_HOSTNAME"), VAR_16);


   FUNC_16(VAR_16, VAR_14.ClientOption->ProxyPort);
   FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_PROXY_PORT"), VAR_16);


   FUNC_14(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->ProxyUsername);
   FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_PROXY_USERNAME"), VAR_16);
  }


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_SERVER_CERT_USE"),
   VAR_14.CheckServerCert ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  if (VAR_14.ServerCert != ((void*)0))
  {
   FUNC_6(VAR_16, sizeof(VAR_16), VAR_14.ServerCert);
   FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_SERVER_CERT_NAME"), VAR_16);
  }


  FUNC_14(VAR_16, sizeof(VAR_16), VAR_14.ClientOption->DeviceName);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_DEVICE_NAME"), VAR_16);


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_AUTH_TYPE"), FUNC_7(VAR_14.ClientAuth->AuthType));


  FUNC_14(VAR_16, sizeof(VAR_16), VAR_14.ClientAuth->Username);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_AUTH_USERNAME"), VAR_16);

  if (VAR_14.ClientAuth->AuthType == VAR_0)
  {
   if (VAR_14.ClientAuth->ClientX != ((void*)0))
   {

    FUNC_6(VAR_16, sizeof(VAR_16), VAR_14.ClientAuth->ClientX);
    FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_AUTH_CERT_NAME"), VAR_16);
   }
  }


  FUNC_16(VAR_16, VAR_14.ClientOption->MaxConnection);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_NUMTCP"), VAR_16);


  FUNC_16(VAR_16, VAR_14.ClientOption->AdditionalConnectionInterval);
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_TCP_INTERVAL"), VAR_16);


  if (VAR_14.ClientOption->ConnectionDisconnectSpan != 0)
  {
   FUNC_16(VAR_16, VAR_14.ClientOption->ConnectionDisconnectSpan);
  }
  else
  {
   FUNC_15(VAR_16, sizeof(VAR_16), FUNC_19("CMD_MSG_INFINITE"));
  }
  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_TCP_TTL"), VAR_16);


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_TCP_HALF"),
   VAR_14.ClientOption->HalfConnection ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_ENCRYPT"),
   VAR_14.ClientOption->UseEncrypt ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_COMPRESS"),
   VAR_14.ClientOption->UseCompress ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_BRIDGE_ROUTER"),
   VAR_14.ClientOption->RequireBridgeRoutingMode ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_MONITOR"),
   VAR_14.ClientOption->RequireMonitorMode ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_NO_TRACKING"),
   VAR_14.ClientOption->NoRoutingTracking ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));


  FUNC_2(VAR_17, FUNC_19("CMD_ACCOUNT_COLUMN_QOS_DISABLE"),
   VAR_14.ClientOption->DisableQoS ? FUNC_19("CMD_MSG_ENABLE") : FUNC_19("CMD_MSG_DISABLE"));

  FUNC_1(VAR_17, VAR_7);


  VAR_7->Write(VAR_7, L"");
  VAR_7->Write(VAR_7, FUNC_19("CMD_CascadeGet_Policy"));
  FUNC_11(VAR_7, &VAR_14.Policy, 1);
 }

 FUNC_5(&VAR_14);

 FUNC_4(VAR_11);

 return 0;
}
