
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_params {int out_count; } ;
struct ql_adapter {int mpi_idc_work; int workqueue; int ndev; struct mbox_params idc_mbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (struct ql_adapter*,int ,int) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_3)
{
 int VAR_4;
 struct mbox_params *VAR_5 = &VAR_3->idc_mbc;

 FUNC_0(VAR_3, VAR_2, VAR_3->ndev, "Enter!\n");



 VAR_5 = &VAR_3->idc_mbc;
 VAR_5->out_count = 4;
 VAR_4 = FUNC_1(VAR_3, VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_2, VAR_3->ndev,
     "Could not read MPI, resetting ASIC!\n");
  FUNC_2(VAR_3);
 } else {




  FUNC_3(VAR_3, VAR_0, (VAR_1 << 16));
  FUNC_4(VAR_3->workqueue, &VAR_3->mpi_idc_work, 0);
 }
 return VAR_4;
}
