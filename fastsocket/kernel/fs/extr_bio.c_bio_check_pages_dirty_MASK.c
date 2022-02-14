
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio_vec {struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio* bi_private; struct bio_vec* bi_io_vec; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct bio* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct bio *VAR_3)
{
 struct bio_vec *VAR_4 = VAR_3->bi_io_vec;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->bi_vcnt; VAR_6++) {
  struct page *VAR_7 = VAR_4[VAR_6].bv_page;

  if (FUNC_1(VAR_7) || FUNC_0(VAR_7)) {
   FUNC_3(VAR_7);
   VAR_4[VAR_6].bv_page = ((void*)0);
  } else {
   VAR_5++;
  }
 }

 if (VAR_5) {
  unsigned long VAR_8;

  FUNC_5(&VAR_1, VAR_8);
  VAR_3->bi_private = VAR_0;
  VAR_0 = VAR_3;
  FUNC_6(&VAR_1, VAR_8);
  FUNC_4(&VAR_2);
 } else {
  FUNC_2(VAR_3);
 }
}
