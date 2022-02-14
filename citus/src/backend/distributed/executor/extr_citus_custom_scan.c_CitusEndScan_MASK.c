
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_8__ {scalar_t__ executorType; int * tuplestorestate; TYPE_1__* distributedPlan; } ;
struct TYPE_7__ {int consttype; int constvalue; } ;
struct TYPE_6__ {TYPE_3__* partitionKeyValue; } ;
struct TYPE_5__ {scalar_t__ queryId; TYPE_2__* workerJob; } ;
typedef scalar_t__ MultiExecutorType ;
typedef TYPE_2__ Job ;
typedef int CustomScanState ;
typedef TYPE_3__ Const ;
typedef TYPE_4__ CitusScanState ;


 int FUNC_0 (scalar_t__,scalar_t__,char*) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(CustomScanState *VAR_1)
{
 CitusScanState *VAR_2 = (CitusScanState *) VAR_1;
 Job *VAR_3 = VAR_2->distributedPlan->workerJob;
 uint64 VAR_4 = VAR_2->distributedPlan->queryId;
 MultiExecutorType VAR_5 = VAR_2->executorType;
 Const *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);

 if (VAR_3 != ((void*)0))
 {
  VAR_6 = VAR_3->partitionKeyValue;
 }


 if (VAR_4 != 0)
 {
  if (VAR_6 != ((void*)0) && VAR_5 == VAR_0)
  {
   VAR_7 = FUNC_1(VAR_6->constvalue,
              VAR_6->consttype);
  }


  FUNC_0(VAR_4, VAR_5, VAR_7);
 }

 if (VAR_2->tuplestorestate)
 {
  FUNC_2(VAR_2->tuplestorestate);
  VAR_2->tuplestorestate = ((void*)0);
 }
}
