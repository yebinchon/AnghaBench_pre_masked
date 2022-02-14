
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {int * mm_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ttm_mem_type_manager *VAR_0,
    struct ttm_mem_reg *VAR_1)
{
 FUNC_1(VAR_1->mm_node);
 FUNC_0(VAR_1->mm_node);
 VAR_1->mm_node = ((void*)0);
}
