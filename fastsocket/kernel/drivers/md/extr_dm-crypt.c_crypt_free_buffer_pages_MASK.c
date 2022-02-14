
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {int page_pool; } ;
struct bio_vec {int * bv_page; } ;
struct bio {unsigned int bi_vcnt; } ;


 int FUNC_0 (int) ;
 struct bio_vec* FUNC_1 (struct bio*,unsigned int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct crypt_config *VAR_0, struct bio *VAR_1)
{
 unsigned int VAR_2;
 struct bio_vec *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->bi_vcnt; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(!VAR_3->bv_page);
  FUNC_2(VAR_3->bv_page, VAR_0->page_pool);
  VAR_3->bv_page = ((void*)0);
 }
}
