
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int workerPort; int workerName; } ;
typedef TYPE_1__ WorkerNode ;
typedef int HTAB ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,void*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ) ;

WorkerNode *
FUNC_6(char *VAR_2, int32 VAR_3)
{
 WorkerNode *VAR_4 = ((void*)0);
 HTAB *VAR_5 = FUNC_0();
 bool VAR_6 = 0;
 void *VAR_7 = ((void*)0);

 WorkerNode *VAR_8 = (WorkerNode *) FUNC_4(sizeof(WorkerNode));
 FUNC_5(VAR_8->workerName, VAR_2, VAR_1);
 VAR_8->workerPort = VAR_3;

 VAR_7 = (void *) VAR_8;
 VAR_4 = (WorkerNode *) FUNC_1(VAR_5, VAR_7, VAR_0,
              &VAR_6);
 if (VAR_6)
 {
  WorkerNode *VAR_9 = (WorkerNode *) FUNC_3(sizeof(WorkerNode));
  FUNC_2(VAR_9, VAR_4, sizeof(WorkerNode));
  return VAR_9;
 }

 return ((void*)0);
}
