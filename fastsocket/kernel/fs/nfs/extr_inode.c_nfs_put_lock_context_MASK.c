
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_open_context {TYPE_1__* dentry; } ;
struct nfs_lock_context {int list; int count; struct nfs_open_context* open_context; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nfs_lock_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nfs_lock_context *VAR_0)
{
 struct nfs_open_context *VAR_1 = VAR_0->open_context;
 struct inode *VAR_2 = VAR_1->dentry->d_inode;

 if (!FUNC_0(&VAR_0->count, &VAR_2->i_lock))
  return;
 FUNC_2(&VAR_0->list);
 FUNC_3(&VAR_2->i_lock);
 FUNC_1(VAR_0);
}
