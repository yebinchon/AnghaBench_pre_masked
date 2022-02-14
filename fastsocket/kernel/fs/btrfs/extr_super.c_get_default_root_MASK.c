
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct super_block {TYPE_1__* s_root; } ;
struct inode {int root_item; } ;
struct dentry {int dummy; } ;
struct btrfs_root {int root_item; } ;
struct btrfs_path {int leave_spinning; int * nodes; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;
struct btrfs_fs_info {struct inode* fs_root; int super_copy; struct inode* tree_root; } ;
struct btrfs_dir_item {int root_item; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (int ,struct inode*,struct btrfs_key*) ;
 int FUNC_5 (struct btrfs_path*) ;
 struct inode* FUNC_6 (struct super_block*,struct btrfs_key*,struct inode*,int*) ;
 struct inode* FUNC_7 (int *,struct inode*,struct btrfs_path*,void*,char*,int,int ) ;
 struct inode* FUNC_8 (struct btrfs_fs_info*,struct btrfs_key*) ;
 void* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 struct btrfs_fs_info* FUNC_11 (struct super_block*) ;
 void* FUNC_12 (int ) ;
 struct dentry* FUNC_13 (struct inode*) ;
 struct dentry* FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_16(struct super_block *VAR_5,
           u64 VAR_6)
{
 struct btrfs_fs_info *VAR_7 = FUNC_11(VAR_5);
 struct btrfs_root *VAR_8 = VAR_7->tree_root;
 struct btrfs_root *VAR_9;
 struct btrfs_dir_item *VAR_10;
 struct btrfs_path *VAR_11;
 struct btrfs_key VAR_12;
 struct inode *VAR_13;
 u64 VAR_14;
 int VAR_15 = 0;





 if (VAR_6) {
  VAR_12.objectid = VAR_6;
  VAR_12.type = VAR_2;
  VAR_12.offset = (u64)-1;
  goto find_root;
 }

 VAR_11 = FUNC_3();
 if (!VAR_11)
  return FUNC_1(-VAR_4);
 VAR_11->leave_spinning = 1;






 VAR_14 = FUNC_12(VAR_7->super_copy);
 VAR_10 = FUNC_7(((void*)0), VAR_8, VAR_11, VAR_14, "default", 7, 0);
 if (FUNC_2(VAR_10)) {
  FUNC_5(VAR_11);
  return FUNC_0(VAR_10);
 }
 if (!VAR_10) {





  FUNC_5(VAR_11);
  VAR_14 = VAR_0;
  VAR_9 = VAR_7->fs_root;
  goto setup_root;
 }

 FUNC_4(VAR_11->nodes[0], VAR_10, &VAR_12);
 FUNC_5(VAR_11);

find_root:
 VAR_9 = FUNC_8(VAR_7, &VAR_12);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 if (FUNC_10(&VAR_9->root_item) == 0)
  return FUNC_1(-VAR_3);

 VAR_14 = FUNC_9(&VAR_9->root_item);
setup_root:
 VAR_12.objectid = VAR_14;
 VAR_12.type = VAR_1;
 VAR_12.offset = 0;

 VAR_13 = FUNC_6(VAR_5, &VAR_12, VAR_9, &VAR_15);
 if (FUNC_2(VAR_13))
  return FUNC_0(VAR_13);






 if (!VAR_15 && VAR_5->s_root->d_inode == VAR_13) {
  FUNC_15(VAR_13);
  return FUNC_14(VAR_5->s_root);
 }

 return FUNC_13(VAR_13);
}
