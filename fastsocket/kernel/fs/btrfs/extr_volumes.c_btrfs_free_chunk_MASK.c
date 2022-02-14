
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int type; void* offset; void* objectid; } ;
struct TYPE_2__ {struct btrfs_root* chunk_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

__attribute__((used)) static int FUNC_5(struct btrfs_trans_handle *VAR_3,
       struct btrfs_root *VAR_4,
       u64 VAR_5, u64 VAR_6,
       u64 VAR_7)
{
 int VAR_8;
 struct btrfs_path *VAR_9;
 struct btrfs_key VAR_10;

 VAR_4 = VAR_4->fs_info->chunk_root;
 VAR_9 = FUNC_0();
 if (!VAR_9)
  return -VAR_2;

 VAR_10.objectid = VAR_6;
 VAR_10.offset = VAR_7;
 VAR_10.type = VAR_0;

 VAR_8 = FUNC_4(VAR_3, VAR_4, &VAR_10, VAR_9, -1, 1);
 if (VAR_8 < 0)
  goto out;
 else if (VAR_8 > 0) {
  FUNC_2(VAR_4->fs_info, -VAR_1,
       "Failed lookup while freeing chunk.");
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_9);
 if (VAR_8 < 0)
  FUNC_2(VAR_4->fs_info, VAR_8,
       "Failed to delete chunk item.");
out:
 FUNC_3(VAR_9);
 return VAR_8;
}
