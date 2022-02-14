
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NextSessionId; int Dh; int Now; void* SendPacketList; void* RecvPacketList; int SessionList; int * SockEvent; int * Interrupt; int * Cedar; } ;
typedef int SOCK_EVENT ;
typedef TYPE_1__ OPENVPN_SERVER ;
typedef int INTERRUPT_MANAGER ;
typedef int CEDAR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *,int *,char*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;

OPENVPN_SERVER *FUNC_6(CEDAR *VAR_2, INTERRUPT_MANAGER *VAR_3, SOCK_EVENT *VAR_4)
{
 OPENVPN_SERVER *VAR_5;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_5(sizeof(OPENVPN_SERVER));

 VAR_5->Cedar = VAR_2;
 VAR_5->Interrupt = VAR_3;
 VAR_5->SockEvent = VAR_4;

 VAR_5->SessionList = FUNC_1(VAR_1);
 VAR_5->RecvPacketList = FUNC_2(((void*)0));
 VAR_5->SendPacketList = FUNC_2(((void*)0));

 VAR_5->Now = FUNC_4();

 VAR_5->NextSessionId = 1;

 FUNC_3(VAR_5, ((void*)0), ((void*)0), "LO_START");

 VAR_5->Dh = FUNC_0(VAR_0);

 return VAR_5;
}
