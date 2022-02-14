
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Size; int Buf; } ;
struct TYPE_8__ {int HostUniqueKey; void* NoUdpAcceleration; void* FromAdminPack; void* DisableQoS; void* RequireBridgeRoutingMode; void* RequireMonitorMode; void* ConnectionDisconnectSpan; void* HideNicInfoWindow; void* HideStatusWindow; void* AdditionalConnectionInterval; int DeviceName; void* NoRoutingTracking; void* HalfConnection; void* UseCompress; void* UseEncrypt; void* MaxConnection; int HubName; void* RetryInterval; void* NumRetry; int CustomHttpHeader; int ProxyPassword; int ProxyUsername; void* ProxyPort; int ProxyName; void* ProxyType; void* PortUDP; void* Port; int Hostname; int AccountName; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT_OPTION ;
typedef TYPE_2__ BUF ;


 void* FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 char* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int ,int,char*) ;
 TYPE_1__* FUNC_10 (int) ;

CLIENT_OPTION *FUNC_11(FOLDER *VAR_1)
{
 CLIENT_OPTION *VAR_2;
 char *VAR_3;
 BUF *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_10(sizeof(CLIENT_OPTION));

 FUNC_4(VAR_1, "AccountName", VAR_2->AccountName, sizeof(VAR_2->AccountName));
 FUNC_3(VAR_1, "Hostname", VAR_2->Hostname, sizeof(VAR_2->Hostname));
 VAR_2->Port = FUNC_2(VAR_1, "Port");
 VAR_2->PortUDP = FUNC_2(VAR_1, "PortUDP");
 VAR_2->ProxyType = FUNC_2(VAR_1, "ProxyType");
 FUNC_3(VAR_1, "ProxyName", VAR_2->ProxyName, sizeof(VAR_2->ProxyName));
 VAR_2->ProxyPort = FUNC_2(VAR_1, "ProxyPort");
 FUNC_3(VAR_1, "ProxyUsername", VAR_2->ProxyUsername, sizeof(VAR_2->ProxyUsername));
 VAR_4 = FUNC_1(VAR_1, "ProxyPassword");
 VAR_3 = FUNC_6(VAR_4);
 FUNC_9(VAR_2->ProxyPassword, sizeof(VAR_2->ProxyPassword), VAR_3);
 FUNC_7(VAR_3);
 FUNC_8(VAR_4);
 FUNC_3(VAR_1, "CustomHttpHeader", VAR_2->CustomHttpHeader, sizeof(VAR_2->CustomHttpHeader));
 VAR_2->NumRetry = FUNC_2(VAR_1, "NumRetry");
 VAR_2->RetryInterval = FUNC_2(VAR_1, "RetryInterval");
 FUNC_3(VAR_1, "HubName", VAR_2->HubName, sizeof(VAR_2->HubName));
 VAR_2->MaxConnection = FUNC_2(VAR_1, "MaxConnection");
 VAR_2->UseEncrypt = FUNC_0(VAR_1, "UseEncrypt");
 VAR_2->UseCompress = FUNC_0(VAR_1, "UseCompress");
 VAR_2->HalfConnection = FUNC_0(VAR_1, "HalfConnection");
 VAR_2->NoRoutingTracking = FUNC_0(VAR_1, "NoRoutingTracking");
 FUNC_3(VAR_1, "DeviceName", VAR_2->DeviceName, sizeof(VAR_2->DeviceName));
 VAR_2->AdditionalConnectionInterval = FUNC_2(VAR_1, "AdditionalConnectionInterval");
 VAR_2->HideStatusWindow = FUNC_0(VAR_1, "HideStatusWindow");
 VAR_2->HideNicInfoWindow = FUNC_0(VAR_1, "HideNicInfoWindow");
 VAR_2->ConnectionDisconnectSpan = FUNC_2(VAR_1, "ConnectionDisconnectSpan");
 VAR_2->RequireMonitorMode = FUNC_0(VAR_1, "RequireMonitorMode");
 VAR_2->RequireBridgeRoutingMode = FUNC_0(VAR_1, "RequireBridgeRoutingMode");
 VAR_2->DisableQoS = FUNC_0(VAR_1, "DisableQoS");
 VAR_2->FromAdminPack = FUNC_0(VAR_1, "FromAdminPack");
 VAR_2->NoUdpAcceleration = FUNC_0(VAR_1, "NoUdpAcceleration");

 VAR_4 = FUNC_1(VAR_1, "HostUniqueKey");
 if (VAR_4 != ((void*)0))
 {
  if (VAR_4->Size == VAR_0)
  {
   FUNC_5(VAR_2->HostUniqueKey, VAR_4->Buf, VAR_0);
  }

  FUNC_8(VAR_4);
 }

 return VAR_2;
}
