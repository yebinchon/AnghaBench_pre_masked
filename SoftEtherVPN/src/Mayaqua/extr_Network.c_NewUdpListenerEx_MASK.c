
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
typedef int UDPLISTENER_RECV_PROC ;
struct TYPE_5__ {int Thread; int Interrupts; void* SendPacketList; int * RecvProc; int ListenIP; int Event; void* PortList; int PacketType; void* Param; } ;
typedef TYPE_1__ UDPLISTENER ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int) ;

UDPLISTENER *FUNC_6(UDPLISTENER_RECV_PROC *VAR_1, void *VAR_2, IP *VAR_3, UINT VAR_4)
{
 UDPLISTENER *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_5(sizeof(UDPLISTENER));

 VAR_5->Param = VAR_2;
 VAR_5->PacketType = VAR_4;

 VAR_5->PortList = FUNC_2(((void*)0));
 VAR_5->Event = FUNC_3();

 if (VAR_3)
 {
  FUNC_0(&VAR_5->ListenIP, VAR_3, sizeof(IP));
 }

 VAR_5->RecvProc = VAR_1;
 VAR_5->SendPacketList = FUNC_2(((void*)0));

 VAR_5->Interrupts = FUNC_1();

 VAR_5->Thread = FUNC_4(VAR_0, VAR_5);

 return VAR_5;
}
