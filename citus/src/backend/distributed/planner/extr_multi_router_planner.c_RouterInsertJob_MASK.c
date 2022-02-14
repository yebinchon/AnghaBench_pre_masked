
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int requiresMasterEvaluation; int deferredPruning; int * partitionKeyValue; int * taskList; } ;
typedef int Query ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ Job ;
typedef int DeferredErrorMessage ;
typedef int Const ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int **) ;

__attribute__((used)) static Job *
FUNC_9(Query *VAR_1, Query *VAR_2, DeferredErrorMessage **VAR_3)
{
 Oid VAR_4 = FUNC_2(VAR_2);
 List *VAR_5 = VAR_0;
 Job *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 Const *VAR_9 = ((void*)0);

 bool VAR_10 = FUNC_4(VAR_2);
 if (VAR_10)
 {

  FUNC_5(VAR_1);
 }

 if (VAR_10 || !FUNC_0(VAR_4, VAR_2))
 {
  VAR_5 = VAR_0;
  VAR_8 = 1;


  VAR_7 = 1;
 }
 else
 {
  VAR_5 = FUNC_8(VAR_2, VAR_3);
  if (*VAR_3)
  {
   return ((void*)0);
  }


  VAR_7 = FUNC_7(VAR_1);
 }

 if (!VAR_7)
 {

  FUNC_6(VAR_1, VAR_5);


  VAR_9 = FUNC_3(VAR_1);
 }

 VAR_6 = FUNC_1(VAR_1);
 VAR_6->taskList = VAR_5;
 VAR_6->requiresMasterEvaluation = VAR_7;
 VAR_6->deferredPruning = VAR_8;
 VAR_6->partitionKeyValue = VAR_9;

 return VAR_6;
}
