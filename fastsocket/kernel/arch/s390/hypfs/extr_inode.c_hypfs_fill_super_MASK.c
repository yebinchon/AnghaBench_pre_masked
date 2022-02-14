
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; struct hypfs_sb_info* s_fs_info; } ;
struct inode {int * i_fop; int * i_op; } ;
struct hypfs_sb_info {int update_file; int gid; int uid; int lock; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct dentry* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*,struct dentry*) ;
 int FUNC_6 (struct super_block*,struct dentry*) ;
 struct inode* FUNC_7 (struct super_block*,int) ;
 scalar_t__ FUNC_8 (void*,struct super_block*) ;
 int VAR_8 ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,struct dentry*) ;
 int FUNC_11 (struct inode*) ;
 struct hypfs_sb_info* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_11, void *VAR_12, int VAR_13)
{
 struct inode *VAR_14;
 struct dentry *VAR_15;
 int VAR_16 = 0;
 struct hypfs_sb_info *VAR_17;

 VAR_17 = FUNC_12(sizeof(struct hypfs_sb_info), VAR_2);
 if (!VAR_17)
  return -VAR_1;
 FUNC_13(&VAR_17->lock);
 VAR_17->uid = FUNC_3();
 VAR_17->gid = FUNC_2();
 VAR_11->s_fs_info = VAR_17;
 VAR_11->s_blocksize = VAR_6;
 VAR_11->s_blocksize_bits = VAR_5;
 VAR_11->s_magic = VAR_3;
 VAR_11->s_op = &VAR_8;
 if (FUNC_8(VAR_12, VAR_11))
  return -VAR_0;
 VAR_14 = FUNC_7(VAR_11, VAR_7 | 0755);
 if (!VAR_14)
  return -VAR_1;
 VAR_14->i_op = &VAR_9;
 VAR_14->i_fop = &VAR_10;
 VAR_11->s_root = VAR_15 = FUNC_4(VAR_14);
 if (!VAR_15) {
  FUNC_11(VAR_14);
  return -VAR_1;
 }
 if (VAR_4)
  VAR_16 = FUNC_10(VAR_11, VAR_15);
 else
  VAR_16 = FUNC_6(VAR_11, VAR_15);
 if (VAR_16)
  return VAR_16;
 VAR_17->update_file = FUNC_5(VAR_11, VAR_15);
 if (FUNC_0(VAR_17->update_file))
  return FUNC_1(VAR_17->update_file);
 FUNC_9(VAR_11);
 FUNC_14("Hypervisor filesystem mounted\n");
 return 0;
}
