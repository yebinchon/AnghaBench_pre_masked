
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; int placement; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

bool FUNC_0(struct ttm_bo_device *VAR_4, struct ttm_mem_reg *VAR_5)
{
 struct ttm_mem_type_manager *VAR_6 = &VAR_4->man[VAR_5->mem_type];

 if (!(VAR_6->flags & VAR_1)) {
  if (VAR_5->mem_type == VAR_3)
   return 0;

  if (VAR_6->flags & VAR_0)
   return 0;

  if (VAR_5->placement & VAR_2)
   return 0;
 }
 return 1;
}
