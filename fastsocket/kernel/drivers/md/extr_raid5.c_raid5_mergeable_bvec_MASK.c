
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct mddev* queuedata; } ;
struct mddev {unsigned int chunk_sectors; unsigned int new_chunk_sectors; } ;
struct bvec_merge_data {unsigned int bi_sector; int bi_size; int bi_rw; int bi_bdev; } ;
struct bio_vec {int bv_len; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct request_queue *VAR_1,
    struct bvec_merge_data *VAR_2,
    struct bio_vec *VAR_3)
{
 struct mddev *VAR_4 = VAR_1->queuedata;
 sector_t VAR_5 = VAR_2->bi_sector + FUNC_0(VAR_2->bi_bdev);
 int VAR_6;
 unsigned int VAR_7 = VAR_4->chunk_sectors;
 unsigned int VAR_8 = VAR_2->bi_size >> 9;

 if ((VAR_2->bi_rw & 1) == VAR_0)
  return VAR_3->bv_len;

 if (VAR_4->new_chunk_sectors < VAR_4->chunk_sectors)
  VAR_7 = VAR_4->new_chunk_sectors;
 VAR_6 = (VAR_7 - ((VAR_5 & (VAR_7 - 1)) + VAR_8)) << 9;
 if (VAR_6 < 0) VAR_6 = 0;
 if (VAR_6 <= VAR_3->bv_len && VAR_8 == 0)
  return VAR_3->bv_len;
 else
  return VAR_6;
}
