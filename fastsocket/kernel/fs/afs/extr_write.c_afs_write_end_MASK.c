
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int index; } ;
struct file {TYPE_1__* f_dentry; } ;
struct TYPE_4__ {int vnode; int vid; } ;
struct afs_vnode {int writeback_lock; int vfs_inode; TYPE_2__ fid; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_3__ {int d_inode; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct file *VAR_0, struct address_space *VAR_1,
    loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
    struct page *VAR_5, void *VAR_6)
{
 struct afs_vnode *VAR_7 = FUNC_0(VAR_0->f_dentry->d_inode);
 loff_t VAR_8, VAR_9;

 FUNC_3("{%x:%u},{%lx}",
        VAR_7->fid.vid, VAR_7->fid.vnode, VAR_5->index);

 VAR_9 = VAR_2 + VAR_4;

 VAR_8 = FUNC_4(&VAR_7->vfs_inode);
 if (VAR_9 > VAR_8) {
  FUNC_8(&VAR_7->writeback_lock);
  VAR_8 = FUNC_4(&VAR_7->vfs_inode);
  if (VAR_9 > VAR_8)
   FUNC_5(&VAR_7->vfs_inode, VAR_9);
  FUNC_9(&VAR_7->writeback_lock);
 }

 FUNC_7(VAR_5);
 if (FUNC_1(VAR_5))
  FUNC_2("dirtied");
 FUNC_10(VAR_5);
 FUNC_6(VAR_5);

 return VAR_4;
}
