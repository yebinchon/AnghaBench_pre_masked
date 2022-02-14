
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_pageio_descriptor {TYPE_1__* pg_ops; } ;
struct nfs_page {scalar_t__ wb_pgbase; scalar_t__ wb_bytes; int wb_lock_context; TYPE_4__* wb_context; } ;
struct TYPE_9__ {TYPE_2__* dentry; } ;
struct TYPE_8__ {int * i_flock; } ;
struct TYPE_7__ {TYPE_3__* d_inode; } ;
struct TYPE_6__ {int (* pg_test ) (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;

__attribute__((used)) static bool FUNC_4(struct nfs_page *VAR_1,
          struct nfs_page *VAR_2,
          struct nfs_pageio_descriptor *VAR_3)
{
 if (!FUNC_1(VAR_2->wb_context, VAR_1->wb_context))
  return 0;
 if (VAR_2->wb_context->dentry->d_inode->i_flock != ((void*)0) &&
     !FUNC_0(VAR_2->wb_lock_context, VAR_1->wb_lock_context))
  return 0;
 if (VAR_2->wb_pgbase != 0)
  return 0;
 if (VAR_1->wb_pgbase + VAR_1->wb_bytes != VAR_0)
  return 0;
 if (FUNC_2(VAR_2) != FUNC_2(VAR_1) + VAR_1->wb_bytes)
  return 0;
 return VAR_3->pg_ops->pg_test(VAR_3, VAR_1, VAR_2);
}
