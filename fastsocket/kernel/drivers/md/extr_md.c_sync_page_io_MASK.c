
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct md_rdev {scalar_t__ sb_start; scalar_t__ new_data_offset; scalar_t__ data_offset; TYPE_1__* mddev; scalar_t__ bdev; scalar_t__ meta_bdev; } ;
struct completion {int dummy; } ;
struct bio {int bi_flags; int bi_end_io; struct completion* bi_private; scalar_t__ bi_sector; scalar_t__ bi_bdev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ reshape_position; int reshape_backwards; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_1 (int ,int,TYPE_1__*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct completion*) ;
 int FUNC_4 (int,struct bio*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct completion*) ;

int FUNC_7(struct md_rdev *VAR_6, sector_t VAR_7, int VAR_8,
   struct page *VAR_9, int VAR_10, bool VAR_11)
{
 struct bio *VAR_12 = FUNC_1(VAR_3, 1, VAR_6->mddev);
 struct completion VAR_13;
 int VAR_14;

 VAR_10 |= (1 << VAR_0) | (1 << VAR_1);

 VAR_12->bi_bdev = (VAR_11 && VAR_6->meta_bdev) ?
  VAR_6->meta_bdev : VAR_6->bdev;
 if (VAR_11)
  VAR_12->bi_sector = VAR_7 + VAR_6->sb_start;
 else if (VAR_6->mddev->reshape_position != VAR_4 &&
   (VAR_6->mddev->reshape_backwards ==
    (VAR_7 >= VAR_6->mddev->reshape_position)))
  VAR_12->bi_sector = VAR_7 + VAR_6->new_data_offset;
 else
  VAR_12->bi_sector = VAR_7 + VAR_6->data_offset;
 FUNC_0(VAR_12, VAR_9, VAR_8, 0);
 FUNC_3(&VAR_13);
 VAR_12->bi_private = &VAR_13;
 VAR_12->bi_end_io = VAR_5;
 FUNC_4(VAR_10, VAR_12);
 FUNC_6(&VAR_13);

 VAR_14 = FUNC_5(VAR_2, &VAR_12->bi_flags);
 FUNC_2(VAR_12);
 return VAR_14;
}
