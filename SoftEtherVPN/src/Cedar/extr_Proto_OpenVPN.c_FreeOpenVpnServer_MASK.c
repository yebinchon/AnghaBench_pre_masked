
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_5__ {int Dh; int SendPacketList; int RecvPacketList; int SessionList; } ;
typedef int OPENVPN_SESSION ;
typedef TYPE_1__ OPENVPN_SERVER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *,char*) ;
 int FUNC_7 (int ) ;

void FUNC_8(OPENVPN_SERVER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, ((void*)0), ((void*)0), "LO_STOP");


 for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0->SessionList); ++VAR_1)
 {
  OPENVPN_SESSION *VAR_2 = FUNC_3(VAR_0->SessionList, VAR_1);
  FUNC_5(VAR_2);
 }

 FUNC_7(VAR_0->SessionList);


 for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0->RecvPacketList); ++VAR_1)
 {
  UDPPACKET *VAR_3 = FUNC_3(VAR_0->RecvPacketList, VAR_1);
  FUNC_2(VAR_3);
 }

 FUNC_7(VAR_0->RecvPacketList);


 for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0->SendPacketList); ++VAR_1)
 {
  UDPPACKET *VAR_4 = FUNC_3(VAR_0->SendPacketList, VAR_1);
  FUNC_2(VAR_4);
 }

 FUNC_7(VAR_0->SendPacketList);

 FUNC_0(VAR_0->Dh);

 FUNC_1(VAR_0);
}
