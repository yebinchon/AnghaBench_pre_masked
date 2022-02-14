
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_2__* completion_ops; int refcnt; int rpc_list; int lseg; } ;
struct nfs_write_header {struct nfs_pgio_header header; } ;
struct nfs_pageio_descriptor {int pg_ioflags; int * pg_lseg; int pg_list; TYPE_1__* pg_completion_ops; } ;
struct TYPE_4__ {int (* completion ) (struct nfs_pgio_header*) ;} ;
struct TYPE_3__ {int (* error_cleanup ) (int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*,int ) ;
 struct nfs_write_header* FUNC_5 () ;
 int FUNC_6 (struct nfs_pageio_descriptor*,int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct nfs_pgio_header*) ;

int
FUNC_10(struct nfs_pageio_descriptor *VAR_2)
{
 struct nfs_write_header *VAR_3;
 struct nfs_pgio_header *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_5();
 if (!VAR_3) {
  VAR_2->pg_completion_ops->error_cleanup(&VAR_2->pg_list);
  FUNC_7(VAR_2->pg_lseg);
  VAR_2->pg_lseg = ((void*)0);
  return -VAR_0;
 }
 VAR_4 = &VAR_3->header;
 FUNC_4(VAR_2, VAR_4, VAR_1);
 VAR_4->lseg = FUNC_2(VAR_2->pg_lseg);
 FUNC_1(&VAR_4->refcnt);
 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5 != 0) {
  FUNC_7(VAR_2->pg_lseg);
  VAR_2->pg_lseg = ((void*)0);
 } else
  FUNC_6(VAR_2, &VAR_4->rpc_list, VAR_2->pg_ioflags);
 if (FUNC_0(&VAR_4->refcnt))
  VAR_4->completion_ops->completion(VAR_4);
 return VAR_5;
}
