
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* VLanId; void* NoIPv6DefaultRouterInRAWhenIPv6; void* NoIPv6DefaultRouterInRA; void* FilterNonIP; void* FilterIPv6; void* FilterIPv4; void* AutoDisconnect; void* NoSavePassword; void* MaxIPv6; void* NoServerV6; void* CheckIPv6; void* NoRoutingV6; void* DHCPv6NoServer; void* DHCPv6Filter; void* RAFilter; void* RSandRAFilter; void* NoQoS; void* MultiLogins; void* FixPassword; void* MaxDownload; void* MaxUpload; void* MaxIP; void* MaxMac; void* TimeOut; void* MaxConnection; void* MonitorPort; void* NoBroadcastLimiter; void* NoServer; void* PrivacyFilter; void* ArpDhcpOnly; void* CheckIP; void* CheckMac; void* NoRouting; void* NoBridge; void* DHCPForce; void* DHCPNoServer; void* DHCPFilter; void* Access; } ;
typedef TYPE_1__ POLICY ;
typedef int FOLDER ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(POLICY *VAR_0, FOLDER *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(POLICY));


 VAR_0->Access = FUNC_0(VAR_1, "Access");
 VAR_0->DHCPFilter = FUNC_0(VAR_1, "DHCPFilter");
 VAR_0->DHCPNoServer = FUNC_0(VAR_1, "DHCPNoServer");
 VAR_0->DHCPForce = FUNC_0(VAR_1, "DHCPForce");
 VAR_0->NoBridge = FUNC_0(VAR_1, "NoBridge");
 VAR_0->NoRouting = FUNC_0(VAR_1, "NoRouting");
 VAR_0->CheckMac = FUNC_0(VAR_1, "CheckMac");
 VAR_0->CheckIP = FUNC_0(VAR_1, "CheckIP");
 VAR_0->ArpDhcpOnly = FUNC_0(VAR_1, "ArpDhcpOnly");
 VAR_0->PrivacyFilter = FUNC_0(VAR_1, "PrivacyFilter");
 VAR_0->NoServer = FUNC_0(VAR_1, "NoServer");
 VAR_0->NoBroadcastLimiter = FUNC_0(VAR_1, "NoBroadcastLimiter");
 VAR_0->MonitorPort = FUNC_0(VAR_1, "MonitorPort");
 VAR_0->MaxConnection = FUNC_1(VAR_1, "MaxConnection");
 VAR_0->TimeOut = FUNC_1(VAR_1, "TimeOut");
 VAR_0->MaxMac = FUNC_1(VAR_1, "MaxMac");
 VAR_0->MaxIP = FUNC_1(VAR_1, "MaxIP");
 VAR_0->MaxUpload = FUNC_1(VAR_1, "MaxUpload");
 VAR_0->MaxDownload = FUNC_1(VAR_1, "MaxDownload");
 VAR_0->FixPassword = FUNC_0(VAR_1, "FixPassword");
 VAR_0->MultiLogins = FUNC_1(VAR_1, "MultiLogins");
 VAR_0->NoQoS = FUNC_0(VAR_1, "NoQoS");


 VAR_0->RSandRAFilter = FUNC_0(VAR_1, "RSandRAFilter");
 VAR_0->RAFilter = FUNC_0(VAR_1, "RAFilter");
 VAR_0->DHCPv6Filter = FUNC_0(VAR_1, "DHCPv6Filter");
 VAR_0->DHCPv6NoServer = FUNC_0(VAR_1, "DHCPv6NoServer");
 VAR_0->NoRoutingV6 = FUNC_0(VAR_1, "NoRoutingV6");
 VAR_0->CheckIPv6 = FUNC_0(VAR_1, "CheckIPv6");
 VAR_0->NoServerV6 = FUNC_0(VAR_1, "NoServerV6");
 VAR_0->MaxIPv6 = FUNC_1(VAR_1, "MaxIPv6");
 VAR_0->NoSavePassword = FUNC_0(VAR_1, "NoSavePassword");
 VAR_0->AutoDisconnect = FUNC_1(VAR_1, "AutoDisconnect");
 VAR_0->FilterIPv4 = FUNC_0(VAR_1, "FilterIPv4");
 VAR_0->FilterIPv6 = FUNC_0(VAR_1, "FilterIPv6");
 VAR_0->FilterNonIP = FUNC_0(VAR_1, "FilterNonIP");
 VAR_0->NoIPv6DefaultRouterInRA = FUNC_0(VAR_1, "NoIPv6DefaultRouterInRA");
 VAR_0->NoIPv6DefaultRouterInRAWhenIPv6 = FUNC_0(VAR_1, "NoIPv6DefaultRouterInRAWhenIPv6");
 VAR_0->VLanId = FUNC_1(VAR_1, "VLanId");
}
