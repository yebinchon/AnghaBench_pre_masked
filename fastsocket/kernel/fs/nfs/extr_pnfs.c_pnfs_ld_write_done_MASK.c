
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_write_data {int task; struct nfs_pgio_header* header; } ;
struct nfs_pgio_header {TYPE_1__* mds_ops; int pnfs_error; } ;
struct TYPE_2__ {int (* rpc_release ) (struct nfs_write_data*) ;int (* rpc_call_done ) (int *,struct nfs_write_data*) ;} ;


 int FUNC_0 (struct nfs_write_data*) ;
 int FUNC_1 (struct nfs_write_data*) ;
 int FUNC_2 (int *,struct nfs_write_data*) ;
 int FUNC_3 (struct nfs_write_data*) ;

void FUNC_4(struct nfs_write_data *VAR_0)
{
 struct nfs_pgio_header *VAR_1 = VAR_0->header;

 if (!VAR_1->pnfs_error) {
  FUNC_1(VAR_0);
  VAR_1->mds_ops->rpc_call_done(&VAR_0->task, VAR_0);
 } else
  FUNC_0(VAR_0);
 VAR_1->mds_ops->rpc_release(VAR_0);
}
