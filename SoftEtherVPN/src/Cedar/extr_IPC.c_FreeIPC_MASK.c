
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int IPv4ReceivedQueue; int ArpTable; int Interrupt; int Cedar; struct TYPE_4__* Policy; int Sock; int FlushList; } ;
typedef int IPC_ARP ;
typedef TYPE_1__ IPC ;
typedef int BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(IPC *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->FlushList);

 FUNC_0(VAR_0->Sock);
 FUNC_12(VAR_0->Sock);

 if (VAR_0->Policy != ((void*)0))
 {
  FUNC_1(VAR_0->Policy);
 }

 FUNC_9(VAR_0->Cedar);

 FUNC_3(VAR_0->Interrupt);

 for (VAR_1 = 0;VAR_1 < FUNC_8(VAR_0->ArpTable);VAR_1++)
 {
  IPC_ARP *VAR_2 = FUNC_7(VAR_0->ArpTable, VAR_1);
  FUNC_6(VAR_2);
 }

 FUNC_10(VAR_0->ArpTable);

 while (1)
 {
  BLOCK *VAR_3 = FUNC_5(VAR_0->IPv4ReceivedQueue);
  if (VAR_3 == ((void*)0))
  {
   break;
  }

  FUNC_2(VAR_3);
 }

 FUNC_11(VAR_0->IPv4ReceivedQueue);

 FUNC_1(VAR_0);
}
