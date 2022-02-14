
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ logical; } ;
struct tree_mod_elem {scalar_t__ op; TYPE_1__ old_root; } ;
struct btrfs_root {TYPE_2__* node; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ start; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct tree_mod_elem* FUNC_1 (struct btrfs_fs_info*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct tree_mod_elem *
FUNC_2(struct btrfs_fs_info *VAR_1,
      struct btrfs_root *VAR_2, u64 VAR_3)
{
 struct tree_mod_elem *VAR_4;
 struct tree_mod_elem *VAR_5 = ((void*)0);
 u64 VAR_6 = VAR_2->node->start;
 int VAR_7 = 0;

 if (!VAR_3)
  return 0;






 while (1) {
  VAR_4 = FUNC_1(VAR_1, VAR_6,
      VAR_3);
  if (!VAR_7 && !VAR_4)
   return 0;





  if (!VAR_4)
   break;






  if (VAR_4->op != VAR_0)
   break;

  VAR_5 = VAR_4;
  VAR_6 = VAR_4->old_root.logical;
  FUNC_0(VAR_6 == VAR_2->node->start);
  VAR_7 = 1;
 }


 if (!VAR_5)
  VAR_5 = VAR_4;

 return VAR_5;
}
