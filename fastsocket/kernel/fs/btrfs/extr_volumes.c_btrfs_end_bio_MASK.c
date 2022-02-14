
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_device {scalar_t__ bdev; } ;
struct btrfs_bio {unsigned int num_stripes; scalar_t__ max_errors; int error; scalar_t__ mirror_num; int end_io; int private; struct bio* orig_bio; int stripes_pending; TYPE_1__* stripes; } ;
struct block_device {int dummy; } ;
struct bio {int bi_rw; int bi_flags; struct block_device* bi_bdev; int bi_end_io; int bi_private; } ;
struct TYPE_2__ {struct btrfs_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct bio*,int) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct btrfs_device*,int ) ;
 int FUNC_7 (struct btrfs_device*) ;
 struct btrfs_bio* FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (struct btrfs_bio*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct bio *VAR_8, int VAR_9)
{
 struct btrfs_bio *VAR_10 = FUNC_8(VAR_8->bi_private);
 int VAR_11 = 0;

 if (VAR_9) {
  FUNC_2(&VAR_10->error);
  if (VAR_9 == -VAR_4 || VAR_9 == -VAR_5) {
   unsigned int VAR_12 =
    FUNC_9(
     VAR_8->bi_private);
   struct btrfs_device *VAR_13;

   FUNC_0(VAR_12 >= VAR_10->num_stripes);
   VAR_13 = VAR_10->stripes[VAR_12].dev;
   if (VAR_13->bdev) {
    if (VAR_8->bi_rw & VAR_6)
     FUNC_6(VAR_13,
      VAR_3);
    else
     FUNC_6(VAR_13,
      VAR_2);
    if ((VAR_8->bi_rw & VAR_7) == VAR_7)
     FUNC_6(VAR_13,
      VAR_1);
    FUNC_7(VAR_13);
   }
  }
 }

 if (VAR_8 == VAR_10->orig_bio)
  VAR_11 = 1;

 if (FUNC_1(&VAR_10->stripes_pending)) {
  if (!VAR_11) {
   FUNC_5(VAR_8);
   VAR_8 = VAR_10->orig_bio;
  }
  VAR_8->bi_private = VAR_10->private;
  VAR_8->bi_end_io = VAR_10->end_io;
  VAR_8->bi_bdev = (struct block_device *)
     (unsigned long)VAR_10->mirror_num;



  if (FUNC_3(&VAR_10->error) > VAR_10->max_errors) {
   VAR_9 = -VAR_4;
  } else {




   FUNC_11(VAR_0, &VAR_8->bi_flags);
   VAR_9 = 0;
  }
  FUNC_10(VAR_10);

  FUNC_4(VAR_8, VAR_9);
 } else if (!VAR_11) {
  FUNC_5(VAR_8);
 }
}
