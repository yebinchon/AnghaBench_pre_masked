
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; } ;
struct TYPE_3__ {scalar_t__ objectid; } ;
struct btrfs_root {scalar_t__ last_trans; scalar_t__ commit_root; scalar_t__ node; int in_trans_setup; TYPE_2__* fs_info; TYPE_1__ root_key; scalar_t__ ref_cows; } ;
struct TYPE_4__ {int fs_roots_radix_lock; int fs_roots_radix; struct btrfs_root* extent_root; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_2 (int *,unsigned long,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct btrfs_trans_handle *VAR_1,
          struct btrfs_root *VAR_2)
{
 if (VAR_2->ref_cows && VAR_2->last_trans < VAR_1->transid) {
  FUNC_0(VAR_2 == VAR_2->fs_info->extent_root);
  FUNC_0(VAR_2->commit_root != VAR_2->node);






  VAR_2->in_trans_setup = 1;




  FUNC_3();

  FUNC_4(&VAR_2->fs_info->fs_roots_radix_lock);
  if (VAR_2->last_trans == VAR_1->transid) {
   FUNC_5(&VAR_2->fs_info->fs_roots_radix_lock);
   return 0;
  }
  FUNC_2(&VAR_2->fs_info->fs_roots_radix,
      (unsigned long)VAR_2->root_key.objectid,
      VAR_0);
  FUNC_5(&VAR_2->fs_info->fs_roots_radix_lock);
  VAR_2->last_trans = VAR_1->transid;
  FUNC_1(VAR_1, VAR_2);
  FUNC_3();
  VAR_2->in_trans_setup = 0;
 }
 return 0;
}
