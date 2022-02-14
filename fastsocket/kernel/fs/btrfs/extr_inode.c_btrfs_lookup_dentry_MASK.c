
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; int * d_op; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; } ;
struct TYPE_9__ {struct btrfs_root* root; } ;
struct TYPE_8__ {int s_flags; } ;
struct TYPE_7__ {int cleanup_work_sem; int subvol_srcu; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_4 (TYPE_3__*,struct btrfs_key*,struct btrfs_root*,int *) ;
 int FUNC_5 (struct inode*,struct dentry*,struct btrfs_key*) ;
 int FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct btrfs_root*,struct inode*,struct dentry*,struct btrfs_key*,struct btrfs_root**) ;
 struct inode* FUNC_9 (TYPE_3__*,struct btrfs_key*,struct btrfs_root*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;

struct inode *FUNC_13(struct inode *VAR_7, struct dentry *VAR_8)
{
 struct inode *VAR_9;
 struct btrfs_root *VAR_10 = FUNC_0(VAR_7)->root;
 struct btrfs_root *VAR_11 = VAR_10;
 struct btrfs_key VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8->d_op = &VAR_6;

 if (VAR_8->d_name.len > VAR_1)
  return FUNC_2(-VAR_3);

 VAR_14 = FUNC_5(VAR_7, VAR_8, &VAR_12);

 if (VAR_14 < 0)
  return FUNC_2(VAR_14);

 if (VAR_12.objectid == 0)
  return ((void*)0);

 if (VAR_12.type == VAR_0) {
  VAR_9 = FUNC_4(VAR_7->i_sb, &VAR_12, VAR_10, ((void*)0));
  return VAR_9;
 }

 FUNC_1(VAR_12.type != VAR_2);

 VAR_13 = FUNC_10(&VAR_10->fs_info->subvol_srcu);
 VAR_14 = FUNC_8(VAR_10, VAR_7, VAR_8,
           &VAR_12, &VAR_11);
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_4)
   VAR_9 = FUNC_2(VAR_14);
  else
   VAR_9 = FUNC_9(VAR_7->i_sb, &VAR_12, VAR_11);
 } else {
  VAR_9 = FUNC_4(VAR_7->i_sb, &VAR_12, VAR_11, ((void*)0));
 }
 FUNC_11(&VAR_10->fs_info->subvol_srcu, VAR_13);

 if (!FUNC_3(VAR_9) && VAR_10 != VAR_11) {
  FUNC_7(&VAR_10->fs_info->cleanup_work_sem);
  if (!(VAR_9->i_sb->s_flags & VAR_5))
   VAR_14 = FUNC_6(VAR_11);
  FUNC_12(&VAR_10->fs_info->cleanup_work_sem);
  if (VAR_14)
   VAR_9 = FUNC_2(VAR_14);
 }

 return VAR_9;
}
