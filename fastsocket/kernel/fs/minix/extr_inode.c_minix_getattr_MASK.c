
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct super_block {int s_blocksize; } ;
struct kstat {int blocks; int blksize; int size; } ;
struct inode {struct super_block* i_sb; } ;
struct dentry {int d_inode; TYPE_1__* d_parent; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct super_block*) ;
 int FUNC_2 (int ,struct super_block*) ;
 int FUNC_3 (int ,struct kstat*) ;

int FUNC_4(struct vfsmount *VAR_2, struct dentry *VAR_3, struct kstat *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_parent->d_inode;
 struct super_block *VAR_6 = VAR_5->i_sb;
 FUNC_3(VAR_3->d_inode, VAR_4);
 if (FUNC_0(VAR_3->d_inode) == VAR_1)
  VAR_4->blocks = (VAR_0 / 512) * FUNC_1(VAR_4->size, VAR_6);
 else
  VAR_4->blocks = (VAR_6->s_blocksize / 512) * FUNC_2(VAR_4->size, VAR_6);
 VAR_4->blksize = VAR_6->s_blocksize;
 return 0;
}
