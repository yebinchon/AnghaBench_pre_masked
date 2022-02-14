
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_delayed_tree_ref {int node; } ;
struct btrfs_delayed_ref_root {int lock; int seq_wait; } ;
struct btrfs_delayed_ref_head {int node; struct btrfs_delayed_extent_op* extent_op; } ;
struct btrfs_delayed_extent_op {scalar_t__ is_data; } ;
struct TYPE_2__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_trans_handle*,int *,int ,int ,int,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,struct btrfs_trans_handle*,int *,int ,int ,int ,int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_delayed_tree_ref*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct btrfs_fs_info *VAR_2,
          struct btrfs_trans_handle *VAR_3,
          u64 VAR_4, u64 VAR_5, u64 VAR_6,
          u64 VAR_7, int VAR_8, int VAR_9,
          struct btrfs_delayed_extent_op *VAR_10,
          int VAR_11)
{
 struct btrfs_delayed_tree_ref *VAR_12;
 struct btrfs_delayed_ref_head *VAR_13;
 struct btrfs_delayed_ref_root *VAR_14;

 FUNC_0(VAR_10 && VAR_10->is_data);
 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13) {
  FUNC_4(VAR_12);
  return -VAR_0;
 }

 VAR_13->extent_op = VAR_10;

 VAR_14 = &VAR_3->transaction->delayed_refs;
 FUNC_6(&VAR_14->lock);





 FUNC_1(VAR_2, VAR_3, &VAR_13->node, VAR_4,
       VAR_5, VAR_9, 0);

 FUNC_2(VAR_2, VAR_3, &VAR_12->node, VAR_4,
       VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_11);
 if (!FUNC_3(VAR_7) &&
     FUNC_8(&VAR_14->seq_wait))
  FUNC_9(&VAR_14->seq_wait);
 FUNC_7(&VAR_14->lock);

 return 0;
}
