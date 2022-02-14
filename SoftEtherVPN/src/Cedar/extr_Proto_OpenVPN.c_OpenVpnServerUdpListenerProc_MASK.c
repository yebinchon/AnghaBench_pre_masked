
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int PollMyIpAndPort; scalar_t__ Param; } ;
typedef TYPE_2__ UDPLISTENER ;
struct TYPE_10__ {int SendPacketList; } ;
struct TYPE_9__ {TYPE_5__* OpenVpnServer; TYPE_1__* Cedar; } ;
struct TYPE_7__ {int OpenVPNPublicPorts; } ;
typedef TYPE_3__ OPENVPN_SERVER_UDP ;
typedef int LIST ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(UDPLISTENER *VAR_0, LIST *VAR_1)
{
 OPENVPN_SERVER_UDP *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (OPENVPN_SERVER_UDP *)VAR_0->Param;

 if (VAR_2->OpenVpnServer != ((void*)0))
 {
  {
   VAR_0->PollMyIpAndPort = 0;

   FUNC_0(VAR_2->Cedar->OpenVPNPublicPorts, sizeof(VAR_2->Cedar->OpenVPNPublicPorts));
  }

  FUNC_2(VAR_2->OpenVpnServer, VAR_1);

  FUNC_3(VAR_0, VAR_2->OpenVpnServer->SendPacketList);
  FUNC_1(VAR_2->OpenVpnServer->SendPacketList);
 }
}
