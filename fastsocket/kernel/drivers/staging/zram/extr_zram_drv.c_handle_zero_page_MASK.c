
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio_vec {int bv_offset; int bv_len; struct page* bv_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bio_vec *VAR_1)
{
 struct page *VAR_2 = VAR_1->bv_page;
 void *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_3 + VAR_1->bv_offset, 0, VAR_1->bv_len);
 FUNC_2(VAR_3, VAR_0);

 FUNC_0(VAR_2);
}
