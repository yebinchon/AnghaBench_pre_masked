
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; int func; } ;
struct end_io_wq {int error; int metadata; TYPE_1__ work; struct btrfs_fs_info* info; } ;
struct btrfs_fs_info {int endio_workers; int endio_meta_workers; int endio_write_workers; int endio_freespace_worker; int endio_meta_write_workers; } ;
struct bio {int bi_rw; struct end_io_wq* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_2, int VAR_3)
{
 struct end_io_wq *VAR_4 = VAR_2->bi_private;
 struct btrfs_fs_info *VAR_5;

 VAR_5 = VAR_4->info;
 VAR_4->error = VAR_3;
 VAR_4->work.func = VAR_1;
 VAR_4->work.flags = 0;

 if (VAR_2->bi_rw & VAR_0) {
  if (VAR_4->metadata == 1)
   FUNC_0(&VAR_5->endio_meta_write_workers,
        &VAR_4->work);
  else if (VAR_4->metadata == 2)
   FUNC_0(&VAR_5->endio_freespace_worker,
        &VAR_4->work);
  else
   FUNC_0(&VAR_5->endio_write_workers,
        &VAR_4->work);
 } else {
  if (VAR_4->metadata)
   FUNC_0(&VAR_5->endio_meta_workers,
        &VAR_4->work);
  else
   FUNC_0(&VAR_5->endio_workers,
        &VAR_4->work);
 }
}
