
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int trans_max_pages; } ;
struct pohmelfs_crypto_engine {unsigned int page_num; int * pages; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pohmelfs_crypto_engine *VAR_2, struct pohmelfs_sb *VAR_3)
{
 unsigned int VAR_4;

 VAR_2->pages = FUNC_2(VAR_3->trans_max_pages * sizeof(struct page *), VAR_1);
 if (!VAR_2->pages)
  return -VAR_0;

 for (VAR_4=0; VAR_4<VAR_3->trans_max_pages; ++VAR_4) {
  VAR_2->pages[VAR_4] = FUNC_0(VAR_1);
  if (!VAR_2->pages[VAR_4])
   break;
 }

 VAR_2->page_num = VAR_4;
 if (!VAR_2->page_num)
  goto err_out_free;

 return 0;

err_out_free:
 FUNC_1(VAR_2->pages);
 return -VAR_0;
}
