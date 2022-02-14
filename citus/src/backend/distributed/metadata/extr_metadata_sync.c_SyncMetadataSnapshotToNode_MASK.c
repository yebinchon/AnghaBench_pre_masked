
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int workerPort; int workerName; int groupId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int List ;


 char* FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int ,char*,int *) ;
 int FUNC_5 (int ,int ,char*,int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8(WorkerNode *VAR_0, bool VAR_1)
{
 char *VAR_2 = FUNC_0();


 char *VAR_3 = FUNC_1(VAR_0->groupId);


 List *VAR_4 = FUNC_3();


 List *VAR_5 = FUNC_2();

 List *VAR_6 = FUNC_7(VAR_3);
 VAR_6 = FUNC_6(VAR_6,
               VAR_4);
 VAR_6 = FUNC_6(VAR_6,
               VAR_5);







 if (VAR_1)
 {
  FUNC_4(VAR_0->workerName,
               VAR_0->workerPort,
               VAR_2,
               VAR_6);
  return 1;
 }
 else
 {
  bool VAR_7 =
   FUNC_5(VAR_0->workerName,
               VAR_0->workerPort,
               VAR_2,
               VAR_6);
  return VAR_7;
 }
}
