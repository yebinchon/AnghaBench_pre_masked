
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; int * pages; TYPE_2__* bdev; } ;
struct ttm_mem_reg {int placement; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; struct ttm_mem_reg mem; } ;
struct ttm_bo_kmap_obj {int virtual; int bo_kmap_type; int page; } ;
typedef int pgprot_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* ttm_tt_populate ) (struct ttm_tt*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ttm_tt*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ttm_buffer_object *VAR_6,
      unsigned long VAR_7,
      unsigned long VAR_8,
      struct ttm_bo_kmap_obj *VAR_9)
{
 struct ttm_mem_reg *VAR_10 = &VAR_6->mem; pgprot_t VAR_11;
 struct ttm_tt *VAR_12 = VAR_6->ttm;
 int VAR_13;

 FUNC_0(!VAR_12);

 if (VAR_12->state == VAR_3) {
  VAR_13 = VAR_12->bdev->driver->ttm_tt_populate(VAR_12);
  if (VAR_13)
   return VAR_13;
 }

 if (VAR_8 == 1 && (VAR_10->placement & VAR_2)) {





  VAR_9->bo_kmap_type = VAR_4;
  VAR_9->page = VAR_12->pages[VAR_7];
  VAR_9->virtual = FUNC_1(VAR_9->page);
 } else {




  VAR_11 = (VAR_10->placement & VAR_2) ?
   VAR_1 :
   FUNC_3(VAR_10->placement, VAR_1);
  VAR_9->bo_kmap_type = VAR_5;
  VAR_9->virtual = FUNC_4(VAR_12->pages + VAR_7, VAR_8,
        0, VAR_11);
 }
 return (!VAR_9->virtual) ? -VAR_0 : 0;
}
