
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dpages {scalar_t__ context_ptr; } ;
struct bio_vec {unsigned long bv_len; unsigned int bv_offset; struct page* bv_page; } ;



__attribute__((used)) static void FUNC_0(struct dpages *VAR_0,
    struct page **VAR_1, unsigned long *VAR_2, unsigned *VAR_3)
{
 struct bio_vec *VAR_4 = (struct bio_vec *) VAR_0->context_ptr;
 *VAR_1 = VAR_4->bv_page;
 *VAR_2 = VAR_4->bv_len;
 *VAR_3 = VAR_4->bv_offset;
}
