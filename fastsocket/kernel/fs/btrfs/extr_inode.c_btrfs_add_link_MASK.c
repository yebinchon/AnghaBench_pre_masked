
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_ctime; int i_mtime; scalar_t__ i_size; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_5__ {int objectid; } ;
struct btrfs_root {TYPE_2__ root_key; TYPE_1__* fs_info; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; } ;
typedef int key ;
struct TYPE_6__ {struct btrfs_root* root; } ;
struct TYPE_4__ {int tree_root; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_2 (struct btrfs_trans_handle*,int ,scalar_t__,int ,scalar_t__,scalar_t__,char const*,int) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,char const*,int,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct btrfs_trans_handle*,int ,scalar_t__,int ,scalar_t__,scalar_t__*,char const*,int) ;
 int FUNC_5 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,char const*,int,struct inode*,struct btrfs_key*,int ,scalar_t__) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,char const*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct btrfs_key*,int ) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct btrfs_key*,TYPE_2__*,int) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct btrfs_trans_handle *VAR_4,
     struct inode *VAR_5, struct inode *VAR_6,
     const char *VAR_7, int VAR_8, int VAR_9, u64 VAR_10)
{
 int VAR_11 = 0;
 struct btrfs_key VAR_12;
 struct btrfs_root *VAR_13 = FUNC_0(VAR_5)->root;
 u64 VAR_14 = FUNC_6(VAR_6);
 u64 VAR_15 = FUNC_6(VAR_5);

 if (FUNC_14(VAR_14 == VAR_0)) {
  FUNC_13(&VAR_12, &FUNC_0(VAR_6)->root->root_key, sizeof(VAR_12));
 } else {
  VAR_12.objectid = VAR_14;
  FUNC_10(&VAR_12, VAR_1);
  VAR_12.offset = 0;
 }

 if (FUNC_14(VAR_14 == VAR_0)) {
  VAR_11 = FUNC_2(VAR_4, VAR_13->fs_info->tree_root,
      VAR_12.objectid, VAR_13->root_key.objectid,
      VAR_15, VAR_10, VAR_7, VAR_8);
 } else if (VAR_9) {
  VAR_11 = FUNC_9(VAR_4, VAR_13, VAR_7, VAR_8, VAR_14,
          VAR_15, VAR_10);
 }


 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_4, VAR_13, VAR_7, VAR_8,
        VAR_5, &VAR_12,
        FUNC_7(VAR_6), VAR_10);
 if (VAR_11 == -VAR_3)
  goto fail_dir_item;
 else if (VAR_11) {
  FUNC_1(VAR_4, VAR_13, VAR_11);
  return VAR_11;
 }

 FUNC_5(VAR_5, VAR_5->i_size +
      VAR_8 * 2);
 FUNC_12(VAR_5);
 VAR_5->i_mtime = VAR_5->i_ctime = VAR_2;
 VAR_11 = FUNC_11(VAR_4, VAR_13, VAR_5);
 if (VAR_11)
  FUNC_1(VAR_4, VAR_13, VAR_11);
 return VAR_11;

fail_dir_item:
 if (FUNC_14(VAR_14 == VAR_0)) {
  u64 VAR_16;
  int VAR_17;
  VAR_17 = FUNC_4(VAR_4, VAR_13->fs_info->tree_root,
     VAR_12.objectid, VAR_13->root_key.objectid,
     VAR_15, &VAR_16, VAR_7, VAR_8);

 } else if (VAR_9) {
  u64 VAR_18;
  int VAR_19;

  VAR_19 = FUNC_3(VAR_4, VAR_13, VAR_7, VAR_8,
       VAR_14, VAR_15, &VAR_18);
 }
 return VAR_11;
}
