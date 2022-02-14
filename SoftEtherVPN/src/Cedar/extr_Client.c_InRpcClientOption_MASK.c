
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int UseEncrypt; int UseCompress; int HalfConnection; int NoRoutingTracking; int HostUniqueKey; void* NoUdpAcceleration; void* FromAdminPack; void* RequireBridgeRoutingMode; void* RequireMonitorMode; int DeviceName; int HubName; int CustomHttpHeader; int ProxyPassword; int ProxyUsername; int ProxyName; void* DisableQoS; void* HideNicInfoWindow; void* HideStatusWindow; void* ConnectionDisconnectSpan; void* AdditionalConnectionInterval; void* MaxConnection; void* RetryInterval; void* NumRetry; void* ProxyPort; void* ProxyType; void* PortUDP; void* Port; int Hostname; int AccountName; } ;
typedef int PACK ;
typedef TYPE_1__ CLIENT_OPTION ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(CLIENT_OPTION *VAR_1, PACK *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_1, sizeof(CLIENT_OPTION));

 FUNC_4(VAR_2, "AccountName", VAR_1->AccountName, sizeof(VAR_1->AccountName));
 FUNC_3(VAR_2, "Hostname", VAR_1->Hostname, sizeof(VAR_1->Hostname));
 VAR_1->Port = FUNC_2(VAR_2, "Port");
 VAR_1->PortUDP = FUNC_2(VAR_2, "PortUDP");
 VAR_1->ProxyType = FUNC_2(VAR_2, "ProxyType");
 VAR_1->ProxyPort = FUNC_2(VAR_2, "ProxyPort");
 VAR_1->NumRetry = FUNC_2(VAR_2, "NumRetry");
 VAR_1->RetryInterval = FUNC_2(VAR_2, "RetryInterval");
 VAR_1->MaxConnection = FUNC_2(VAR_2, "MaxConnection");
 VAR_1->AdditionalConnectionInterval = FUNC_2(VAR_2, "AdditionalConnectionInterval");
 VAR_1->ConnectionDisconnectSpan = FUNC_2(VAR_2, "ConnectionDisconnectSpan");
 VAR_1->HideStatusWindow = FUNC_0(VAR_2, "HideStatusWindow");
 VAR_1->HideNicInfoWindow = FUNC_0(VAR_2, "HideNicInfoWindow");
 VAR_1->DisableQoS = FUNC_0(VAR_2, "DisableQoS");
 FUNC_3(VAR_2, "ProxyName", VAR_1->ProxyName, sizeof(VAR_1->ProxyName));
 FUNC_3(VAR_2, "ProxyUsername", VAR_1->ProxyUsername, sizeof(VAR_1->ProxyUsername));
 FUNC_3(VAR_2, "ProxyPassword", VAR_1->ProxyPassword, sizeof(VAR_1->ProxyPassword));
 FUNC_3(VAR_2, "CustomHttpHeader", VAR_1->CustomHttpHeader, sizeof(VAR_1->CustomHttpHeader));
 FUNC_3(VAR_2, "HubName", VAR_1->HubName, sizeof(VAR_1->HubName));
 FUNC_3(VAR_2, "DeviceName", VAR_1->DeviceName, sizeof(VAR_1->DeviceName));
 VAR_1->UseEncrypt = FUNC_2(VAR_2, "UseEncrypt") ? 1 : 0;
 VAR_1->UseCompress = FUNC_2(VAR_2, "UseCompress") ? 1 : 0;
 VAR_1->HalfConnection = FUNC_2(VAR_2, "HalfConnection") ? 1 : 0;
 VAR_1->NoRoutingTracking = FUNC_2(VAR_2, "NoRoutingTracking") ? 1 : 0;
 VAR_1->RequireMonitorMode = FUNC_0(VAR_2, "RequireMonitorMode");
 VAR_1->RequireBridgeRoutingMode = FUNC_0(VAR_2, "RequireBridgeRoutingMode");
 VAR_1->FromAdminPack = FUNC_0(VAR_2, "FromAdminPack");
 VAR_1->NoUdpAcceleration = FUNC_0(VAR_2, "NoUdpAcceleration");
 FUNC_1(VAR_2, "HostUniqueKey", VAR_1->HostUniqueKey, VAR_0);
}
