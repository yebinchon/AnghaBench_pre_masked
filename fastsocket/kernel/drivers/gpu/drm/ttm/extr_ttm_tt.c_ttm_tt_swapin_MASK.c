
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int num_pages; int page_flags; struct file* swap_storage; struct page** pages; } ;
struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct page*,struct page*) ;
 TYPE_1__* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (struct address_space*,int) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct ttm_tt *VAR_3)
{
 struct address_space *VAR_4;
 struct file *VAR_5;
 struct page *VAR_6;
 struct page *VAR_7;
 int VAR_8;
 int VAR_9 = -VAR_0;

 VAR_5 = VAR_3->swap_storage;
 FUNC_0(VAR_5 == ((void*)0));

 VAR_4 = FUNC_4(VAR_5)->i_mapping;

 for (VAR_8 = 0; VAR_8 < VAR_3->num_pages; ++VAR_8) {
  VAR_6 = FUNC_7(VAR_4, VAR_8);
  if (FUNC_1(VAR_6)) {
   VAR_9 = FUNC_2(VAR_6);
   goto out_err;
  }
  VAR_7 = VAR_3->pages[VAR_8];
  if (FUNC_8(VAR_7 == ((void*)0)))
   goto out_err;

  FUNC_3(VAR_7, VAR_6);
  FUNC_6(VAR_6);
 }

 if (!(VAR_3->page_flags & VAR_1))
  FUNC_5(VAR_5);
 VAR_3->swap_storage = ((void*)0);
 VAR_3->page_flags &= ~VAR_2;

 return 0;
out_err:
 return VAR_9;
}
