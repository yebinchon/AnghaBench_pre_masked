
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int dummy; } ;
struct nouveau_bo {struct ttm_buffer_object bo; } ;


 int VAR_0 ;
 struct nouveau_bo* FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (struct ttm_buffer_object**) ;

__attribute__((used)) static inline int
FUNC_3(struct nouveau_bo *VAR_1, struct nouveau_bo **VAR_2)
{
 struct nouveau_bo *VAR_3;

 if (!VAR_2)
  return -VAR_0;
 VAR_3 = *VAR_2;

 *VAR_2 = VAR_1 ? FUNC_0(FUNC_1(&VAR_1->bo)) : ((void*)0);
 if (VAR_3) {
  struct ttm_buffer_object *VAR_4 = &VAR_3->bo;

  FUNC_2(&VAR_4);
 }

 return 0;
}
