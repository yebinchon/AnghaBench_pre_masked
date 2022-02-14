
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int Event; int Interrupts; } ;
struct TYPE_12__ {TYPE_1__* Server; int ref; } ;
struct TYPE_11__ {TYPE_5__* UdpListener; int OpenVpnServer; TYPE_3__* Cedar; } ;
struct TYPE_10__ {int ListenIP; } ;
typedef TYPE_2__ OPENVPN_SERVER_UDP ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 TYPE_5__* FUNC_2 (int ,TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int) ;

OPENVPN_SERVER_UDP *FUNC_4(CEDAR *VAR_2)
{
 OPENVPN_SERVER_UDP *VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(OPENVPN_SERVER_UDP));

 VAR_3->Cedar = VAR_2;

 FUNC_0(VAR_3->Cedar->ref);


 VAR_3->UdpListener = FUNC_2(VAR_1, VAR_3, &VAR_2->Server->ListenIP, VAR_0);


 VAR_3->OpenVpnServer = FUNC_1(VAR_2, VAR_3->UdpListener->Interrupts, VAR_3->UdpListener->Event);

 return VAR_3;
}
