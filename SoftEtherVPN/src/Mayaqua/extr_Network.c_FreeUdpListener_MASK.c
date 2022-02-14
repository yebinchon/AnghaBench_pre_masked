
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_4__ {int Halt; int Interrupts; int SendPacketList; int PortList; int Event; int Thread; } ;
typedef TYPE_1__ UDPLISTENER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(UDPLISTENER *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->Halt = 1;
 FUNC_9(VAR_1->Event);

 FUNC_10(VAR_1->Thread, VAR_0);
 FUNC_8(VAR_1->Thread);
 FUNC_7(VAR_1->Event);

 FUNC_5(VAR_1->PortList);

 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_1->SendPacketList);VAR_2++)
 {
  UDPPACKET *VAR_3 = FUNC_3(VAR_1->SendPacketList, VAR_2);

  FUNC_2(VAR_3);
 }

 FUNC_6(VAR_1->SendPacketList);

 FUNC_1(VAR_1->Interrupts);

 FUNC_0(VAR_1);
}
