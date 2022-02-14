
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {unsigned int __data_len; unsigned int resid_len; int nr_phys_segments; int buffer; struct bio* bio; } ;
struct page {int dummy; } ;
struct bio {unsigned int bi_size; int bi_vcnt; int bi_phys_segments; TYPE_1__* bi_io_vec; } ;
struct TYPE_2__ {unsigned int bv_len; scalar_t__ bv_offset; struct page* bv_page; } ;


 int FUNC_0 (struct bio*) ;

void FUNC_1(struct request *VAR_0, struct page *VAR_1,
  unsigned int VAR_2)
{
 struct bio *VAR_3 = VAR_0->bio;

 VAR_3->bi_io_vec->bv_page = VAR_1;
 VAR_3->bi_io_vec->bv_offset = 0;
 VAR_3->bi_io_vec->bv_len = VAR_2;

 VAR_3->bi_size = VAR_2;
 VAR_3->bi_vcnt = 1;
 VAR_3->bi_phys_segments = 1;

 VAR_0->__data_len = VAR_0->resid_len = VAR_2;
 VAR_0->nr_phys_segments = 1;
 VAR_0->buffer = FUNC_0(VAR_3);
}
