
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio_vec {struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; } ;


 int FUNC_0 (struct page*) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 struct bio_vec *VAR_1 = VAR_0->bi_io_vec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->bi_vcnt; VAR_2++) {
  struct page *VAR_3 = VAR_1[VAR_2].bv_page;

  if (VAR_3)
   FUNC_0(VAR_3);
 }
}
