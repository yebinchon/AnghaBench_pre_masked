
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int log_transid; int root_item; int root_key; TYPE_1__* fs_info; } ;
struct TYPE_2__ {int log_root_tree; } ;


 int FUNC_0 (struct btrfs_trans_handle*,int ,int *,int *) ;
 int FUNC_1 (struct btrfs_trans_handle*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0,
      struct btrfs_root *VAR_1)
{
 int VAR_2;

 if (VAR_1->log_transid == 1) {

  VAR_2 = FUNC_0(VAR_0, VAR_1->fs_info->log_root_tree,
    &VAR_1->root_key, &VAR_1->root_item);
 } else {
  VAR_2 = FUNC_1(VAR_0, VAR_1->fs_info->log_root_tree,
    &VAR_1->root_key, &VAR_1->root_item);
 }
 return VAR_2;
}
