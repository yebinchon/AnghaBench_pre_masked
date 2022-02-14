
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int offset; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_4 (struct btrfs_key*,int ) ;

int FUNC_5(struct btrfs_trans_handle *VAR_4,
     struct btrfs_root *VAR_5, u64 VAR_6)
{
 struct btrfs_path *VAR_7;
 struct btrfs_key VAR_8;
 int VAR_9 = 0;

 VAR_8.objectid = VAR_1;
 FUNC_4(&VAR_8, VAR_0);
 VAR_8.offset = VAR_6;

 VAR_7 = FUNC_0();
 if (!VAR_7)
  return -VAR_3;

 VAR_9 = FUNC_3(VAR_4, VAR_5, &VAR_8, VAR_7, -1, 1);
 if (VAR_9 < 0)
  goto out;
 if (VAR_9) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_7);

out:
 FUNC_2(VAR_7);
 return VAR_9;
}
