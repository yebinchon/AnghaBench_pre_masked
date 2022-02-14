
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rtable; scalar_t__ jointree; scalar_t__ hasSubLinks; int * limitOffset; int * limitCount; int * sortClause; int * groupClause; int hasAggs; } ;
struct TYPE_5__ {scalar_t__ rtekind; TYPE_2__* subquery; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef int List ;
typedef int DeferredErrorMessage ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,char*,char*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int **) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int,int ) ;

DeferredErrorMessage *
FUNC_6(Query *VAR_4)
{
 char *VAR_5 = ((void*)0);
 bool VAR_6 = 1;
 List *VAR_7 = VAR_1;
 int VAR_8 = 0;
 RangeTblEntry *VAR_9 = ((void*)0);
 Query *VAR_10 = ((void*)0);

 if (!VAR_4->hasAggs)
 {
  VAR_6 = 0;
  VAR_5 = "Subqueries without aggregates are not supported yet";
 }

 if (VAR_4->groupClause == VAR_1)
 {
  VAR_6 = 0;
  VAR_5 = "Subqueries without group by clause are not supported yet";
 }

 if (VAR_4->sortClause != ((void*)0))
 {
  VAR_6 = 0;
  VAR_5 = "Subqueries with order by clause are not supported yet";
 }

 if (VAR_4->limitCount != ((void*)0))
 {
  VAR_6 = 0;
  VAR_5 = "Subqueries with limit are not supported yet";
 }

 if (VAR_4->limitOffset != ((void*)0))
 {
  VAR_6 = 0;
  VAR_5 = "Subqueries with offset are not supported yet";
 }

 if (VAR_4->hasSubLinks)
 {
  VAR_6 = 0;
  VAR_5 = "Subqueries other than from-clause subqueries are unsupported";
 }


 if (!VAR_6)
 {
  return FUNC_1(VAR_0,
        "cannot perform distributed planning on this query",
        VAR_5, ((void*)0));
 }





 FUNC_2((Node *) VAR_4->jointree,
         &VAR_7);
 FUNC_0(FUNC_4(VAR_7) == 1);


 VAR_8 = FUNC_3(VAR_7);
 VAR_9 = FUNC_5(VAR_8, VAR_4->rtable);
 if (VAR_9->rtekind == VAR_2)
 {
  return ((void*)0);
 }

 FUNC_0(VAR_9->rtekind == VAR_3);
 VAR_10 = VAR_9->subquery;


 return FUNC_6(VAR_10);
}
