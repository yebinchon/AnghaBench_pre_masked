
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int connection; TYPE_1__* workerPool; } ;
typedef TYPE_2__ WorkerSession ;
struct TYPE_4__ {int * distributedExecution; } ;
typedef int DistributedExecution ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(WorkerSession *VAR_2)
{
 DistributedExecution *VAR_3 = ((void*)0);

 if (VAR_1 != VAR_0)
 {

  return;
 }

 VAR_3 = VAR_2->workerPool->distributedExecution;
 if (FUNC_3(VAR_3) &&
  FUNC_2(VAR_3) &&
  !FUNC_0(VAR_2->connection))
 {





  FUNC_1();
 }
}
