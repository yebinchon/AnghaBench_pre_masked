
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qla_hw_data {int * dfs_dir; int * dfs_fce; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

int
FUNC_3(scsi_qla_host_t *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;
 if (VAR_3->dfs_fce) {
  FUNC_2(VAR_3->dfs_fce);
  VAR_3->dfs_fce = ((void*)0);
 }

 if (VAR_3->dfs_dir) {
  FUNC_2(VAR_3->dfs_dir);
  VAR_3->dfs_dir = ((void*)0);
  FUNC_0(&VAR_1);
 }

 if (FUNC_1(&VAR_1) == 0 &&
     VAR_0) {
  FUNC_2(VAR_0);
  VAR_0 = ((void*)0);
 }

 return 0;
}
