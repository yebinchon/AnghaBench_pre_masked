
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int sg; } ;
struct nouveau_bo {int pin_refcnt; struct ttm_buffer_object bo; int * gem; } ;
struct drm_gem_object {scalar_t__ import_attach; struct nouveau_bo* driver_private; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct nouveau_bo*) ;
 int FUNC_4 (struct ttm_buffer_object**) ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(struct drm_gem_object *VAR_0)
{
 struct nouveau_bo *VAR_1 = VAR_0->driver_private;
 struct ttm_buffer_object *VAR_2 = &VAR_1->bo;

 if (!VAR_1)
  return;
 VAR_1->gem = ((void*)0);

 if (FUNC_5(VAR_1->pin_refcnt)) {
  VAR_1->pin_refcnt = 1;
  FUNC_3(VAR_1);
 }

 if (VAR_0->import_attach)
  FUNC_1(VAR_0, VAR_1->bo.sg);

 FUNC_4(&VAR_2);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
