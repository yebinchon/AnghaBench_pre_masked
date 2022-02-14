
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int Tuplestorestate ;
typedef int TupleDesc ;
struct TYPE_6__ {int rowsProcessed; } ;
typedef int RowModifyLevel ;
typedef int * ParamListInfo ;
typedef int List ;
typedef TYPE_1__ DistributedExecution ;


 TYPE_1__* FUNC_0 (int ,int *,int,int *,int ,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;

uint64
FUNC_5(RowModifyLevel VAR_2, List *VAR_3,
      TupleDesc VAR_4, Tuplestorestate *VAR_5,
      bool VAR_6, int VAR_7)
{
 DistributedExecution *VAR_8 = ((void*)0);
 ParamListInfo VAR_9 = ((void*)0);





 FUNC_1();

 if (VAR_0 == VAR_1)
 {
  VAR_7 = 1;
 }

 VAR_8 =
  FUNC_0(VAR_2, VAR_3, VAR_6, VAR_9,
           VAR_4, VAR_5, VAR_7);

 FUNC_4(VAR_8);
 FUNC_3(VAR_8);
 FUNC_2(VAR_8);

 return VAR_8->rowsProcessed;
}
