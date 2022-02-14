
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {int blksize; } ;
struct inode {int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int cluster_size; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;

int FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1, struct kstat *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 FUNC_1(VAR_3, VAR_2);
 VAR_2->blksize = FUNC_0(VAR_3->i_sb)->cluster_size;
 return 0;
}
