
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; int page_flags; TYPE_1__* func; int * swap_storage; TYPE_3__* bdev; int * pages; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int (* ttm_tt_unpopulate ) (struct ttm_tt*) ;} ;
struct TYPE_4__ {int (* destroy ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ttm_tt*) ;
 int FUNC_3 (struct ttm_tt*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct ttm_tt*) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct ttm_tt *VAR_2)
{
 if (FUNC_5(VAR_2 == ((void*)0)))
  return;

 if (VAR_2->state == VAR_1) {
  FUNC_4(VAR_2);
 }

 if (FUNC_1(VAR_2->pages != ((void*)0))) {
  VAR_2->bdev->driver->ttm_tt_unpopulate(VAR_2);
 }

 if (!(VAR_2->page_flags & VAR_0) &&
     VAR_2->swap_storage)
  FUNC_0(VAR_2->swap_storage);

 VAR_2->swap_storage = ((void*)0);
 VAR_2->func->destroy(VAR_2);
}
