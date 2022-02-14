
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct ttm_mem_reg {scalar_t__ mem_type; int * mm_node; int placement; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; struct ttm_tt* ttm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ttm_tt*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_tt*,int ) ;
 int FUNC_4 (struct ttm_tt*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ttm_buffer_object *VAR_3,
      bool VAR_4,
      bool VAR_5, struct ttm_mem_reg *VAR_6)
{
 struct ttm_tt *VAR_7 = VAR_3->ttm;
 struct ttm_mem_reg *VAR_8 = &VAR_3->mem;
 int VAR_9;

 if (VAR_8->mem_type != VAR_2) {
  FUNC_4(VAR_7);
  FUNC_0(VAR_3);
  FUNC_1(&VAR_8->placement, VAR_0,
    VAR_1);
  VAR_8->mem_type = VAR_2;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_6->placement);
 if (FUNC_5(VAR_9 != 0))
  return VAR_9;

 if (VAR_6->mem_type != VAR_2) {
  VAR_9 = FUNC_2(VAR_7, VAR_6);
  if (FUNC_5(VAR_9 != 0))
   return VAR_9;
 }

 *VAR_8 = *VAR_6;
 VAR_6->mm_node = ((void*)0);

 return 0;
}
