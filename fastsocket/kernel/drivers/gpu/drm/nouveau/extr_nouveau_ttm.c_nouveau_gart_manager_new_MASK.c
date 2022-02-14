
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_placement {int dummy; } ;
struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {int num_pages; scalar_t__ start; struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {int page_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_mem* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct ttm_mem_type_manager *VAR_3,
    struct ttm_buffer_object *VAR_4,
    struct ttm_placement *VAR_5,
    struct ttm_mem_reg *VAR_6)
{
 struct nouveau_mem *VAR_7;

 if (FUNC_1((VAR_6->num_pages << VAR_2) >= 512 * 1024 * 1024))
  return -VAR_0;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->page_shift = 12;

 VAR_6->mm_node = VAR_7;
 VAR_6->start = 0;
 return 0;
}
