
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_zone {unsigned int dev_start; } ;
struct request_queue {int (* merge_bvec_fn ) (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;struct mddev* queuedata; } ;
struct r0conf {int has_merge_bvec; } ;
struct mddev {unsigned int chunk_sectors; struct r0conf* private; } ;
struct md_rdev {unsigned int data_offset; int bdev; } ;
struct bvec_merge_data {unsigned int bi_sector; int bi_size; int bi_bdev; } ;
struct bio_vec {int bv_len; } ;
typedef unsigned int sector_t ;


 struct request_queue* FUNC_0 (int ) ;
 struct strip_zone* FUNC_1 (struct r0conf*,unsigned int*) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 struct md_rdev* FUNC_4 (struct mddev*,struct strip_zone*,unsigned int,unsigned int*) ;
 int FUNC_5 (int,int ) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (struct request_queue*,struct bvec_merge_data*,struct bio_vec*) ;

__attribute__((used)) static int FUNC_8(struct request_queue *VAR_0,
    struct bvec_merge_data *VAR_1,
    struct bio_vec *VAR_2)
{
 struct mddev *VAR_3 = VAR_0->queuedata;
 struct r0conf *VAR_4 = VAR_3->private;
 sector_t VAR_5 = VAR_1->bi_sector + FUNC_2(VAR_1->bi_bdev);
 sector_t VAR_6 = VAR_5;
 int VAR_7;
 unsigned int VAR_8 = VAR_3->chunk_sectors;
 unsigned int VAR_9 = VAR_1->bi_size >> 9;
 struct strip_zone *VAR_10;
 struct md_rdev *VAR_11;
 struct request_queue *VAR_12;

 if (FUNC_3(VAR_8))
  VAR_7 = (VAR_8 - ((VAR_5 & (VAR_8-1))
      + VAR_9)) << 9;
 else
  VAR_7 = (VAR_8 - (FUNC_6(VAR_5, VAR_8)
      + VAR_9)) << 9;
 if (VAR_7 < 0)
  VAR_7 = 0;
 if (VAR_7 <= VAR_2->bv_len && VAR_9 == 0)
  return VAR_2->bv_len;
 if (VAR_7 < VAR_2->bv_len)

  return VAR_7;
 if (!VAR_4->has_merge_bvec)
  return VAR_7;


 VAR_5 = VAR_6;
 VAR_10 = FUNC_1(VAR_3->private, &VAR_6);
 VAR_11 = FUNC_4(VAR_3, VAR_10, VAR_5, &VAR_6);
 VAR_12 = FUNC_0(VAR_11->bdev);
 if (VAR_12->merge_bvec_fn) {
  VAR_1->bi_bdev = VAR_11->bdev;
  VAR_1->bi_sector = VAR_6 + VAR_10->dev_start +
   VAR_11->data_offset;
  return FUNC_5(VAR_7, VAR_12->merge_bvec_fn(VAR_12, VAR_1, VAR_2));
 } else
  return VAR_7;
}
