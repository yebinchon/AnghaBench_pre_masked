
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* workerJob; } ;
struct TYPE_4__ {int taskList; } ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ DistributedPlan ;


 int FUNC_0 (int ) ;

bool
FUNC_1(DistributedPlan *VAR_0)
{
 Job *VAR_1 = VAR_0->workerJob;

 if (VAR_1 != ((void*)0) && FUNC_0(VAR_1->taskList) > 1)
 {
  return 1;
 }

 return 0;
}
