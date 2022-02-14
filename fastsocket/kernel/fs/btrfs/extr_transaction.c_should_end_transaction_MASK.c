
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {int global_block_rsv; } ;


 int FUNC_0 (struct btrfs_root*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct btrfs_trans_handle *VAR_0,
      struct btrfs_root *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->fs_info->global_block_rsv, 5);
 return VAR_2 ? 1 : 0;
}
