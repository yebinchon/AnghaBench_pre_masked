
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_8__ {int SendPacketList; TYPE_1__* Cedar; } ;
struct TYPE_7__ {int ObfuscationMode; int ClientPort; int ClientIp; int ServerPort; int ServerIp; } ;
struct TYPE_6__ {int OpenVPNObfuscationMask; } ;
typedef TYPE_2__ OPENVPN_SESSION ;
typedef TYPE_3__ OPENVPN_SERVER ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (int *,int ,int *,int ,void*,scalar_t__) ;





 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (void*,scalar_t__,int ,int ) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (int ) ;

void FUNC_7(OPENVPN_SERVER *VAR_0, OPENVPN_SESSION *VAR_1, void *VAR_2, UINT VAR_3)
{
 UDPPACKET *VAR_4;


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  FUNC_1(VAR_2);
  return;
 }


 switch (VAR_1->ObfuscationMode)
 {
 case 132:
  break;
 case 129:
  FUNC_4(VAR_2, VAR_3, VAR_0->Cedar->OpenVPNObfuscationMask, FUNC_6(VAR_0->Cedar->OpenVPNObfuscationMask));
  break;
 case 128:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_3(VAR_2, VAR_3);
  break;
 case 131:
  FUNC_5(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_3);
  FUNC_5(VAR_2, VAR_3);
  FUNC_4(VAR_2, VAR_3, VAR_0->Cedar->OpenVPNObfuscationMask, FUNC_6(VAR_0->Cedar->OpenVPNObfuscationMask));
 }

 VAR_4 = FUNC_2(&VAR_1->ServerIp, VAR_1->ServerPort, &VAR_1->ClientIp, VAR_1->ClientPort,
  VAR_2, VAR_3);

 FUNC_0(VAR_0->SendPacketList, VAR_4);
}
