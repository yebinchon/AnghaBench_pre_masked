
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_pm_level {int dummy; } ;
struct nouveau_pm {int (* clocks_set ) (struct drm_device*,void*) ;struct nouveau_pm_level* cur; void* (* clocks_pre ) (struct drm_device*,struct nouveau_pm_level*) ;} ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct nouveau_pm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct nouveau_pm_level*,struct nouveau_pm_level*,struct nouveau_pm_level*) ;
 void* FUNC_4 (struct drm_device*,struct nouveau_pm_level*) ;
 int FUNC_5 (struct drm_device*,void*) ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_0, struct nouveau_pm_level *VAR_1)
{
 struct nouveau_pm *VAR_2 = FUNC_2(VAR_0);
 void *VAR_3;
 int VAR_4;

 if (VAR_1 == VAR_2->cur)
  return 0;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2->cur, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = VAR_2->clocks_pre(VAR_0, VAR_1);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto error;
 }
 VAR_4 = VAR_2->clocks_set(VAR_0, VAR_3);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_1, VAR_2->cur);
 if (VAR_4)
  return VAR_4;

 VAR_2->cur = VAR_1;
 return 0;

error:

 FUNC_3(VAR_0, VAR_1, VAR_1, VAR_2->cur);
 return VAR_4;
}
