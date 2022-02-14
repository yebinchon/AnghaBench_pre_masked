
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; } ;


 int FUNC_0 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_path*,int ,int ) ;
 int FUNC_1 (struct btrfs_root*,int *) ;

int FUNC_2(struct btrfs_root *VAR_0,
       struct btrfs_trans_handle *VAR_1,
       struct btrfs_block_group_cache *VAR_2,
       struct btrfs_path *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_1(VAR_0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_5,
      VAR_2->key.objectid);
}
