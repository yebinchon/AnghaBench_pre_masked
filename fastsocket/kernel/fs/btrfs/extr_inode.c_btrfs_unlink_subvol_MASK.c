
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_ctime; int i_mtime; scalar_t__ i_size; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_2__ root_key; TYPE_1__* fs_info; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_dir_item {int dummy; } ;
struct TYPE_3__ {int tree_root; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_dir_item*) ;
 int FUNC_1 (struct btrfs_dir_item*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 struct btrfs_path* FUNC_4 () ;
 int FUNC_5 (struct btrfs_trans_handle*,int ,scalar_t__,int ,scalar_t__,scalar_t__*,char const*,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,scalar_t__) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_dir_item*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct extent_buffer*,struct btrfs_key*,int ) ;
 struct btrfs_dir_item* FUNC_13 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__,char const*,int,int) ;
 int FUNC_14 (struct btrfs_path*) ;
 struct btrfs_dir_item* FUNC_15 (struct btrfs_root*,struct btrfs_path*,scalar_t__,char const*,int) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_17 (struct inode*) ;

int FUNC_18(struct btrfs_trans_handle *VAR_4,
   struct btrfs_root *VAR_5,
   struct inode *VAR_6, u64 VAR_7,
   const char *VAR_8, int VAR_9)
{
 struct btrfs_path *VAR_10;
 struct extent_buffer *VAR_11;
 struct btrfs_dir_item *VAR_12;
 struct btrfs_key VAR_13;
 u64 VAR_14;
 int VAR_15;
 u64 VAR_16 = FUNC_11(VAR_6);

 VAR_10 = FUNC_4();
 if (!VAR_10)
  return -VAR_3;

 VAR_12 = FUNC_13(VAR_4, VAR_5, VAR_10, VAR_16,
       VAR_8, VAR_9, -1);
 if (FUNC_0(VAR_12)) {
  if (!VAR_12)
   VAR_15 = -VAR_2;
  else
   VAR_15 = FUNC_1(VAR_12);
  goto out;
 }

 VAR_11 = VAR_10->nodes[0];
 FUNC_8(VAR_11, VAR_12, &VAR_13);
 FUNC_2(VAR_13.type != VAR_0 || VAR_13.objectid != VAR_7);
 VAR_15 = FUNC_7(VAR_4, VAR_5, VAR_10, VAR_12);
 if (VAR_15) {
  FUNC_3(VAR_4, VAR_5, VAR_15);
  goto out;
 }
 FUNC_14(VAR_10);

 VAR_15 = FUNC_5(VAR_4, VAR_5->fs_info->tree_root,
     VAR_7, VAR_5->root_key.objectid,
     VAR_16, &VAR_14, VAR_8, VAR_9);
 if (VAR_15 < 0) {
  if (VAR_15 != -VAR_2) {
   FUNC_3(VAR_4, VAR_5, VAR_15);
   goto out;
  }
  VAR_12 = FUNC_15(VAR_5, VAR_10, VAR_16,
       VAR_8, VAR_9);
  if (FUNC_0(VAR_12)) {
   if (!VAR_12)
    VAR_15 = -VAR_2;
   else
    VAR_15 = FUNC_1(VAR_12);
   FUNC_3(VAR_4, VAR_5, VAR_15);
   goto out;
  }

  VAR_11 = VAR_10->nodes[0];
  FUNC_12(VAR_11, &VAR_13, VAR_10->slots[0]);
  FUNC_14(VAR_10);
  VAR_14 = VAR_13.offset;
 }
 FUNC_14(VAR_10);

 VAR_15 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_14);
 if (VAR_15) {
  FUNC_3(VAR_4, VAR_5, VAR_15);
  goto out;
 }

 FUNC_10(VAR_6, VAR_6->i_size - VAR_9 * 2);
 FUNC_17(VAR_6);
 VAR_6->i_mtime = VAR_6->i_ctime = VAR_1;
 VAR_15 = FUNC_16(VAR_4, VAR_5, VAR_6);
 if (VAR_15)
  FUNC_3(VAR_4, VAR_5, VAR_15);
out:
 FUNC_9(VAR_10);
 return VAR_15;
}
