
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_2__ {int * addr; } ;
struct ttm_mem_reg {size_t mem_type; TYPE_1__ bus; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_mem_type_manager*,int) ;
 int FUNC_3 (struct ttm_mem_type_manager*) ;

void FUNC_4(struct ttm_bo_device *VAR_0, struct ttm_mem_reg *VAR_1,
    void *VAR_2)
{
 struct ttm_mem_type_manager *VAR_3;

 VAR_3 = &VAR_0->man[VAR_1->mem_type];

 if (VAR_2 && VAR_1->bus.addr == ((void*)0))
  FUNC_0(VAR_2);
 (void) FUNC_2(VAR_3, 0);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_3);
}
