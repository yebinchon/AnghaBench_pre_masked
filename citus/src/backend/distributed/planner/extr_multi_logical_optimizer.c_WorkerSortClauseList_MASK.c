
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int canApproximate; int hasOrderByAggregate; scalar_t__ groupedByDisjointPartitionColumn; scalar_t__ groupClauseIsEmpty; int hasDistinctOn; } ;
typedef TYPE_1__ OrderByLimitReference ;
typedef int Node ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static List *
FUNC_2(Node *VAR_1, List *VAR_2, List *VAR_3,
      OrderByLimitReference VAR_4)
{
 List *VAR_5 = VAR_0;


 if (VAR_1 == ((void*)0) && !VAR_4.hasDistinctOn)
 {
  return VAR_0;
 }

 VAR_3 = FUNC_0(VAR_3);
 if (VAR_4.groupClauseIsEmpty ||
  VAR_4.groupedByDisjointPartitionColumn)
 {
  VAR_5 = VAR_3;
 }
 else if (VAR_3 != VAR_0)
 {
  bool VAR_6 = !VAR_4.hasOrderByAggregate;
  bool VAR_7 = VAR_4.canApproximate;

  if (VAR_6)
  {
   VAR_5 = VAR_3;
   VAR_5 = FUNC_1(VAR_5, VAR_2);
  }
  else if (VAR_7)
  {
   VAR_5 = VAR_3;
  }
 }

 return VAR_5;
}
