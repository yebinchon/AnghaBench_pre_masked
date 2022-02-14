
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int IndexInTubePair; TYPE_1__* Event; TYPE_2__* TubePairData; } ;
struct TYPE_9__ {TYPE_1__* Event2; TYPE_1__* Event1; int Ref; } ;
struct TYPE_8__ {int ref; } ;
typedef TYPE_2__ TUBEPAIR_DATA ;
typedef TYPE_3__ TUBE ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 () ;

void FUNC_3(TUBE **VAR_0, TUBE **VAR_1, UINT VAR_2)
{
 TUBEPAIR_DATA *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 *VAR_0 = FUNC_1(VAR_2);
 *VAR_1 = FUNC_1(VAR_2);

 (*VAR_0)->IndexInTubePair = 0;
 (*VAR_1)->IndexInTubePair = 1;

 VAR_3 = FUNC_2();
 FUNC_0(VAR_3->Ref);

 (*VAR_0)->TubePairData = VAR_3;
 (*VAR_1)->TubePairData = VAR_3;

 VAR_3->Event1 = (*VAR_0)->Event;
 VAR_3->Event2 = (*VAR_1)->Event;

 FUNC_0(VAR_3->Event1->ref);
 FUNC_0(VAR_3->Event2->ref);
}
