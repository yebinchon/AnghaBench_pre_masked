
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; int s_root; struct vfsmount* s_fs_info; int * s_op; int s_magic; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct inode*) ;
 struct vfsmount* FUNC_2 (char*,int ,char*,int *) ;
 struct inode* FUNC_3 (struct super_block*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct vfsmount*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_4, void *VAR_5, int VAR_6)
{
 struct inode *VAR_7;
 struct vfsmount *VAR_8;
 int VAR_9 = -VAR_0;

 VAR_8 = FUNC_2("proc", 0, "proc", ((void*)0));
 if (FUNC_0(VAR_8))
  goto out;

 VAR_4->s_blocksize = 1024;
 VAR_4->s_blocksize_bits = 10;
 VAR_4->s_magic = VAR_2;
 VAR_4->s_op = &VAR_3;
 VAR_4->s_fs_info = VAR_8;

 VAR_9 = -VAR_1;
 VAR_7 = FUNC_3(VAR_4, VAR_8->mnt_sb->s_root);
 if (!VAR_7)
  goto out_mntput;

 VAR_4->s_root = FUNC_1(VAR_7);
 if (!VAR_4->s_root)
  goto out_iput;

 return 0;

 out_iput:
 FUNC_4(VAR_7);
 out_mntput:
 FUNC_5(VAR_8);
 out:
 return(VAR_9);
}
