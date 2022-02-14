
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_mm {int offset_hash; int offset_manager; } ;
struct drm_device {struct drm_gem_mm* mm_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_gem_mm*) ;

void
FUNC_3(struct drm_device *VAR_0)
{
 struct drm_gem_mm *VAR_1 = VAR_0->mm_private;

 FUNC_1(&VAR_1->offset_manager);
 FUNC_0(&VAR_1->offset_hash);
 FUNC_2(VAR_1);
 VAR_0->mm_private = ((void*)0);
}
