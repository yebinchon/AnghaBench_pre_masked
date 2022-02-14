
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int Halt; int ThreadList; int TunnelList; int HaltCompletedEvent; int SockEvent; } ;
struct TYPE_6__ {int SessionList; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef int L2TP_SESSION ;
typedef TYPE_2__ L2TP_SERVER ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(L2TP_SERVER *VAR_1, bool VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 if (VAR_1->Halt)
 {
  return;
 }


 VAR_1->Halt = 1;
 FUNC_0("Shutting down L2TP Server...\n");


 FUNC_3(VAR_1->SockEvent);

 if (VAR_2 == 0)
 {

  FUNC_6(VAR_1->HaltCompletedEvent, VAR_0);
 }
 else
 {
  UINT VAR_3, VAR_4;

  for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_1->TunnelList);VAR_3++)
  {
   L2TP_TUNNEL *VAR_5 = FUNC_1(VAR_1->TunnelList, VAR_3);

   for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_5->SessionList);VAR_4++)
   {
    L2TP_SESSION *VAR_6 = FUNC_1(VAR_5->SessionList, VAR_4);

    FUNC_4(VAR_1, VAR_5, VAR_6);
   }
  }
 }


 FUNC_0("Stopping all L2TP PPP Threads...\n");
 FUNC_5(VAR_1->ThreadList);
 FUNC_0("L2TP Server Shutdown Completed.\n");
}
