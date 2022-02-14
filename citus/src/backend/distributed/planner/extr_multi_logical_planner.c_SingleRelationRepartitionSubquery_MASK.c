
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ jointree; scalar_t__ hasWindowFuncs; scalar_t__ hasSubLinks; int * rtable; } ;
struct TYPE_5__ {scalar_t__ rtekind; TYPE_2__* subquery; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int *,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int,int *) ;

bool
FUNC_4(Query *VAR_2)
{
 List *VAR_3 = ((void*)0);
 RangeTblEntry *VAR_4 = ((void*)0);
 List *VAR_5 = VAR_2->rtable;
 int VAR_6 = 0;


 if (VAR_2->hasSubLinks)
 {
  return 0;
 }


 if (VAR_2->hasWindowFuncs)
 {
  return 0;
 }






 FUNC_0((Node *) VAR_2->jointree,
         &VAR_3);
 if (FUNC_2(VAR_3) != 1)
 {
  return 0;
 }

 VAR_6 = FUNC_1(VAR_3);
 VAR_4 = FUNC_3(VAR_6, VAR_5);
 if (VAR_4->rtekind == VAR_0)
 {
  return 1;
 }
 else if (VAR_4->rtekind == VAR_1)
 {
  Query *VAR_7 = VAR_4->subquery;

  return FUNC_4(VAR_7);
 }

 return 0;
}
