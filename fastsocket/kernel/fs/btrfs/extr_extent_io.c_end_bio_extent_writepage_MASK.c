
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int flags; scalar_t__ index; TYPE_1__* mapping; } ;
struct extent_io_tree {int dummy; } ;
struct bio_vec {int bv_offset; int bv_len; struct page* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; } ;
struct TYPE_4__ {struct extent_io_tree io_tree; } ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct extent_io_tree*,struct page*) ;
 scalar_t__ FUNC_3 (struct page*,int,int,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_2, int VAR_3)
{
 struct bio_vec *VAR_4 = VAR_2->bi_io_vec + VAR_2->bi_vcnt - 1;
 struct extent_io_tree *VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 int VAR_8;

 do {
  struct page *VAR_9 = VAR_4->bv_page;
  VAR_5 = &FUNC_0(VAR_9->mapping->host)->io_tree;

  VAR_6 = ((u64)VAR_9->index << VAR_0) +
    VAR_4->bv_offset;
  VAR_7 = VAR_6 + VAR_4->bv_len - 1;

  if (VAR_4->bv_offset == 0 && VAR_4->bv_len == VAR_1)
   VAR_8 = 1;
  else
   VAR_8 = 0;

  if (--VAR_4 >= VAR_2->bi_io_vec)
   FUNC_5(&VAR_4->bv_page->flags);

  if (FUNC_3(VAR_9, VAR_3, VAR_6, VAR_7))
   continue;

  if (VAR_8)
   FUNC_4(VAR_9);
  else
   FUNC_2(VAR_5, VAR_9);
 } while (VAR_4 >= VAR_2->bi_io_vec);

 FUNC_1(VAR_2);
}
