
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* workerPool; TYPE_3__* connection; } ;
typedef TYPE_2__ WorkerSession ;
struct TYPE_9__ {int waitFlagsChanged; } ;
struct TYPE_8__ {int waitFlags; } ;
struct TYPE_6__ {TYPE_4__* distributedExecution; } ;
typedef TYPE_3__ MultiConnection ;
typedef TYPE_4__ DistributedExecution ;



__attribute__((used)) static void
FUNC_0(WorkerSession *VAR_0, int VAR_1)
{
 MultiConnection *VAR_2 = VAR_0->connection;
 DistributedExecution *VAR_3 = VAR_0->workerPool->distributedExecution;


 if (VAR_2->waitFlags == VAR_1)
 {
  return;
 }

 VAR_2->waitFlags = VAR_1;


 VAR_3->waitFlagsChanged = 1;
}
