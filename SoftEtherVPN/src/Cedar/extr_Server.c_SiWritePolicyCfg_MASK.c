
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int VLanId; int NoIPv6DefaultRouterInRAWhenIPv6; int NoIPv6DefaultRouterInRA; int FilterNonIP; int FilterIPv6; int FilterIPv4; int AutoDisconnect; int NoSavePassword; int MaxIPv6; int NoServerV6; int CheckIPv6; int NoRoutingV6; int DHCPv6NoServer; int DHCPv6Filter; int RAFilter; int RSandRAFilter; int NoQoS; int MultiLogins; int FixPassword; int MaxDownload; int MaxUpload; int MaxIP; int MaxMac; int TimeOut; int MaxConnection; int MonitorPort; int NoBroadcastLimiter; int NoServer; int PrivacyFilter; int ArpDhcpOnly; int CheckIP; int CheckMac; int NoRouting; int NoBridge; int DHCPForce; int DHCPNoServer; int DHCPFilter; int Access; } ;
typedef TYPE_1__ POLICY ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(FOLDER *VAR_0, POLICY *VAR_1, bool VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "Access", VAR_1->Access);
 }

 FUNC_0(VAR_0, "DHCPFilter", VAR_1->DHCPFilter);
 FUNC_0(VAR_0, "DHCPNoServer", VAR_1->DHCPNoServer);
 FUNC_0(VAR_0, "DHCPForce", VAR_1->DHCPForce);

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "NoBridge", VAR_1->NoBridge);
  FUNC_0(VAR_0, "NoRouting", VAR_1->NoRouting);
 }

 FUNC_0(VAR_0, "CheckMac", VAR_1->CheckMac);
 FUNC_0(VAR_0, "CheckIP", VAR_1->CheckIP);
 FUNC_0(VAR_0, "ArpDhcpOnly", VAR_1->ArpDhcpOnly);

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "PrivacyFilter", VAR_1->PrivacyFilter);
 }

 FUNC_0(VAR_0, "NoServer", VAR_1->NoServer);
 FUNC_0(VAR_0, "NoBroadcastLimiter", VAR_1->NoBroadcastLimiter);

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "MonitorPort", VAR_1->MonitorPort);
  FUNC_1(VAR_0, "MaxConnection", VAR_1->MaxConnection);
  FUNC_1(VAR_0, "TimeOut", VAR_1->TimeOut);
 }

 FUNC_1(VAR_0, "MaxMac", VAR_1->MaxMac);
 FUNC_1(VAR_0, "MaxIP", VAR_1->MaxIP);
 FUNC_1(VAR_0, "MaxUpload", VAR_1->MaxUpload);
 FUNC_1(VAR_0, "MaxDownload", VAR_1->MaxDownload);

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "FixPassword", VAR_1->FixPassword);
  FUNC_1(VAR_0, "MultiLogins", VAR_1->MultiLogins);
  FUNC_0(VAR_0, "NoQoS", VAR_1->NoQoS);
 }


 FUNC_0(VAR_0, "RSandRAFilter", VAR_1->RSandRAFilter);
 FUNC_0(VAR_0, "RAFilter", VAR_1->RAFilter);
 FUNC_0(VAR_0, "DHCPv6Filter", VAR_1->DHCPv6Filter);
 FUNC_0(VAR_0, "DHCPv6NoServer", VAR_1->DHCPv6NoServer);

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "NoRoutingV6", VAR_1->NoRoutingV6);
 }

 FUNC_0(VAR_0, "CheckIPv6", VAR_1->CheckIPv6);
 FUNC_0(VAR_0, "NoServerV6", VAR_1->NoServerV6);
 FUNC_1(VAR_0, "MaxIPv6", VAR_1->MaxIPv6);

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_0, "NoSavePassword", VAR_1->NoSavePassword);
  FUNC_1(VAR_0, "AutoDisconnect", VAR_1->AutoDisconnect);
 }

 FUNC_0(VAR_0, "FilterIPv4", VAR_1->FilterIPv4);
 FUNC_0(VAR_0, "FilterIPv6", VAR_1->FilterIPv6);
 FUNC_0(VAR_0, "FilterNonIP", VAR_1->FilterNonIP);
 FUNC_0(VAR_0, "NoIPv6DefaultRouterInRA", VAR_1->NoIPv6DefaultRouterInRA);
 FUNC_0(VAR_0, "NoIPv6DefaultRouterInRAWhenIPv6", VAR_1->NoIPv6DefaultRouterInRAWhenIPv6);
 FUNC_1(VAR_0, "VLanId", VAR_1->VLanId);
}
