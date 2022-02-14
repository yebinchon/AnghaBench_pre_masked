
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {int dummy; } ;
struct ttm_range_manager {int lock; struct drm_mm mm; } ;
struct ttm_mem_type_manager {int * priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_mm*) ;
 int FUNC_1 (struct drm_mm*) ;
 int FUNC_2 (struct ttm_range_manager*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ttm_mem_type_manager *VAR_1)
{
 struct ttm_range_manager *VAR_2 = (struct ttm_range_manager *) VAR_1->priv;
 struct drm_mm *VAR_3 = &VAR_2->mm;

 FUNC_3(&VAR_2->lock);
 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_3);
  FUNC_4(&VAR_2->lock);
  FUNC_2(VAR_2);
  VAR_1->priv = ((void*)0);
  return 0;
 }
 FUNC_4(&VAR_2->lock);
 return -VAR_0;
}
