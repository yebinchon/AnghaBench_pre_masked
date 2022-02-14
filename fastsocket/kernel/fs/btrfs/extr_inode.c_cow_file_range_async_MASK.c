
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_5__ {scalar_t__ flags; int ordered_free; int ordered_func; int func; } ;
struct async_cow {TYPE_2__ work; int extents; scalar_t__ end; scalar_t__ start; struct page* locked_page; struct btrfs_root* root; int inode; } ;
struct TYPE_6__ {int flags; int io_tree; struct btrfs_root* root; } ;
struct TYPE_4__ {int async_delalloc_pages; int async_submit_wait; int async_submit_draining; int delalloc_workers; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (unsigned long,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int ,int,int ,int *,int ) ;
 int FUNC_7 (struct inode*) ;
 struct async_cow* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_8, struct page *VAR_9,
    u64 VAR_10, u64 VAR_11, int *VAR_12,
    unsigned long *VAR_13)
{
 struct async_cow *VAR_14;
 struct btrfs_root *VAR_15 = FUNC_0(VAR_8)->root;
 unsigned long VAR_16;
 u64 VAR_17;
 int VAR_18 = 10 * 1024 * 1042;

 FUNC_6(&FUNC_0(VAR_8)->io_tree, VAR_10, VAR_11, VAR_1,
    1, 0, ((void*)0), VAR_2);
 while (VAR_10 < VAR_11) {
  VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_2);
  FUNC_1(!VAR_14);
  VAR_14->inode = FUNC_7(VAR_8);
  VAR_14->root = VAR_15;
  VAR_14->locked_page = VAR_9;
  VAR_14->start = VAR_10;

  if (FUNC_0(VAR_8)->flags & VAR_0)
   VAR_17 = VAR_11;
  else
   VAR_17 = FUNC_9(VAR_11, VAR_10 + 512 * 1024 - 1);

  VAR_14->end = VAR_17;
  FUNC_2(&VAR_14->extents);

  VAR_14->work.func = VAR_6;
  VAR_14->work.ordered_func = VAR_7;
  VAR_14->work.ordered_free = VAR_5;
  VAR_14->work.flags = 0;

  VAR_16 = (VAR_17 - VAR_10 + VAR_4) >>
   VAR_3;
  FUNC_3(VAR_16, &VAR_15->fs_info->async_delalloc_pages);

  FUNC_5(&VAR_15->fs_info->delalloc_workers,
       &VAR_14->work);

  if (FUNC_4(&VAR_15->fs_info->async_delalloc_pages) > VAR_18) {
   FUNC_10(VAR_15->fs_info->async_submit_wait,
      (FUNC_4(&VAR_15->fs_info->async_delalloc_pages) <
       VAR_18));
  }

  while (FUNC_4(&VAR_15->fs_info->async_submit_draining) &&
        FUNC_4(&VAR_15->fs_info->async_delalloc_pages)) {
   FUNC_10(VAR_15->fs_info->async_submit_wait,
     (FUNC_4(&VAR_15->fs_info->async_delalloc_pages) ==
      0));
  }

  *VAR_13 += VAR_16;
  VAR_10 = VAR_17 + 1;
 }
 *VAR_12 = 1;
 return 0;
}
