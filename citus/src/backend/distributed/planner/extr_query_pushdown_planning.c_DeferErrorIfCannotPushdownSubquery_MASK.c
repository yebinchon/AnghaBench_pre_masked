
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ detail; } ;
struct TYPE_18__ {int * targetList; int * distinctClause; int * groupClause; scalar_t__ havingQual; scalar_t__ hasAggs; scalar_t__ hasWindowFuncs; scalar_t__ groupingSets; scalar_t__ hasForUpdate; scalar_t__ cteList; scalar_t__ hasRecursive; scalar_t__ setOperations; scalar_t__ limitCount; scalar_t__ limitOffset; } ;
struct TYPE_17__ {scalar_t__ data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef int List ;
typedef TYPE_3__ DeferredErrorMessage ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int ,char*,char*,int *) ;
 int VAR_0 ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__**) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (int *) ;

DeferredErrorMessage *
FUNC_9(Query *VAR_2, bool VAR_3)
{
 bool VAR_4 = 1;
 char *VAR_5 = ((void*)0);
 StringInfo VAR_6 = ((void*)0);
 DeferredErrorMessage *VAR_7 = ((void*)0);

 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7)
 {
  return VAR_7;
 }

 if (FUNC_5(VAR_2) &&
  FUNC_8((Node *) VAR_2->targetList))
 {
  VAR_4 = 0;
  VAR_5 = "Subqueries without a FROM clause can only contain immutable "
       "functions";
 }

 if (VAR_2->limitOffset)
 {
  VAR_4 = 0;
  VAR_5 = "Offset clause is currently unsupported when a subquery "
       "references a column from another query";
 }


 if (VAR_2->limitCount && !VAR_1)
 {
  VAR_4 = 0;
  VAR_5 = "Limit in subquery is currently unsupported when a "
       "subquery references a column from another query";
 }





 if (VAR_2->limitCount && VAR_1 && !VAR_3)
 {
  VAR_4 = 0;
  VAR_5 = "Limit in subquery without limit in the outermost query is "
       "unsupported";
 }

 if (VAR_2->setOperations)
 {
  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7)
  {
   return VAR_7;
  }
 }

 if (VAR_2->hasRecursive)
 {
  VAR_4 = 0;
  VAR_5 = "Recursive queries are currently unsupported";
 }

 if (VAR_2->cteList)
 {
  VAR_4 = 0;
  VAR_5 = "Common Table Expressions are currently unsupported";
 }

 if (VAR_2->hasForUpdate)
 {
  VAR_4 = 0;
  VAR_5 = "For Update/Share commands are currently unsupported";
 }


 if (VAR_2->groupClause)
 {
  List *VAR_8 = VAR_2->groupClause;
  List *VAR_9 = VAR_2->targetList;
  List *VAR_10 = FUNC_4(VAR_8,
                VAR_9);
  bool VAR_11 = FUNC_7(VAR_2,
                  VAR_10);
  if (!VAR_11)
  {
   VAR_4 = 0;
   VAR_5 = "Group by list without partition column is currently "
        "unsupported when a subquery references a column "
        "from another query";
  }
 }


 if (VAR_2->groupingSets)
 {
  VAR_4 = 0;
  VAR_5 = "could not run distributed query with GROUPING SETS, CUBE, "
       "or ROLLUP";
 }





 if (VAR_2->hasWindowFuncs && !FUNC_6(VAR_2,
                   &VAR_6))
 {
  VAR_5 = (char *) VAR_6->data;
  VAR_4 = 0;
 }


 if (VAR_2->hasAggs && (VAR_2->groupClause == ((void*)0)))
 {
  VAR_4 = 0;
  VAR_5 = "Aggregates without group by are currently unsupported "
       "when a subquery references a column from another query";
 }


 if (VAR_2->havingQual && (VAR_2->groupClause == ((void*)0)))
 {
  VAR_4 = 0;
  VAR_5 = "Having qual without group by on partition column is "
       "currently unsupported when a subquery references "
       "a column from another query";
 }


 if (VAR_2->distinctClause)
 {
  List *VAR_12 = VAR_2->distinctClause;
  List *VAR_13 = VAR_2->targetList;
  List *VAR_14 = FUNC_4(VAR_12,
                VAR_13);
  bool VAR_15 =
   FUNC_7(VAR_2, VAR_14);
  if (!VAR_15)
  {
   VAR_4 = 0;
   VAR_5 = "Distinct on columns without partition column is "
        "currently unsupported";
  }
 }

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7)
 {
  VAR_4 = 0;
  VAR_5 = (char *) VAR_7->detail;
 }



 if (!VAR_4)
 {
  return FUNC_3(VAR_0,
        "cannot push down this subquery",
        VAR_5, ((void*)0));
 }

 return ((void*)0);
}
