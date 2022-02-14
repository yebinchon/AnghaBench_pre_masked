
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HostUniqueKey; int NoUdpAcceleration; int FromAdminPack; int DisableQoS; int RequireBridgeRoutingMode; int RequireMonitorMode; int HideNicInfoWindow; int HideStatusWindow; int ConnectionDisconnectSpan; int AdditionalConnectionInterval; int NoRoutingTracking; int HalfConnection; int UseCompress; int UseEncrypt; int MaxConnection; int RetryInterval; int NumRetry; int ProxyPort; int ProxyType; int PortUDP; int Port; int DeviceName; int HubName; int CustomHttpHeader; int ProxyPassword; int ProxyUsername; int ProxyName; int Hostname; int AccountName; } ;
typedef int PACK ;
typedef TYPE_1__ CLIENT_OPTION ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int VAR_0 ;

void FUNC_5(PACK *VAR_1, CLIENT_OPTION *VAR_2)
{

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_1, "AccountName", VAR_2->AccountName);
 FUNC_3(VAR_1, "Hostname", VAR_2->Hostname);
 FUNC_3(VAR_1, "ProxyName", VAR_2->ProxyName);
 FUNC_3(VAR_1, "ProxyUsername", VAR_2->ProxyUsername);
 FUNC_3(VAR_1, "ProxyPassword", VAR_2->ProxyPassword);
 FUNC_3(VAR_1, "CustomHttpHeader", VAR_2->CustomHttpHeader);
 FUNC_3(VAR_1, "HubName", VAR_2->HubName);
 FUNC_3(VAR_1, "DeviceName", VAR_2->DeviceName);
 FUNC_2(VAR_1, "Port", VAR_2->Port);
 FUNC_2(VAR_1, "PortUDP", VAR_2->PortUDP);
 FUNC_2(VAR_1, "ProxyType", VAR_2->ProxyType);
 FUNC_2(VAR_1, "ProxyPort", VAR_2->ProxyPort);
 FUNC_2(VAR_1, "NumRetry", VAR_2->NumRetry);
 FUNC_2(VAR_1, "RetryInterval", VAR_2->RetryInterval);
 FUNC_2(VAR_1, "MaxConnection", VAR_2->MaxConnection);
 FUNC_0(VAR_1, "UseEncrypt", VAR_2->UseEncrypt);
 FUNC_0(VAR_1, "UseCompress", VAR_2->UseCompress);
 FUNC_0(VAR_1, "HalfConnection", VAR_2->HalfConnection);
 FUNC_0(VAR_1, "NoRoutingTracking", VAR_2->NoRoutingTracking);
 FUNC_2(VAR_1, "AdditionalConnectionInterval", VAR_2->AdditionalConnectionInterval);
 FUNC_2(VAR_1, "ConnectionDisconnectSpan", VAR_2->ConnectionDisconnectSpan);
 FUNC_0(VAR_1, "HideStatusWindow", VAR_2->HideStatusWindow);
 FUNC_0(VAR_1, "HideNicInfoWindow", VAR_2->HideNicInfoWindow);
 FUNC_0(VAR_1, "RequireMonitorMode", VAR_2->RequireMonitorMode);
 FUNC_0(VAR_1, "RequireBridgeRoutingMode", VAR_2->RequireBridgeRoutingMode);
 FUNC_0(VAR_1, "DisableQoS", VAR_2->DisableQoS);
 FUNC_0(VAR_1, "FromAdminPack", VAR_2->FromAdminPack);
 FUNC_0(VAR_1, "NoUdpAcceleration", VAR_2->NoUdpAcceleration);
 FUNC_1(VAR_1, "HostUniqueKey", VAR_2->HostUniqueKey, VAR_0);
}
