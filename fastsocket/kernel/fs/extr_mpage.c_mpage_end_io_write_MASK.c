
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; int flags; } ;
struct bio_vec {struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; int bi_flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_2, int VAR_3)
{
 const int VAR_4 = FUNC_4(VAR_1, &VAR_2->bi_flags);
 struct bio_vec *VAR_5 = VAR_2->bi_io_vec + VAR_2->bi_vcnt - 1;

 do {
  struct page *VAR_6 = VAR_5->bv_page;

  if (--VAR_5 >= VAR_2->bi_io_vec)
   FUNC_2(&VAR_5->bv_page->flags);

  if (!VAR_4){
   if (VAR_6->mapping)
    FUNC_3(VAR_0, &VAR_6->mapping->flags);
  }
  FUNC_1(VAR_6);
 } while (VAR_5 >= VAR_2->bi_io_vec);
 FUNC_0(VAR_2);
}
