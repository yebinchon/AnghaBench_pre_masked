
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int * setOperations; scalar_t__ jointree; int * rtable; } ;
struct TYPE_7__ {scalar_t__ rtekind; TYPE_3__* subquery; } ;
struct TYPE_6__ {scalar_t__ op; } ;
typedef TYPE_1__ SetOperationStmt ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ Query ;
typedef int Node ;
typedef int List ;
typedef int Index ;


 int FUNC_0 (int *,int **) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ,int *) ;

bool
FUNC_4(Query *VAR_3)
{
 List *VAR_4 = VAR_3->rtable;
 Node *VAR_5 = VAR_3->setOperations;
 List *VAR_6 = VAR_0;
 Index VAR_7 = 0;
 uint32 VAR_8 = 0;
 RangeTblEntry *VAR_9 = ((void*)0);
 Query *VAR_10 = ((void*)0);

 FUNC_0((Node *) VAR_3->jointree, &VAR_6);
 VAR_8 = FUNC_2(VAR_6);


 if (VAR_8 > 1)
 {
  return 0;
 }


 if (VAR_8 == 0)
 {
  return 0;
 }

 VAR_7 = FUNC_1(VAR_6);
 VAR_9 = FUNC_3(VAR_7, VAR_4);
 if (VAR_9->rtekind != VAR_1)
 {
  return 0;
 }

 VAR_10 = VAR_9->subquery;
 VAR_5 = VAR_10->setOperations;
 if (VAR_5 != ((void*)0))
 {
  SetOperationStmt *VAR_11 = (SetOperationStmt *) VAR_5;





  if (VAR_11->op != VAR_2)
  {
   return 0;
  }

  return 1;
 }

 return FUNC_4(VAR_10);
}
