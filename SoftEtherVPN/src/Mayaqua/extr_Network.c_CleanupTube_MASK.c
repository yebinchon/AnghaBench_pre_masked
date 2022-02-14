
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Lock; int TubePairData; int SockEvent; int Event; int Queue; } ;
typedef int TUBEDATA ;
typedef TYPE_1__ TUBE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(TUBE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  TUBEDATA *VAR_1 = FUNC_3(VAR_0->Queue);
  if (VAR_1 == ((void*)0))
  {
   break;
  }

  FUNC_2(VAR_1);
 }

 FUNC_5(VAR_0->Queue);
 FUNC_4(VAR_0->Event);
 FUNC_6(VAR_0->SockEvent);

 FUNC_7(VAR_0->TubePairData);

 FUNC_0(VAR_0->Lock);

 FUNC_1(VAR_0);
}
