
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_path {int search_commit_root; } ;
struct btrfs_key {scalar_t__ objectid; } ;
struct btrfs_fs_info {int dummy; } ;
typedef int iterate_extent_inodes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_path*) ;
 int FUNC_1 (struct btrfs_fs_info*,scalar_t__,struct btrfs_path*,struct btrfs_key*) ;
 int FUNC_2 (struct btrfs_fs_info*,scalar_t__,scalar_t__,int,int *,void*) ;

int FUNC_3(u64 VAR_2, struct btrfs_fs_info *VAR_3,
    struct btrfs_path *VAR_4,
    iterate_extent_inodes_t *VAR_5, void *VAR_6)
{
 int VAR_7;
 u64 VAR_8;
 struct btrfs_key VAR_9;
 int VAR_10 = VAR_4->search_commit_root;

 VAR_7 = FUNC_1(VAR_3, VAR_2, VAR_4,
     &VAR_9);
 FUNC_0(VAR_4);
 if (VAR_7 & VAR_0)
  VAR_7 = -VAR_1;
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = VAR_2 - VAR_9.objectid;
 VAR_7 = FUNC_2(VAR_3, VAR_9.objectid,
     VAR_8, VAR_10,
     VAR_5, VAR_6);

 return VAR_7;
}
