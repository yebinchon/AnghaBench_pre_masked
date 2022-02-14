
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {int cur_page_fs_offset; int logical_offset_in_bio; struct bio* bio; } ;
struct dio {scalar_t__ is_async; } ;
struct block_device {int dummy; } ;
struct bio {int bi_end_io; int bi_sector; struct block_device* bi_bdev; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_1(struct dio *VAR_3, struct dio_submit *VAR_4,
       struct block_device *VAR_5,
       sector_t VAR_6, int VAR_7)
{
 struct bio *VAR_8;





 VAR_8 = FUNC_0(VAR_0, VAR_7);

 VAR_8->bi_bdev = VAR_5;
 VAR_8->bi_sector = VAR_6;
 if (VAR_3->is_async)
  VAR_8->bi_end_io = VAR_1;
 else
  VAR_8->bi_end_io = VAR_2;

 VAR_4->bio = VAR_8;
 VAR_4->logical_offset_in_bio = VAR_4->cur_page_fs_offset;
}
