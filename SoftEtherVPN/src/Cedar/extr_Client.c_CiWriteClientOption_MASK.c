
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int Size; int Buf; } ;
struct TYPE_8__ {int HostUniqueKey; scalar_t__ FromAdminPack; scalar_t__ NoUdpAcceleration; scalar_t__ DisableQoS; scalar_t__ RequireBridgeRoutingMode; scalar_t__ RequireMonitorMode; int ConnectionDisconnectSpan; scalar_t__ HideNicInfoWindow; scalar_t__ HideStatusWindow; int AdditionalConnectionInterval; int DeviceName; scalar_t__ NoRoutingTracking; scalar_t__ HalfConnection; scalar_t__ UseCompress; scalar_t__ UseEncrypt; int MaxConnection; int HubName; int RetryInterval; int NumRetry; int CustomHttpHeader; int ProxyPassword; int ProxyUsername; int ProxyPort; int ProxyName; int ProxyType; int PortUDP; int Port; int Hostname; int AccountName; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT_OPTION ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,TYPE_2__*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;
 TYPE_2__* FUNC_9 (int ,int ) ;
 int VAR_0 ;

void FUNC_10(FOLDER *VAR_1, CLIENT_OPTION *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_1, "AccountName", VAR_2->AccountName);
 FUNC_4(VAR_1, "Hostname", VAR_2->Hostname);
 FUNC_3(VAR_1, "Port", VAR_2->Port);
 FUNC_3(VAR_1, "PortUDP", VAR_2->PortUDP);
 FUNC_3(VAR_1, "ProxyType", VAR_2->ProxyType);
 FUNC_4(VAR_1, "ProxyName", VAR_2->ProxyName);
 FUNC_3(VAR_1, "ProxyPort", VAR_2->ProxyPort);
 FUNC_4(VAR_1, "ProxyUsername", VAR_2->ProxyUsername);
 VAR_3 = FUNC_6(VAR_2->ProxyPassword);
 FUNC_2(VAR_1, "ProxyPassword", VAR_3->Buf, VAR_3->Size);
 FUNC_7(VAR_3);
 FUNC_4(VAR_1, "CustomHttpHeader", VAR_2->CustomHttpHeader);
 FUNC_3(VAR_1, "NumRetry", VAR_2->NumRetry);
 FUNC_3(VAR_1, "RetryInterval", VAR_2->RetryInterval);
 FUNC_4(VAR_1, "HubName", VAR_2->HubName);
 FUNC_3(VAR_1, "MaxConnection", VAR_2->MaxConnection);
 FUNC_0(VAR_1, "UseEncrypt", VAR_2->UseEncrypt);
 FUNC_0(VAR_1, "UseCompress", VAR_2->UseCompress);
 FUNC_0(VAR_1, "HalfConnection", VAR_2->HalfConnection);
 FUNC_0(VAR_1, "NoRoutingTracking", VAR_2->NoRoutingTracking);
 FUNC_4(VAR_1, "DeviceName", VAR_2->DeviceName);
 FUNC_3(VAR_1, "AdditionalConnectionInterval", VAR_2->AdditionalConnectionInterval);
 FUNC_0(VAR_1, "HideStatusWindow", VAR_2->HideStatusWindow);
 FUNC_0(VAR_1, "HideNicInfoWindow", VAR_2->HideNicInfoWindow);
 FUNC_3(VAR_1, "ConnectionDisconnectSpan", VAR_2->ConnectionDisconnectSpan);
 FUNC_0(VAR_1, "RequireMonitorMode", VAR_2->RequireMonitorMode);
 FUNC_0(VAR_1, "RequireBridgeRoutingMode", VAR_2->RequireBridgeRoutingMode);
 FUNC_0(VAR_1, "DisableQoS", VAR_2->DisableQoS);
 FUNC_0(VAR_1, "NoUdpAcceleration", VAR_2->NoUdpAcceleration);

 if (VAR_2->FromAdminPack)
 {
  FUNC_0(VAR_1, "FromAdminPack", VAR_2->FromAdminPack);
 }

 if (FUNC_8(VAR_2->HostUniqueKey, VAR_0) == 0)
 {
  BUF *VAR_4 = FUNC_9(VAR_2->HostUniqueKey, VAR_0);
  FUNC_1(VAR_1, "HostUniqueKey", VAR_4);
  FUNC_7(VAR_4);
 }
}
