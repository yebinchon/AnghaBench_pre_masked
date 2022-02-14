
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int EnableOpenVPN; int EnableSSTP; int OpenVPNObfuscationMask; int OpenVPNObfuscation; int OpenVPNPortList; } ;
struct TYPE_8__ {int DisableOpenVPNServer; int DisableSSTPServer; int OpenVpnSstpConfigLock; TYPE_1__* Cedar; int OpenVpnServerUdpPorts; } ;
struct TYPE_7__ {int OpenVPNObfuscationMask; int OpenVPNObfuscation; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ OPENVPN_SSTP_CONFIG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

void FUNC_4(SERVER *VAR_0, OPENVPN_SSTP_CONFIG *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1, sizeof(OPENVPN_SSTP_CONFIG));

 FUNC_0(VAR_0->OpenVpnSstpConfigLock);
 {
  if (VAR_0->DisableOpenVPNServer == 0)
  {
   VAR_1->EnableOpenVPN = 1;
  }

  if (VAR_0->DisableSSTPServer == 0)
  {
   VAR_1->EnableSSTP = 1;
  }

  FUNC_1(VAR_1->OpenVPNPortList, sizeof(VAR_1->OpenVPNPortList), VAR_0->OpenVpnServerUdpPorts);

  VAR_1->OpenVPNObfuscation = VAR_0->Cedar->OpenVPNObfuscation;
  FUNC_1(VAR_1->OpenVPNObfuscationMask, sizeof(VAR_1->OpenVPNObfuscationMask), VAR_0->Cedar->OpenVPNObfuscationMask);
 }
 FUNC_2(VAR_0->OpenVpnSstpConfigLock);
}
