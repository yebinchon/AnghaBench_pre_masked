
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int RecvQueue; int SendQueue; int SessionList; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef int L2TP_SESSION ;
typedef int L2TP_QUEUE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(L2TP_TUNNEL *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->SessionList);VAR_1++)
 {
  L2TP_SESSION *VAR_2 = FUNC_3(VAR_0->SessionList, VAR_1);

  FUNC_2(VAR_2);
 }

 FUNC_5(VAR_0->SessionList);

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->SendQueue);VAR_1++)
 {
  L2TP_QUEUE *VAR_3 = FUNC_3(VAR_0->SendQueue, VAR_1);

  FUNC_1(VAR_3);
 }

 FUNC_5(VAR_0->SendQueue);

 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->RecvQueue);VAR_1++)
 {
  L2TP_QUEUE *VAR_4 = FUNC_3(VAR_0->RecvQueue, VAR_1);

  FUNC_1(VAR_4);
 }

 FUNC_5(VAR_0->RecvQueue);

 FUNC_0(VAR_0);
}
