
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* jointree; int * targetList; } ;
struct TYPE_6__ {int * quals; } ;
typedef TYPE_2__ Query ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;
typedef int Node ;
typedef int List ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

PlannedStmt *
FUNC_4(Query *VAR_0, Query *VAR_1, ParamListInfo VAR_2)
{
 PlannedStmt *VAR_3 = ((void*)0);
 VAR_0->jointree->quals =
  FUNC_1((Node *) VAR_0->jointree->quals,
         FUNC_2(VAR_2));





 VAR_1->targetList =
  (List *) FUNC_3(((void*)0), (Node *) VAR_1->targetList);
 VAR_1->jointree->quals =
  (Node *) FUNC_3(((void*)0), (Node *) VAR_1->jointree->quals);


 VAR_3 = FUNC_0(VAR_0);

 return VAR_3;
}
