
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int dfs_fce; void* dfs_dir; int fce_mutex; int fce; } ;
struct TYPE_5__ {int host_str; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int ,void*,TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_1__*,int,char*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

int
FUNC_9(scsi_qla_host_t *VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_6->hw;

 if (!FUNC_0(VAR_7) && !FUNC_1(VAR_7) && !FUNC_2(VAR_7))
  goto out;
 if (!VAR_7->fce)
  goto out;

 if (VAR_4)
  goto create_dir;

 FUNC_4(&VAR_5, 0);
 VAR_4 = FUNC_5(VAR_0, ((void*)0));
 if (!VAR_4) {
  FUNC_8(VAR_3, VAR_6, 0x00f7,
      "Unable to create debugfs root directory.\n");
  goto out;
 }

create_dir:
 if (VAR_7->dfs_dir)
  goto create_nodes;

 FUNC_7(&VAR_7->fce_mutex);
 VAR_7->dfs_dir = FUNC_5(VAR_6->host_str, VAR_4);
 if (!VAR_7->dfs_dir) {
  FUNC_8(VAR_3, VAR_6, 0x00f8,
      "Unable to create debugfs ha directory.\n");
  goto out;
 }

 FUNC_3(&VAR_5);

create_nodes:
 VAR_7->dfs_fce = FUNC_6("fce", VAR_1, VAR_7->dfs_dir, VAR_6,
     &VAR_2);
 if (!VAR_7->dfs_fce) {
  FUNC_8(VAR_3, VAR_6, 0x00f9,
      "Unable to create debugfs fce node.\n");
  goto out;
 }
out:
 return 0;
}
