
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int mpi_reset_work; int workqueue; } ;


 int FUNC_0 (struct ql_adapter*) ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct ql_adapter *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->workqueue, &VAR_0->mpi_reset_work, 0);
}
