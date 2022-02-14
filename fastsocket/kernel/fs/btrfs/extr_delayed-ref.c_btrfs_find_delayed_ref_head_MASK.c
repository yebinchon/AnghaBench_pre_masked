
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_delayed_ref_root {int root; } ;
struct btrfs_delayed_ref_node {int dummy; } ;
struct btrfs_delayed_ref_head {int dummy; } ;
struct TYPE_2__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 struct btrfs_delayed_ref_head* FUNC_0 (struct btrfs_delayed_ref_node*) ;
 struct btrfs_delayed_ref_node* FUNC_1 (int *,int ,int *,int ) ;

struct btrfs_delayed_ref_head *
FUNC_2(struct btrfs_trans_handle *VAR_0, u64 VAR_1)
{
 struct btrfs_delayed_ref_node *VAR_2;
 struct btrfs_delayed_ref_root *VAR_3;

 VAR_3 = &VAR_0->transaction->delayed_refs;
 VAR_2 = FUNC_1(&VAR_3->root, VAR_1, ((void*)0), 0);
 if (VAR_2)
  return FUNC_0(VAR_2);
 return ((void*)0);
}
