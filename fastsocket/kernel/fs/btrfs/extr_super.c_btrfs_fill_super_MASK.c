
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; int s_flags; struct dentry* s_root; int s_xattr; int * s_export_op; int * s_op; int s_magic; int s_maxbytes; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct btrfs_key {scalar_t__ offset; int type; int objectid; } ;
struct btrfs_fs_info {int tree_root; int fs_root; } ;
struct btrfs_fs_devices {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inode*) ;
 int VAR_8 ;
 struct inode* FUNC_2 (struct super_block*,struct btrfs_key*,int ,int *) ;
 struct btrfs_fs_info* FUNC_3 (struct super_block*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 struct dentry* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct super_block*,struct btrfs_fs_devices*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct super_block*,void*) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_11,
       struct btrfs_fs_devices *VAR_12,
       void *VAR_13, int VAR_14)
{
 struct inode *VAR_15;
 struct dentry *VAR_16;
 struct btrfs_fs_info *VAR_17 = FUNC_3(VAR_11);
 struct btrfs_key VAR_18;
 int VAR_19;

 VAR_11->s_maxbytes = VAR_4;
 VAR_11->s_magic = VAR_2;
 VAR_11->s_op = &VAR_9;
 VAR_11->s_export_op = &VAR_8;
 VAR_11->s_xattr = VAR_10;
 VAR_11->s_time_gran = 1;



 VAR_11->s_flags |= VAR_6;
 VAR_19 = FUNC_7(VAR_11, VAR_12, (char *)VAR_13);
 if (VAR_19) {
  FUNC_8("btrfs: open_ctree failed\n");
  return VAR_19;
 }

 VAR_18.objectid = VAR_0;
 VAR_18.type = VAR_1;
 VAR_18.offset = 0;
 VAR_15 = FUNC_2(VAR_11, &VAR_18, VAR_17->fs_root, ((void*)0));
 if (FUNC_0(VAR_15)) {
  VAR_19 = FUNC_1(VAR_15);
  goto fail_close;
 }

 VAR_16 = FUNC_5(VAR_15);
 if (!VAR_16) {
  FUNC_6(VAR_15);
  VAR_19 = -VAR_3;
  goto fail_close;
 }

 VAR_11->s_root = VAR_16;

 FUNC_9(VAR_11, VAR_13);
 VAR_11->s_flags |= VAR_5;
 return 0;

fail_close:
 FUNC_4(VAR_17->tree_root);
 return VAR_19;
}
