
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_operations {int dummy; } ;
struct super_block {unsigned long s_magic; int s_time_gran; int s_flags; struct dentry* s_root; struct super_operations const* s_op; int s_blocksize_bits; int s_blocksize; int s_maxbytes; } ;
struct qstr {char* name; int len; } ;
struct inode {int i_ino; int i_mode; int i_ctime; int i_mtime; int i_atime; } ;
struct file_system_type {int dummy; } ;
struct dentry {struct dentry* d_parent; struct super_block* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct super_block*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dentry* FUNC_2 (int *,struct qstr*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct super_block*) ;
 int VAR_10 ;
 struct super_block* FUNC_7 (struct file_system_type*,int *,int ,int *) ;
 int FUNC_8 (struct vfsmount*,struct super_block*) ;
 struct super_operations const VAR_11 ;
 int FUNC_9 (char*) ;

int FUNC_10(struct file_system_type *VAR_12, char *VAR_13,
 const struct super_operations *VAR_14, unsigned long VAR_15,
 struct vfsmount *VAR_16)
{
 struct super_block *VAR_17 = FUNC_7(VAR_12, ((void*)0), VAR_10, ((void*)0));
 struct dentry *VAR_18;
 struct inode *VAR_19;
 struct qstr VAR_20 = {.name = VAR_13, .len = FUNC_9(VAR_13)};

 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);

 VAR_17->s_flags = VAR_4;
 VAR_17->s_maxbytes = VAR_2;
 VAR_17->s_blocksize = VAR_6;
 VAR_17->s_blocksize_bits = VAR_5;
 VAR_17->s_magic = VAR_15;
 VAR_17->s_op = VAR_14 ? VAR_14 : &VAR_11;
 VAR_17->s_time_gran = 1;
 VAR_19 = FUNC_6(VAR_17);
 if (!VAR_19)
  goto Enomem;





 VAR_19->i_ino = 1;
 VAR_19->i_mode = VAR_7 | VAR_8 | VAR_9;
 VAR_19->i_atime = VAR_19->i_mtime = VAR_19->i_ctime = VAR_0;
 VAR_18 = FUNC_2(((void*)0), &VAR_20);
 if (!VAR_18) {
  FUNC_5(VAR_19);
  goto Enomem;
 }
 VAR_18->d_sb = VAR_17;
 VAR_18->d_parent = VAR_18;
 FUNC_3(VAR_18, VAR_19);
 VAR_17->s_root = VAR_18;
 VAR_17->s_flags |= VAR_3;
 FUNC_8(VAR_16, VAR_17);
 return 0;

Enomem:
 FUNC_4(VAR_17);
 return -VAR_1;
}
