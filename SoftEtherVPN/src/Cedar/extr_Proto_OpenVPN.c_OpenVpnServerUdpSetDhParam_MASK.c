
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* OpenVpnServer; } ;
struct TYPE_4__ {int * Dh; } ;
typedef TYPE_2__ OPENVPN_SERVER_UDP ;
typedef int DH_CTX ;


 int FUNC_0 (int *) ;

void FUNC_1(OPENVPN_SERVER_UDP *VAR_0, DH_CTX *VAR_1)
{

 if (VAR_0 == ((void*)0)) {
  return;
 }

 if (VAR_0->OpenVpnServer->Dh)
 {
  FUNC_0(VAR_0->OpenVpnServer->Dh);
 }

 VAR_0->OpenVpnServer->Dh = VAR_1;
}
