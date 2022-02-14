
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct end_io_wq {int metadata; struct bio* bio; scalar_t__ error; struct btrfs_fs_info* info; int end_io; struct end_io_wq* private; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {int bi_end_io; struct end_io_wq* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct end_io_wq* FUNC_0 (int,int ) ;

int FUNC_1(struct btrfs_fs_info *VAR_3, struct bio *VAR_4,
   int VAR_5)
{
 struct end_io_wq *VAR_6;
 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->private = VAR_4->bi_private;
 VAR_6->end_io = VAR_4->bi_end_io;
 VAR_6->info = VAR_3;
 VAR_6->error = 0;
 VAR_6->bio = VAR_4;
 VAR_6->metadata = VAR_5;

 VAR_4->bi_private = VAR_6;
 VAR_4->bi_end_io = VAR_2;
 return 0;
}
