
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int OpenVPNObfuscationMask; void* OpenVPNObfuscation; int OpenVPNPortList; void* EnableSSTP; void* EnableOpenVPN; } ;
typedef int PACK ;
typedef TYPE_1__ OPENVPN_SSTP_CONFIG ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(OPENVPN_SSTP_CONFIG *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(OPENVPN_SSTP_CONFIG));

 VAR_0->EnableOpenVPN = FUNC_0(VAR_1, "EnableOpenVPN");
 VAR_0->EnableSSTP = FUNC_0(VAR_1, "EnableSSTP");
 FUNC_1(VAR_1, "OpenVPNPortList", VAR_0->OpenVPNPortList, sizeof(VAR_0->OpenVPNPortList));
 VAR_0->OpenVPNObfuscation= FUNC_0(VAR_1, "OpenVPNObfuscation");
 FUNC_1(VAR_1, "OpenVPNObfuscationMask", VAR_0->OpenVPNObfuscationMask, sizeof(VAR_0->OpenVPNObfuscationMask));
}
