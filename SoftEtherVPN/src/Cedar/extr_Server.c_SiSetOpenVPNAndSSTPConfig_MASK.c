
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int OpenVPNObfuscationMask; int OpenVPNObfuscation; int OpenVPNPortList; int EnableOpenVPN; int EnableSSTP; } ;
struct TYPE_7__ {scalar_t__ ServerType; int DisableSSTPServer; int DisableOpenVPNServer; char* OpenVpnServerUdpPorts; int OpenVpnSstpConfigLock; int ListenIP; int * OpenVpnServerUdp; TYPE_1__* Cedar; } ;
struct TYPE_6__ {int OpenVPNObfuscationMask; int OpenVPNObfuscation; scalar_t__ Bridge; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ OPENVPN_SSTP_CONFIG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int,char*) ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(SERVER *VAR_1, OPENVPN_SSTP_CONFIG *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->OpenVpnSstpConfigLock);
 {

  if (VAR_1->Cedar->Bridge || VAR_1->ServerType != VAR_0)
  {
   VAR_1->DisableSSTPServer = 1;
   VAR_1->DisableOpenVPNServer = 1;
  }
  else
  {
   VAR_1->DisableSSTPServer = !VAR_2->EnableSSTP;
   VAR_1->DisableOpenVPNServer = !VAR_2->EnableOpenVPN;
  }

  FUNC_1(VAR_1->OpenVpnServerUdpPorts, sizeof(VAR_1->OpenVpnServerUdpPorts),
   VAR_2->OpenVPNPortList, 1, ", ");

  VAR_1->Cedar->OpenVPNObfuscation = VAR_2->OpenVPNObfuscation;
  FUNC_3(VAR_1->Cedar->OpenVPNObfuscationMask, sizeof(VAR_1->Cedar->OpenVPNObfuscationMask), VAR_2->OpenVPNObfuscationMask);


  if (VAR_1->OpenVpnServerUdp != ((void*)0))
  {
   if (VAR_1->DisableOpenVPNServer)
   {
    FUNC_2(VAR_1->OpenVpnServerUdp, "", ((void*)0));
   }
   else
   {
    FUNC_2(VAR_1->OpenVpnServerUdp, VAR_1->OpenVpnServerUdpPorts, &VAR_1->ListenIP);
   }
  }
 }
 FUNC_4(VAR_1->OpenVpnSstpConfigLock);
}
