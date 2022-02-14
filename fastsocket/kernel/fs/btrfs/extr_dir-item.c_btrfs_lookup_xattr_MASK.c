
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int offset; int objectid; } ;
struct btrfs_dir_item {int dummy; } ;


 int VAR_0 ;
 struct btrfs_dir_item* FUNC_0 (int) ;
 struct btrfs_dir_item* FUNC_1 (struct btrfs_root*,struct btrfs_path*,char const*,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_4 (struct btrfs_key*,int ) ;

struct btrfs_dir_item *FUNC_5(struct btrfs_trans_handle *VAR_1,
       struct btrfs_root *VAR_2,
       struct btrfs_path *VAR_3, u64 VAR_4,
       const char *VAR_5, u16 VAR_6,
       int VAR_7)
{
 int VAR_8;
 struct btrfs_key VAR_9;
 int VAR_10 = VAR_7 < 0 ? -1 : 0;
 int VAR_11 = VAR_7 != 0;

 VAR_9.objectid = VAR_4;
 FUNC_4(&VAR_9, VAR_0);
 VAR_9.offset = FUNC_2(VAR_5, VAR_6);
 VAR_8 = FUNC_3(VAR_1, VAR_2, &VAR_9, VAR_3, VAR_10, VAR_11);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);
 if (VAR_8 > 0)
  return ((void*)0);

 return FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);
}
