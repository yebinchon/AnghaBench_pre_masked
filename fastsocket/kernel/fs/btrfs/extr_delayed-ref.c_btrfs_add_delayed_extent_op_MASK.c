
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_delayed_ref_root {int lock; int seq_wait; } ;
struct btrfs_delayed_ref_head {int node; struct btrfs_delayed_extent_op* extent_op; } ;
struct btrfs_delayed_extent_op {int is_data; } ;
struct TYPE_2__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_trans_handle*,int *,int ,int ,int ,int ) ;
 struct btrfs_delayed_ref_head* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct btrfs_fs_info *VAR_3,
    struct btrfs_trans_handle *VAR_4,
    u64 VAR_5, u64 VAR_6,
    struct btrfs_delayed_extent_op *VAR_7)
{
 struct btrfs_delayed_ref_head *VAR_8;
 struct btrfs_delayed_ref_root *VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->extent_op = VAR_7;

 VAR_9 = &VAR_4->transaction->delayed_refs;
 FUNC_2(&VAR_9->lock);

 FUNC_0(VAR_3, VAR_4, &VAR_8->node, VAR_5,
       VAR_6, VAR_0,
       VAR_7->is_data);

 if (FUNC_4(&VAR_9->seq_wait))
  FUNC_5(&VAR_9->seq_wait);
 FUNC_3(&VAR_9->lock);
 return 0;
}
