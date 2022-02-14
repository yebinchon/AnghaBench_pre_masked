
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hasSubLinks; } ;
typedef scalar_t__ RecurringTuplesType ;
typedef TYPE_1__ Query ;
typedef int DeferredErrorMessage ;


 int * FUNC_0 (int ,char*,char*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static DeferredErrorMessage *
FUNC_2(Query *VAR_6)
{
 RecurringTuplesType VAR_7 = VAR_3;

 if (!VAR_6->hasSubLinks)
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 == VAR_4)
 {
  return FUNC_0(VAR_0,
        "cannot pushdown the subquery",
        "Reference tables are not allowed in FROM "
        "clause when the query has subqueries in "
        "WHERE clause and it references a column "
        "from another query", ((void*)0));
 }
 else if (VAR_7 == VAR_2)
 {
  return FUNC_0(VAR_0,
        "cannot pushdown the subquery",
        "Functions are not allowed in FROM "
        "clause when the query has subqueries in "
        "WHERE clause and it references a column "
        "from another query", ((void*)0));
 }
 else if (VAR_7 == VAR_5)
 {
  return FUNC_0(VAR_0,
        "cannot pushdown the subquery",
        "Complex subqueries and CTEs are not allowed in "
        "the FROM clause when the query has subqueries in the "
        "WHERE clause and it references a column "
        "from another query", ((void*)0));
 }
 else if (VAR_7 == VAR_1)
 {
  return FUNC_0(VAR_0,
        "cannot pushdown the subquery",
        "Subqueries without FROM are not allowed in FROM "
        "clause when the outer query has subqueries in "
        "WHERE clause and it references a column "
        "from another query", ((void*)0));
 }
 return ((void*)0);
}
