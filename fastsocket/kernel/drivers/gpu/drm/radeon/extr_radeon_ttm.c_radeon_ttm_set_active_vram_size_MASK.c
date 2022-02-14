
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ttm_mem_type_manager {int size; } ;
struct TYPE_3__ {struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {TYPE_1__ bdev; int initialized; } ;
struct radeon_device {TYPE_2__ mman; } ;


 int VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(struct radeon_device *VAR_2, u64 VAR_3)
{
 struct ttm_mem_type_manager *VAR_4;

 if (!VAR_2->mman.initialized)
  return;

 VAR_4 = &VAR_2->mman.bdev.man[VAR_1];

 VAR_4->size = VAR_3 >> VAR_0;
}
