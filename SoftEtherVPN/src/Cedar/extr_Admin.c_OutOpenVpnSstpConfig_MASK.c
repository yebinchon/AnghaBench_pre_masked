
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int OpenVPNObfuscationMask; int OpenVPNObfuscation; int OpenVPNPortList; int EnableSSTP; int EnableOpenVPN; } ;
typedef int PACK ;
typedef TYPE_1__ OPENVPN_SSTP_CONFIG ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, OPENVPN_SSTP_CONFIG *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "EnableOpenVPN", VAR_1->EnableOpenVPN);
 FUNC_0(VAR_0, "EnableSSTP", VAR_1->EnableSSTP);
 FUNC_1(VAR_0, "OpenVPNPortList", VAR_1->OpenVPNPortList);
 FUNC_0(VAR_0, "OpenVPNObfuscation", VAR_1->OpenVPNObfuscation);
 FUNC_1(VAR_0, "OpenVPNObfuscationMask", VAR_1->OpenVPNObfuscationMask);
}
