
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; TYPE_2__* bdev; } ;
struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; scalar_t__ start; scalar_t__ size; int num_pages; int * mm_node; int placement; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
typedef int pgprot_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* ttm_tt_populate ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ttm_tt*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_3 (void*,void*,unsigned long) ;
 int FUNC_4 (struct ttm_tt*,void*,unsigned long,int ) ;
 int FUNC_5 (struct ttm_tt*,void*,unsigned long,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ttm_bo_device*,struct ttm_mem_reg*,void**) ;
 int FUNC_8 (struct ttm_bo_device*,struct ttm_mem_reg*,void*) ;
 int FUNC_9 (struct ttm_tt*) ;
 int FUNC_10 (struct ttm_tt*) ;

int FUNC_11(struct ttm_buffer_object *VAR_3,
         bool VAR_4, bool VAR_5,
         struct ttm_mem_reg *VAR_6)
{
 struct ttm_bo_device *VAR_7 = VAR_3->bdev;
 struct ttm_mem_type_manager *VAR_8 = &VAR_7->man[VAR_6->mem_type];
 struct ttm_tt *VAR_9 = VAR_3->ttm;
 struct ttm_mem_reg *VAR_10 = &VAR_3->mem;
 struct ttm_mem_reg VAR_11 = *VAR_10;
 void *VAR_12;
 void *VAR_13;
 int VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17 = 0;
 int VAR_18;

 VAR_14 = FUNC_7(VAR_7, VAR_10, &VAR_12);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_7(VAR_7, VAR_6, &VAR_13);
 if (VAR_14)
  goto out;

 if (VAR_12 == ((void*)0) && VAR_13 == ((void*)0))
  goto out2;
 if (VAR_12 == ((void*)0) && VAR_9 == ((void*)0))
  goto out2;

 if (VAR_9->state == VAR_2) {
  VAR_14 = VAR_9->bdev->driver->ttm_tt_populate(VAR_9);
  if (VAR_14) {


   VAR_11.mm_node = ((void*)0);
   goto out1;
  }
 }

 VAR_17 = 0;
 VAR_18 = 1;

 if ((VAR_10->mem_type == VAR_6->mem_type) &&
     (VAR_6->start < VAR_10->start + VAR_10->size)) {
  VAR_18 = -1;
  VAR_17 = VAR_6->num_pages - 1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_6->num_pages; ++VAR_15) {
  VAR_16 = VAR_15 * VAR_18 + VAR_17;
  if (VAR_12 == ((void*)0)) {
   pgprot_t VAR_19 = FUNC_6(VAR_10->placement,
          VAR_0);
   VAR_14 = FUNC_5(VAR_9, VAR_13, VAR_16,
         VAR_19);
  } else if (VAR_13 == ((void*)0)) {
   pgprot_t VAR_20 = FUNC_6(VAR_6->placement,
          VAR_0);
   VAR_14 = FUNC_4(VAR_9, VAR_12, VAR_16,
         VAR_20);
  } else
   VAR_14 = FUNC_3(VAR_13, VAR_12, VAR_16);
  if (VAR_14) {

   VAR_11.mm_node = ((void*)0);
   goto out1;
  }
 }
 FUNC_0();
out2:
 VAR_11 = *VAR_10;
 *VAR_10 = *VAR_6;
 VAR_6->mm_node = ((void*)0);

 if ((VAR_8->flags & VAR_1) && (VAR_9 != ((void*)0))) {
  FUNC_10(VAR_9);
  FUNC_9(VAR_9);
  VAR_3->ttm = ((void*)0);
 }

out1:
 FUNC_8(VAR_7, VAR_10, VAR_13);
out:
 FUNC_8(VAR_7, &VAR_11, VAR_12);
 FUNC_2(VAR_3, &VAR_11);
 return VAR_14;
}
