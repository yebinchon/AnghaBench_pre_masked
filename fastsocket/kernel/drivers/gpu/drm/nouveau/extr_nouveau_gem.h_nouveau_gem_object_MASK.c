
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bo {int dummy; } ;
struct drm_gem_object {struct nouveau_bo* driver_private; } ;



__attribute__((used)) static inline struct nouveau_bo *
FUNC_0(struct drm_gem_object *VAR_0)
{
 return VAR_0 ? VAR_0->driver_private : ((void*)0);
}
