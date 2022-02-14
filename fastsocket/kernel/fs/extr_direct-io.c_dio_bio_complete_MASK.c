
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio {int io_error; scalar_t__ rw; scalar_t__ is_async; } ;
struct bio_vec {struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; int bi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dio *VAR_3, struct bio *VAR_4)
{
 const int VAR_5 = FUNC_5(VAR_0, &VAR_4->bi_flags);
 struct bio_vec *VAR_6 = VAR_4->bi_io_vec;
 int VAR_7;

 if (!VAR_5)
  VAR_3->io_error = -VAR_1;

 if (VAR_3->is_async && VAR_3->rw == VAR_2) {
  FUNC_1(VAR_4);
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_4->bi_vcnt; VAR_7++) {
   struct page *VAR_8 = VAR_6[VAR_7].bv_page;

   if (VAR_3->rw == VAR_2 && !FUNC_0(VAR_8))
    FUNC_4(VAR_8);
   FUNC_3(VAR_8);
  }
  FUNC_2(VAR_4);
 }
 return VAR_5 ? 0 : -VAR_1;
}
