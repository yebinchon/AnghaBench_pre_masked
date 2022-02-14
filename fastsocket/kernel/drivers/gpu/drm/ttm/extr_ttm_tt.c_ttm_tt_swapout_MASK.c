
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; scalar_t__ caching_state; int num_pages; int page_flags; struct page* swap_storage; TYPE_2__* bdev; struct page** pages; } ;
struct page {int dummy; } ;
typedef struct page file ;
struct address_space {int dummy; } ;
struct TYPE_6__ {struct address_space* i_mapping; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* ttm_tt_unpopulate ) (struct ttm_tt*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct page*,struct page*) ;
 TYPE_3__* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct page*) ;
 struct page* FUNC_10 (char*,int,int ) ;
 struct page* FUNC_11 (struct address_space*,int) ;
 int FUNC_12 (struct ttm_tt*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_13 (int ) ;

int FUNC_14(struct ttm_tt *VAR_7, struct file *VAR_8)
{
 struct address_space *VAR_9;
 struct file *VAR_10;
 struct page *VAR_11;
 struct page *VAR_12;
 int VAR_13;
 int VAR_14 = -VAR_0;

 FUNC_0(VAR_7->state != VAR_5 && VAR_7->state != VAR_6);
 FUNC_0(VAR_7->caching_state != VAR_4);

 if (!VAR_8) {
  VAR_10 = FUNC_10("ttm swap",
      VAR_7->num_pages << VAR_1,
      0);
  if (FUNC_13(FUNC_1(VAR_10))) {
   FUNC_8("Failed allocating swap storage\n");
   return FUNC_2(VAR_10);
  }
 } else
  VAR_10 = VAR_8;

 VAR_9 = FUNC_4(VAR_10)->i_mapping;

 for (VAR_13 = 0; VAR_13 < VAR_7->num_pages; ++VAR_13) {
  VAR_11 = VAR_7->pages[VAR_13];
  if (FUNC_13(VAR_11 == ((void*)0)))
   continue;
  VAR_12 = FUNC_11(VAR_9, VAR_13);
  if (FUNC_13(FUNC_1(VAR_12))) {
   VAR_14 = FUNC_2(VAR_12);
   goto out_err;
  }
  FUNC_3(VAR_12, VAR_11);
  FUNC_9(VAR_12);
  FUNC_6(VAR_12);
  FUNC_7(VAR_12);
 }

 VAR_7->bdev->driver->ttm_tt_unpopulate(VAR_7);
 VAR_7->swap_storage = VAR_10;
 VAR_7->page_flags |= VAR_3;
 if (VAR_8)
  VAR_7->page_flags |= VAR_2;

 return 0;
out_err:
 if (!VAR_8)
  FUNC_5(VAR_10);

 return VAR_14;
}
