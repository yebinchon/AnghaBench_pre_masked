
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* TubePairData; } ;
struct TYPE_4__ {int IsDisconnected; int Lock; int SockEvent2; int SockEvent1; int Event2; int Event1; } ;
typedef TYPE_2__ TUBE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(TUBE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->TubePairData == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->TubePairData->Lock);
 {
  VAR_0->TubePairData->IsDisconnected = 1;

  FUNC_1(VAR_0->TubePairData->Event1);
  FUNC_1(VAR_0->TubePairData->Event2);
  FUNC_2(VAR_0->TubePairData->SockEvent1);
  FUNC_2(VAR_0->TubePairData->SockEvent2);
 }
 FUNC_3(VAR_0->TubePairData->Lock);
}
