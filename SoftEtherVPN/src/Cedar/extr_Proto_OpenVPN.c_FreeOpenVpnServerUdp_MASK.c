
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Cedar; int OpenVpnServer; int UdpListener; } ;
typedef TYPE_1__ OPENVPN_SERVER_UDP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(OPENVPN_SERVER_UDP *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_0->UdpListener);


 FUNC_1(VAR_0->OpenVpnServer);

 FUNC_3(VAR_0->Cedar);

 FUNC_0(VAR_0);
}
