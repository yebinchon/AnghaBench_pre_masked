
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_1__* completion_ops; int refcnt; int rpc_list; } ;
struct nfs_write_header {struct nfs_pgio_header header; } ;
struct nfs_pageio_descriptor {int pg_ioflags; int pg_rpc_callops; int pg_list; TYPE_2__* pg_completion_ops; } ;
struct TYPE_4__ {int (* error_cleanup ) (int *) ;} ;
struct TYPE_3__ {int (* completion ) (struct nfs_pgio_header*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*,int ) ;
 struct nfs_write_header* FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfs_pgio_header*) ;

__attribute__((used)) static int FUNC_8(struct nfs_pageio_descriptor *VAR_2)
{
 struct nfs_write_header *VAR_3;
 struct nfs_pgio_header *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_5();
 if (!VAR_3) {
  VAR_2->pg_completion_ops->error_cleanup(&VAR_2->pg_list);
  return -VAR_0;
 }
 VAR_4 = &VAR_3->header;
 FUNC_4(VAR_2, VAR_4, VAR_1);
 FUNC_1(&VAR_4->refcnt);
 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(&VAR_4->rpc_list,
          VAR_2->pg_rpc_callops,
          VAR_2->pg_ioflags);
 if (FUNC_0(&VAR_4->refcnt))
  VAR_4->completion_ops->completion(VAR_4);
 return VAR_5;
}
