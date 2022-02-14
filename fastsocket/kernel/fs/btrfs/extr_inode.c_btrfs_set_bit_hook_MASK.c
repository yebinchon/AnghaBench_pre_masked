
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_state {int state; scalar_t__ start; scalar_t__ end; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {int delalloc_inodes; int delalloc_bytes; int lock; int outstanding_extents; struct btrfs_root* root; } ;
struct TYPE_3__ {int delalloc_lock; int delalloc_inodes; int delalloc_bytes; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_root*,struct inode*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_2,
          struct extent_state *VAR_3, int *VAR_4)
{






 if (!(VAR_3->state & VAR_0) && (*VAR_4 & VAR_0)) {
  struct btrfs_root *VAR_5 = FUNC_0(VAR_2)->root;
  u64 VAR_6 = VAR_3->end + 1 - VAR_3->start;
  bool VAR_7 = !FUNC_1(VAR_5, VAR_2);

  if (*VAR_4 & VAR_1) {
   *VAR_4 &= ~VAR_1;
  } else {
   FUNC_4(&FUNC_0(VAR_2)->lock);
   FUNC_0(VAR_2)->outstanding_extents++;
   FUNC_5(&FUNC_0(VAR_2)->lock);
  }

  FUNC_4(&VAR_5->fs_info->delalloc_lock);
  FUNC_0(VAR_2)->delalloc_bytes += VAR_6;
  VAR_5->fs_info->delalloc_bytes += VAR_6;
  if (VAR_7 && FUNC_3(&FUNC_0(VAR_2)->delalloc_inodes)) {
   FUNC_2(&FUNC_0(VAR_2)->delalloc_inodes,
          &VAR_5->fs_info->delalloc_inodes);
  }
  FUNC_5(&VAR_5->fs_info->delalloc_lock);
 }
}
