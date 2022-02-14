
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct btrfs_workers {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_7__ {scalar_t__ flags; int func; } ;
struct btrfs_ordered_extent {TYPE_3__ work; } ;
struct TYPE_8__ {struct btrfs_root* root; } ;
struct TYPE_6__ {struct btrfs_workers endio_write_workers; struct btrfs_workers endio_freespace_worker; } ;
struct TYPE_5__ {struct inode* host; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,struct btrfs_ordered_extent**,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct btrfs_root*,struct inode*) ;
 int FUNC_4 (struct btrfs_workers*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_5 (struct page*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_1, u64 VAR_2, u64 VAR_3,
    struct extent_state *VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_1->mapping->host;
 struct btrfs_root *VAR_7 = FUNC_0(VAR_6)->root;
 struct btrfs_ordered_extent *VAR_8 = ((void*)0);
 struct btrfs_workers *VAR_9;

 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5);

 FUNC_1(VAR_1);
 if (!FUNC_2(VAR_6, &VAR_8, VAR_2,
         VAR_3 - VAR_2 + 1, VAR_5))
  return 0;

 VAR_8->work.func = VAR_0;
 VAR_8->work.flags = 0;

 if (FUNC_3(VAR_7, VAR_6))
  VAR_9 = &VAR_7->fs_info->endio_freespace_worker;
 else
  VAR_9 = &VAR_7->fs_info->endio_write_workers;
 FUNC_4(VAR_9, &VAR_8->work);

 return 0;
}
