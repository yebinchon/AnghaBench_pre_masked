
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {struct btrfs_fs_info* super_for_commit; struct btrfs_fs_info* super_copy; struct btrfs_fs_info* csum_root; struct btrfs_fs_info* dev_root; struct btrfs_fs_info* chunk_root; struct btrfs_fs_info* tree_root; struct btrfs_fs_info* extent_root; struct btrfs_fs_info* delayed_root; struct btrfs_fs_info* balance_ctl; } ;


 int FUNC_0 (struct btrfs_fs_info*) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_fs_info *VAR_0)
{
 FUNC_0(VAR_0->balance_ctl);
 FUNC_0(VAR_0->delayed_root);
 FUNC_0(VAR_0->extent_root);
 FUNC_0(VAR_0->tree_root);
 FUNC_0(VAR_0->chunk_root);
 FUNC_0(VAR_0->dev_root);
 FUNC_0(VAR_0->csum_root);
 FUNC_0(VAR_0->super_copy);
 FUNC_0(VAR_0->super_for_commit);
 FUNC_0(VAR_0);
}
