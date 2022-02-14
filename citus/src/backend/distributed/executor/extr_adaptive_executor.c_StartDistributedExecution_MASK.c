
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int errorOnAnyFailure; int targetPoolSize; int isTransaction; int * tasksToExecute; } ;
typedef int List ;
typedef TYPE_1__ DistributedExecution ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(DistributedExecution *VAR_4)
{
 List *VAR_5 = VAR_4->tasksToExecute;

 if (VAR_3 != VAR_1)
 {
  if (FUNC_4(VAR_4) || VAR_2)
  {
   FUNC_1();

   if (FUNC_7(VAR_5) || VAR_2)
   {






    FUNC_2();

    VAR_4->errorOnAnyFailure = 1;
   }
   else if (VAR_3 != VAR_0 &&
      FUNC_8(VAR_5) > 1 &&
      FUNC_3(VAR_4))
   {




    VAR_4->errorOnAnyFailure = 1;
   }
  }
 }
 else
 {




  VAR_4->errorOnAnyFailure = 1;
 }
 FUNC_0(VAR_4);





 VAR_4->isTransaction = FUNC_5();
 if (VAR_4->targetPoolSize > 1)
 {
  FUNC_6(VAR_5);
 }
}
