
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layoutdriver_type {int pg_read_ops; } ;
struct nfs_server {int rsize; struct pnfs_layoutdriver_type* pnfs_curr_ld; } ;
struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct inode {int dummy; } ;


 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct inode*,int ,struct nfs_pgio_completion_ops const*,int ,int ) ;
 int FUNC_2 (struct nfs_pageio_descriptor*,struct inode*,struct nfs_pgio_completion_ops const*) ;

void
FUNC_3(struct nfs_pageio_descriptor *VAR_0, struct inode *VAR_1,
        const struct nfs_pgio_completion_ops *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_1);
 struct pnfs_layoutdriver_type *VAR_4 = VAR_3->pnfs_curr_ld;

 if (VAR_4 == ((void*)0))
  FUNC_2(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_4->pg_read_ops, VAR_2, VAR_3->rsize, 0);
}
