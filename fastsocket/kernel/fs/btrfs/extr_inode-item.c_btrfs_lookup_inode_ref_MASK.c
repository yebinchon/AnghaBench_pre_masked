
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;
struct btrfs_inode_ref {int dummy; } ;


 int VAR_0 ;
 struct btrfs_inode_ref* FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_2 (struct btrfs_path*,char const*,int,struct btrfs_inode_ref**) ;

struct btrfs_inode_ref *
FUNC_3(struct btrfs_trans_handle *VAR_1,
   struct btrfs_root *VAR_2,
   struct btrfs_path *VAR_3,
   const char *VAR_4, int VAR_5,
   u64 VAR_6, u64 VAR_7, int VAR_8)
{
 struct btrfs_key VAR_9;
 struct btrfs_inode_ref *VAR_10;
 int VAR_11 = VAR_8 < 0 ? -1 : 0;
 int VAR_12 = VAR_8 != 0;
 int VAR_13;

 VAR_9.objectid = VAR_6;
 VAR_9.type = VAR_0;
 VAR_9.offset = VAR_7;

 VAR_13 = FUNC_1(VAR_1, VAR_2, &VAR_9, VAR_3, VAR_11, VAR_12);
 if (VAR_13 < 0)
  return FUNC_0(VAR_13);
 if (VAR_13 > 0)
  return ((void*)0);
 if (!FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_10))
  return ((void*)0);
 return VAR_10;
}
