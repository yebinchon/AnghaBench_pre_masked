
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {TYPE_1__* func; int default_caching; int available_caching; int size; int gpu_offset; int flags; int use_type; int has_type; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_2__ {int (* debug ) (struct ttm_mem_type_manager*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ttm_mem_type_manager*,int ) ;

__attribute__((used)) static void FUNC_2(struct ttm_bo_device *VAR_2, int VAR_3)
{
 struct ttm_mem_type_manager *VAR_4 = &VAR_2->man[VAR_3];

 FUNC_0("    has_type: %d\n", VAR_4->has_type);
 FUNC_0("    use_type: %d\n", VAR_4->use_type);
 FUNC_0("    flags: 0x%08X\n", VAR_4->flags);
 FUNC_0("    gpu_offset: 0x%08lX\n", VAR_4->gpu_offset);
 FUNC_0("    size: %llu\n", VAR_4->size);
 FUNC_0("    available_caching: 0x%08X\n", VAR_4->available_caching);
 FUNC_0("    default_caching: 0x%08X\n", VAR_4->default_caching);
 if (VAR_3 != VAR_1)
  (*VAR_4->func->debug)(VAR_4, VAR_0);
}
