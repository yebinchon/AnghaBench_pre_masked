
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ commandsSent; int * workerPool; } ;
typedef TYPE_1__ WorkerSession ;
typedef int WorkerPool ;
typedef int TaskPlacementExecution ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static TaskPlacementExecution *
FUNC_3(WorkerSession *VAR_0)
{
 TaskPlacementExecution *VAR_1 = ((void*)0);
 WorkerPool *VAR_2 = VAR_0->workerPool;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
 {
  if (VAR_0->commandsSent > 0 && FUNC_2())
  {




   return ((void*)0);
  }


  VAR_1 = FUNC_1(VAR_2);
 }

 return VAR_1;
}
