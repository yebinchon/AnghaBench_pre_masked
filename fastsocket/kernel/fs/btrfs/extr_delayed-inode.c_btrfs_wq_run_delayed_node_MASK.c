
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_delayed_root {int dummy; } ;
struct btrfs_delayed_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ flags; int func; } ;
struct btrfs_async_delayed_node {TYPE_2__ work; struct btrfs_delayed_node* delayed_node; struct btrfs_root* root; } ;
struct TYPE_3__ {int delayed_workers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_delayed_node* FUNC_0 (struct btrfs_delayed_root*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct btrfs_delayed_node*) ;
 struct btrfs_async_delayed_node* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct btrfs_delayed_root *VAR_3,
         struct btrfs_root *VAR_4, int VAR_5)
{
 struct btrfs_async_delayed_node *VAR_6;
 struct btrfs_delayed_node *VAR_7;
 int VAR_8 = 0;

again:
 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7)
  return 0;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_6->root = VAR_4;
 VAR_6->delayed_node = VAR_7;

 VAR_6->work.func = VAR_2;
 VAR_6->work.flags = 0;

 FUNC_1(&VAR_4->fs_info->delayed_workers, &VAR_6->work);
 VAR_8++;

 if (VAR_5 || VAR_8 < 4)
  goto again;

 return 0;
}
