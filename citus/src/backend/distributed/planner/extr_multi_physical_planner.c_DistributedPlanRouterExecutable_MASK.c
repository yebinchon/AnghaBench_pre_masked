
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* workerJob; TYPE_2__* masterQuery; } ;
struct TYPE_8__ {TYPE_1__* jobQuery; int * dependedJobList; int * taskList; } ;
struct TYPE_7__ {int * sortClause; } ;
struct TYPE_6__ {int hasAggs; } ;
typedef TYPE_2__ Query ;
typedef int List ;
typedef TYPE_3__ Job ;
typedef TYPE_4__ DistributedPlan ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(DistributedPlan *VAR_1)
{
 Query *VAR_2 = VAR_1->masterQuery;
 Job *VAR_3 = VAR_1->workerJob;
 List *VAR_4 = VAR_3->taskList;
 int VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_0(VAR_3->dependedJobList);
 bool VAR_7 = 0;

 if (!VAR_0)
 {
  return 0;
 }


 if (VAR_5 != 1)
 {
  return 0;
 }


 if (VAR_6 > 0)
 {
  return 0;
 }






 if (VAR_2 != ((void*)0) && FUNC_0(VAR_2->sortClause) > 0)
 {
  return 0;
 }






 VAR_7 = VAR_3->jobQuery->hasAggs;
 if (VAR_7)
 {
  return 0;
 }

 return 1;
}
