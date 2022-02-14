
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_5__ {scalar_t__ flags; int func; } ;
struct btrfs_ordered_extent {TYPE_2__ work; } ;
struct btrfs_dio_private {scalar_t__ logical_offset; scalar_t__ bytes; struct btrfs_dio_private* private; struct inode* inode; } ;
struct bio {int bi_flags; struct btrfs_dio_private* bi_private; } ;
struct TYPE_6__ {struct btrfs_root* root; } ;
struct TYPE_4__ {int endio_write_workers; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct btrfs_ordered_extent**,scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct bio*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct btrfs_dio_private*) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_2, int VAR_3)
{
 struct btrfs_dio_private *VAR_4 = VAR_2->bi_private;
 struct inode *VAR_5 = VAR_4->inode;
 struct btrfs_root *VAR_6 = FUNC_0(VAR_5)->root;
 struct btrfs_ordered_extent *VAR_7 = ((void*)0);
 u64 VAR_8 = VAR_4->logical_offset;
 u64 VAR_9 = VAR_4->bytes;
 int VAR_10;

 if (VAR_3)
  goto out_done;
again:
 VAR_10 = FUNC_1(VAR_5, &VAR_7,
         &VAR_8,
         VAR_9, !VAR_3);
 if (!VAR_10)
  goto out_test;

 VAR_7->work.func = VAR_1;
 VAR_7->work.flags = 0;
 FUNC_2(&VAR_6->fs_info->endio_write_workers,
      &VAR_7->work);
out_test:




 if (VAR_8 < VAR_4->logical_offset + VAR_4->bytes) {
  VAR_9 = VAR_4->logical_offset + VAR_4->bytes -
   VAR_8;
  VAR_7 = ((void*)0);
  goto again;
 }
out_done:
 VAR_2->bi_private = VAR_4->private;

 FUNC_5(VAR_4);


 if (VAR_3)
  FUNC_3(VAR_0, &VAR_2->bi_flags);
 FUNC_4(VAR_2, VAR_3);
}
