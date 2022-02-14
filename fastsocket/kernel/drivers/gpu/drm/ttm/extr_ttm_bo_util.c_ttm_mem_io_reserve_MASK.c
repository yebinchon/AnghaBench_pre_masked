
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_type_manager {int io_reserve_fastpath; } ;
struct TYPE_3__ {int io_reserved_count; } ;
struct ttm_mem_reg {size_t mem_type; TYPE_1__ bus; } ;
struct ttm_bo_device {TYPE_2__* driver; struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {int (* io_mem_reserve ) (struct ttm_bo_device*,struct ttm_mem_reg*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_mem_type_manager*) ;

__attribute__((used)) static int FUNC_4(struct ttm_bo_device *VAR_1,
         struct ttm_mem_reg *VAR_2)
{
 struct ttm_mem_type_manager *VAR_3 = &VAR_1->man[VAR_2->mem_type];
 int VAR_4 = 0;

 if (!VAR_1->driver->io_mem_reserve)
  return 0;
 if (FUNC_0(VAR_3->io_reserve_fastpath))
  return VAR_1->driver->io_mem_reserve(VAR_1, VAR_2);

 if (VAR_1->driver->io_mem_reserve &&
     VAR_2->bus.io_reserved_count++ == 0) {
retry:
  VAR_4 = VAR_1->driver->io_mem_reserve(VAR_1, VAR_2);
  if (VAR_4 == -VAR_0) {
   VAR_4 = FUNC_3(VAR_3);
   if (VAR_4 == 0)
    goto retry;
  }
 }
 return VAR_4;
}
