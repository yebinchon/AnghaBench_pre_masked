
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int * block_rsv; int bytes_reserved; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {scalar_t__ enospc_unlink; int trans_block_rsv; int global_block_rsv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_root*,int *,int ) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*) ;

__attribute__((used)) static void FUNC_3(struct btrfs_trans_handle *VAR_0,
          struct btrfs_root *VAR_1)
{
 if (VAR_0->block_rsv == &VAR_1->fs_info->global_block_rsv) {
  FUNC_1(VAR_1, VAR_0->block_rsv,
     VAR_0->bytes_reserved);
  VAR_0->block_rsv = &VAR_1->fs_info->trans_block_rsv;
  FUNC_0(!VAR_1->fs_info->enospc_unlink);
  VAR_1->fs_info->enospc_unlink = 0;
 }
 FUNC_2(VAR_0, VAR_1);
}
