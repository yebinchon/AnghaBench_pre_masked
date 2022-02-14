
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int mpi_reset_work; int workqueue; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ql_adapter *VAR_2)
{
 if (!FUNC_2(VAR_2)) {
  FUNC_0(VAR_2, VAR_0, VAR_2->ndev, "Don't own firmware!\n");
  return;
 }

 if (!FUNC_1(VAR_2->ndev)) {
  FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
     "Force Coredump can only be done from interface that is up.\n");
  return;
 }

 FUNC_3(VAR_2->workqueue, &VAR_2->mpi_reset_work, 0);
}
