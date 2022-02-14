
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int groupedByDisjointPartitionColumn; int hasDistinctOn; int groupClauseIsEmpty; int sortClauseIsEmpty; int hasOrderByAggregate; int canApproximate; } ;
typedef TYPE_1__ OrderByLimitReference ;
typedef int List ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_0 ;

__attribute__((used)) static OrderByLimitReference
FUNC_2(bool VAR_1, bool VAR_2,
         List *VAR_3, List *VAR_4, List *VAR_5)
{
 OrderByLimitReference VAR_6;

 VAR_6.groupedByDisjointPartitionColumn =
  VAR_2;
 VAR_6.hasDistinctOn = VAR_1;
 VAR_6.groupClauseIsEmpty = (VAR_3 == VAR_0);
 VAR_6.sortClauseIsEmpty = (VAR_4 == VAR_0);
 VAR_6.canApproximate =
  FUNC_0(VAR_4, VAR_5);
 VAR_6.hasOrderByAggregate =
  FUNC_1(VAR_4, VAR_5);

 return VAR_6;
}
