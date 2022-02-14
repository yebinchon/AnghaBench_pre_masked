
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {int count; } ;
struct nfs_open_context {TYPE_2__* dentry; int * cred; TYPE_1__ lock_context; int list; } ;
struct inode {int i_lock; } ;
struct TYPE_6__ {int (* close_context ) (struct nfs_open_context*,int) ;} ;
struct TYPE_5__ {struct super_block* d_sb; struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct nfs_open_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nfs_open_context*,int) ;

__attribute__((used)) static void FUNC_12(struct nfs_open_context *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = VAR_0->dentry->d_inode;
 struct super_block *VAR_3 = VAR_0->dentry->d_sb;

 if (!FUNC_6(&VAR_0->list)) {
  if (!FUNC_1(&VAR_0->lock_context.count, &VAR_2->i_lock))
   return;
  FUNC_5(&VAR_0->list);
  FUNC_10(&VAR_2->i_lock);
 } else if (!FUNC_2(&VAR_0->lock_context.count))
  return;
 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2)->close_context(VAR_0, VAR_1);
 if (VAR_0->cred != ((void*)0))
  FUNC_9(VAR_0->cred);
 FUNC_3(VAR_0->dentry);
 if (VAR_1)
  FUNC_7(VAR_3);
 else
  FUNC_8(VAR_3);
 FUNC_4(VAR_0);
}
