
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_state {int state; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_2__* fs_info; TYPE_1__ root_key; } ;
struct TYPE_6__ {scalar_t__ delalloc_bytes; int delalloc_inodes; int lock; int outstanding_extents; struct btrfs_root* root; } ;
struct TYPE_5__ {int delalloc_lock; int delalloc_bytes; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,scalar_t__) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct btrfs_root*,struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_4,
     struct extent_state *VAR_5, int *VAR_6)
{





 if ((VAR_5->state & VAR_1) && (*VAR_6 & VAR_1)) {
  struct btrfs_root *VAR_7 = FUNC_0(VAR_4)->root;
  u64 VAR_8 = VAR_5->end + 1 - VAR_5->start;
  bool VAR_9 = !FUNC_3(VAR_7, VAR_4);

  if (*VAR_6 & VAR_3) {
   *VAR_6 &= ~VAR_3;
  } else if (!(*VAR_6 & VAR_2)) {
   FUNC_6(&FUNC_0(VAR_4)->lock);
   FUNC_0(VAR_4)->outstanding_extents--;
   FUNC_7(&FUNC_0(VAR_4)->lock);
  }

  if (*VAR_6 & VAR_2)
   FUNC_1(VAR_4, VAR_8);

  if (VAR_7->root_key.objectid != VAR_0
      && VAR_9)
   FUNC_2(VAR_4, VAR_8);

  FUNC_6(&VAR_7->fs_info->delalloc_lock);
  VAR_7->fs_info->delalloc_bytes -= VAR_8;
  FUNC_0(VAR_4)->delalloc_bytes -= VAR_8;

  if (VAR_9 && FUNC_0(VAR_4)->delalloc_bytes == 0 &&
      !FUNC_5(&FUNC_0(VAR_4)->delalloc_inodes)) {
   FUNC_4(&FUNC_0(VAR_4)->delalloc_inodes);
  }
  FUNC_7(&VAR_7->fs_info->delalloc_lock);
 }
}
