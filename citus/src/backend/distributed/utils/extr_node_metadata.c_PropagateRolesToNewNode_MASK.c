
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int workerPort; int workerName; } ;
typedef TYPE_1__ WorkerNode ;
typedef int List ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_3(WorkerNode *VAR_2)
{
 List *VAR_3 = VAR_1;

 if (!VAR_0)
 {
  return;
 }

 VAR_3 = FUNC_1();

 FUNC_2(VAR_2->workerName,
              VAR_2->workerPort,
              FUNC_0(), VAR_3);
}
