
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {void* offset; void* objectid; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_1 (struct btrfs_key*,int ) ;

int FUNC_2(struct btrfs_trans_handle *VAR_1,
        struct btrfs_root *VAR_2,
        struct btrfs_path *VAR_3, u64 VAR_4,
        u64 VAR_5, int VAR_6)
{
 int VAR_7;
 struct btrfs_key VAR_8;
 int VAR_9 = VAR_6 < 0 ? -1 : 0;
 int VAR_10 = VAR_6 != 0;

 VAR_8.objectid = VAR_4;
 VAR_8.offset = VAR_5;
 FUNC_1(&VAR_8, VAR_0);
 VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_8, VAR_3, VAR_9, VAR_10);
 return VAR_7;
}
