
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct bio_vec {struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; int bi_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_1, int VAR_2)
{
 const int VAR_3 = FUNC_5(VAR_0, &VAR_1->bi_flags);
 struct bio_vec *VAR_4 = VAR_1->bi_io_vec + VAR_1->bi_vcnt - 1;

 do {
  struct page *VAR_5 = VAR_4->bv_page;

  if (--VAR_4 >= VAR_1->bi_io_vec)
   FUNC_4(&VAR_4->bv_page->flags);

  if (VAR_3) {
   FUNC_2(VAR_5);
  } else {
   FUNC_0(VAR_5);
   FUNC_1(VAR_5);
  }
  FUNC_6(VAR_5);
 } while (VAR_4 >= VAR_1->bi_io_vec);
 FUNC_3(VAR_1);
}
