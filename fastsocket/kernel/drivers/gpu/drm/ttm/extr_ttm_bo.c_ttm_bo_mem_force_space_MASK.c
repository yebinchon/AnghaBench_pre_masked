
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ttm_placement {int dummy; } ;
struct ttm_mem_type_manager {TYPE_1__* func; } ;
struct ttm_mem_reg {size_t mem_type; int * mm_node; } ;
struct ttm_buffer_object {struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_2__ {int (* get_node ) (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_bo_device*,size_t,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ttm_buffer_object *VAR_1,
     uint32_t VAR_2,
     struct ttm_placement *VAR_3,
     struct ttm_mem_reg *VAR_4,
     bool VAR_5,
     bool VAR_6)
{
 struct ttm_bo_device *VAR_7 = VAR_1->bdev;
 struct ttm_mem_type_manager *VAR_8 = &VAR_7->man[VAR_2];
 int VAR_9;

 do {
  VAR_9 = (*VAR_8->func->get_node)(VAR_8, VAR_1, VAR_3, VAR_4);
  if (FUNC_2(VAR_9 != 0))
   return VAR_9;
  if (VAR_4->mm_node)
   break;
  VAR_9 = FUNC_1(VAR_7, VAR_2,
       VAR_5, VAR_6);
  if (FUNC_2(VAR_9 != 0))
   return VAR_9;
 } while (1);
 if (VAR_4->mm_node == ((void*)0))
  return -VAR_0;
 VAR_4->mem_type = VAR_2;
 return 0;
}
