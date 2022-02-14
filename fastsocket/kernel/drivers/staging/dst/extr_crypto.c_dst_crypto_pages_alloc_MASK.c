
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dst_crypto_engine {int page_num; int * pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct dst_crypto_engine *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_2->pages = FUNC_3(VAR_3 * sizeof(struct page **), VAR_1);
 if (!VAR_2->pages)
  return -VAR_0;

 for (VAR_4=0; VAR_4<VAR_3; ++VAR_4) {
  VAR_2->pages[VAR_4] = FUNC_1(VAR_1);
  if (!VAR_2->pages[VAR_4])
   goto err_out_free_pages;
 }

 VAR_2->page_num = VAR_3;
 return 0;

err_out_free_pages:
 while (--VAR_4 >= 0)
  FUNC_0(VAR_2->pages[VAR_4]);

 FUNC_2(VAR_2->pages);
 return -VAR_0;
}
