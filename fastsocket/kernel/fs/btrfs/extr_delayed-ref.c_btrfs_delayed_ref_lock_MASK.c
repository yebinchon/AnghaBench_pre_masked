
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_delayed_ref_root {int lock; } ;
struct TYPE_4__ {int in_tree; int refs; } ;
struct btrfs_delayed_ref_head {TYPE_2__ node; int mutex; } ;
struct TYPE_3__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct btrfs_trans_handle *VAR_1,
      struct btrfs_delayed_ref_head *VAR_2)
{
 struct btrfs_delayed_ref_root *VAR_3;

 VAR_3 = &VAR_1->transaction->delayed_refs;
 FUNC_0(&VAR_3->lock);
 if (FUNC_4(&VAR_2->mutex))
  return 0;

 FUNC_1(&VAR_2->node.refs);
 FUNC_7(&VAR_3->lock);

 FUNC_3(&VAR_2->mutex);
 FUNC_6(&VAR_3->lock);
 if (!VAR_2->node.in_tree) {
  FUNC_5(&VAR_2->mutex);
  FUNC_2(&VAR_2->node);
  return -VAR_0;
 }
 FUNC_2(&VAR_2->node);
 return 0;
}
