
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct nfs_open_context {TYPE_2__ lock_context; TYPE_1__* dentry; } ;
struct nfs_lock_context {struct nfs_open_context* open_context; int list; } ;
struct inode {int i_lock; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 struct nfs_lock_context* FUNC_0 (int ) ;
 int VAR_1 ;
 struct nfs_lock_context* FUNC_1 (struct nfs_open_context*) ;
 int FUNC_2 (struct nfs_lock_context*) ;
 struct nfs_lock_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nfs_lock_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct nfs_lock_context *FUNC_8(struct nfs_open_context *VAR_2)
{
 struct nfs_lock_context *VAR_3, *VAR_4 = ((void*)0);
 struct inode *VAR_5 = VAR_2->dentry->d_inode;

 FUNC_6(&VAR_5->i_lock);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_7(&VAR_5->i_lock);
  VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
  if (VAR_4 == ((void*)0))
   return FUNC_0(-VAR_0);
  FUNC_5(VAR_4);
  FUNC_6(&VAR_5->i_lock);
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 == ((void*)0)) {
   FUNC_4(&VAR_4->list, &VAR_2->lock_context.list);
   VAR_4->open_context = VAR_2;
   VAR_3 = VAR_4;
   VAR_4 = ((void*)0);
  }
 }
 FUNC_7(&VAR_5->i_lock);
 FUNC_2(VAR_4);
 return VAR_3;
}
