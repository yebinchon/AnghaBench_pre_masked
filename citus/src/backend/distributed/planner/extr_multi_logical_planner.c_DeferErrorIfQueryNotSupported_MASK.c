
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ jointree; scalar_t__ groupingSets; scalar_t__ hasForUpdate; scalar_t__ cteList; scalar_t__ hasRecursive; scalar_t__ setOperations; scalar_t__ hasWindowFuncs; scalar_t__ hasSubLinks; } ;
typedef int * StringInfo ;
typedef TYPE_1__ Query ;
typedef int Node ;
typedef int DeferredErrorMessage ;


 int * FUNC_0 (int ,char*,int *,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

DeferredErrorMessage *
FUNC_7(Query *VAR_1)
{
 char *VAR_2 = ((void*)0);
 bool VAR_3 = 0;
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 bool VAR_6 = 1;
 StringInfo VAR_7 = ((void*)0);
 const char *VAR_8 = ((void*)0);
 const char *VAR_9 = "Consider joining tables on partition column and have "
         "equal filter on joining columns.";
 const char *VAR_10 = "Consider using an equality filter on the distributed "
        "table's partition column.";





 if (VAR_1->hasSubLinks && FUNC_6(VAR_1))
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with subquery outside the "
        "FROM, WHERE and HAVING clauses";
  VAR_8 = VAR_10;
 }

 if (VAR_1->hasWindowFuncs &&
  !FUNC_5(VAR_1, &VAR_7))
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query because the window "
        "function that is used cannot be pushed down";
  VAR_8 = "Window functions are supported in two ways. Either add "
     "an equality filter on the distributed tables' partition "
     "column or use the window functions with a PARTITION BY "
     "clause containing the distribution column";
 }

 if (VAR_1->setOperations)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with UNION, INTERSECT, or "
        "EXCEPT";
  VAR_8 = VAR_10;
 }

 if (VAR_1->hasRecursive)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with RECURSIVE";
  VAR_8 = VAR_10;
 }

 if (VAR_1->cteList)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with common table expressions";
  VAR_8 = VAR_10;
 }

 if (VAR_1->hasForUpdate)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with FOR UPDATE/SHARE commands";
  VAR_8 = VAR_10;
 }

 if (VAR_1->groupingSets)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with GROUPING SETS, CUBE, "
        "or ROLLUP";
  VAR_8 = VAR_10;
 }

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query which use TABLESAMPLE";
  VAR_8 = VAR_10;
 }

 VAR_4 = FUNC_4((Node *) VAR_1->jointree, ((void*)0));
 if (VAR_4)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with join types other than "
        "INNER or OUTER JOINS";
  VAR_8 = VAR_9;
 }

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
 {
  VAR_6 = 0;
  VAR_2 = "could not run distributed query with complex table expressions";
  VAR_8 = VAR_10;
 }



 if (!VAR_6)
 {
  bool VAR_11 = FUNC_1(VAR_8, VAR_1);
  return FUNC_0(VAR_0,
        VAR_2, ((void*)0),
        VAR_11 ? VAR_8 : ((void*)0));
 }

 return ((void*)0);
}
