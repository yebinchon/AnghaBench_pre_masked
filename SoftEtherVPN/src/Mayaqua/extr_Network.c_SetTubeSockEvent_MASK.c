
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ref; } ;
struct TYPE_8__ {scalar_t__ IndexInTubePair; int Lock; TYPE_1__* TubePairData; TYPE_3__* SockEvent; } ;
struct TYPE_7__ {int Lock; TYPE_3__* SockEvent2; TYPE_3__* SockEvent1; } ;
typedef TYPE_1__ TUBEPAIR_DATA ;
typedef TYPE_2__ TUBE ;
typedef TYPE_3__ SOCK_EVENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(TUBE *VAR_0, SOCK_EVENT *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->Lock);
 {
  TUBEPAIR_DATA *VAR_2;

  if (VAR_0->SockEvent != VAR_1)
  {
   if (VAR_0->SockEvent != ((void*)0))
   {
    FUNC_2(VAR_0->SockEvent);
   }

   if (VAR_1 != ((void*)0))
   {
    FUNC_0(VAR_1->ref);
   }

   VAR_0->SockEvent = VAR_1;
  }

  VAR_2 = VAR_0->TubePairData;

  if (VAR_2 != ((void*)0))
  {
   FUNC_1(VAR_2->Lock);
   {
    SOCK_EVENT **VAR_3 = (VAR_0->IndexInTubePair == 0 ? &VAR_2->SockEvent1 : &VAR_2->SockEvent2);

    if (*VAR_3 != VAR_1)
    {
     if (*VAR_3 != ((void*)0))
     {
      FUNC_2(*VAR_3);
     }

     if (VAR_1 != ((void*)0))
     {
      FUNC_0(VAR_1->ref);
     }

     *VAR_3 = VAR_1;
    }
   }
   FUNC_3(VAR_2->Lock);
  }
 }
 FUNC_3(VAR_0->Lock);
}
