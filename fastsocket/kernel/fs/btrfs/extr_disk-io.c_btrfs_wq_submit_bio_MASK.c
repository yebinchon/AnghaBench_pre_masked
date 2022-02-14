
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_fs_info {int nr_async_submits; int async_submit_wait; int async_submit_draining; int workers; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {scalar_t__ flags; int ordered_free; int ordered_func; int func; } ;
struct async_submit_bio {int rw; int mirror_num; unsigned long bio_flags; TYPE_1__ work; scalar_t__ error; int bio_offset; int * submit_bio_done; int * submit_bio_start; struct bio* bio; struct inode* inode; } ;
typedef int extent_submit_bio_hook_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct async_submit_bio* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct btrfs_fs_info *VAR_6, struct inode *VAR_7,
   int VAR_8, struct bio *VAR_9, int VAR_10,
   unsigned long VAR_11,
   u64 VAR_12,
   extent_submit_bio_hook_t *VAR_13,
   extent_submit_bio_hook_t *VAR_14)
{
 struct async_submit_bio *VAR_15;

 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->inode = VAR_7;
 VAR_15->rw = VAR_8;
 VAR_15->bio = VAR_9;
 VAR_15->mirror_num = VAR_10;
 VAR_15->submit_bio_start = VAR_13;
 VAR_15->submit_bio_done = VAR_14;

 VAR_15->work.func = VAR_5;
 VAR_15->work.ordered_func = VAR_3;
 VAR_15->work.ordered_free = VAR_4;

 VAR_15->work.flags = 0;
 VAR_15->bio_flags = VAR_11;
 VAR_15->bio_offset = VAR_12;

 VAR_15->error = 0;

 FUNC_0(&VAR_6->nr_async_submits);

 if (VAR_8 & VAR_2)
  FUNC_3(&VAR_15->work);

 FUNC_2(&VAR_6->workers, &VAR_15->work);

 while (FUNC_1(&VAR_6->async_submit_draining) &&
       FUNC_1(&VAR_6->nr_async_submits)) {
  FUNC_5(VAR_6->async_submit_wait,
      (FUNC_1(&VAR_6->nr_async_submits) == 0));
 }

 return 0;
}
