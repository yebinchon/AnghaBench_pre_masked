
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_item {int dummy; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,unsigned long) ;

int FUNC_2(struct btrfs_trans_handle *VAR_0,
       struct btrfs_root *VAR_1,
       struct btrfs_path *VAR_2,
       struct btrfs_key *VAR_3,
       unsigned long VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2,
       sizeof(struct btrfs_item));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
