
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_ops {int dummy; } ;
struct nfs_pageio_descriptor {size_t pg_bsize; int pg_ioflags; int * pg_dreq; int * pg_lseg; scalar_t__ pg_error; struct nfs_pgio_completion_ops const* pg_completion_ops; struct nfs_pageio_ops const* pg_ops; struct inode* pg_inode; scalar_t__ pg_recoalesce; scalar_t__ pg_moreio; scalar_t__ pg_base; scalar_t__ pg_count; scalar_t__ pg_bytes_written; int pg_list; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct nfs_pageio_descriptor *VAR_0,
       struct inode *VAR_1,
       const struct nfs_pageio_ops *VAR_2,
       const struct nfs_pgio_completion_ops *VAR_3,
       size_t VAR_4,
       int VAR_5)
{
 FUNC_0(&VAR_0->pg_list);
 VAR_0->pg_bytes_written = 0;
 VAR_0->pg_count = 0;
 VAR_0->pg_bsize = VAR_4;
 VAR_0->pg_base = 0;
 VAR_0->pg_moreio = 0;
 VAR_0->pg_recoalesce = 0;
 VAR_0->pg_inode = VAR_1;
 VAR_0->pg_ops = VAR_2;
 VAR_0->pg_completion_ops = VAR_3;
 VAR_0->pg_ioflags = VAR_5;
 VAR_0->pg_error = 0;
 VAR_0->pg_lseg = ((void*)0);
 VAR_0->pg_dreq = ((void*)0);
}
