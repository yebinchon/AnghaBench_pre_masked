
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_pm_level {int dummy; } ;
struct nouveau_pm {struct nouveau_pm_level boot; struct nouveau_pm_level* cur; } ;
struct drm_device {int dummy; } ;


 struct nouveau_pm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,struct nouveau_pm_level*) ;

void
FUNC_2(struct drm_device *VAR_0)
{
 struct nouveau_pm *VAR_1 = FUNC_0(VAR_0);
 struct nouveau_pm_level *VAR_2;

 if (!VAR_1->cur || VAR_1->cur == &VAR_1->boot)
  return;

 VAR_2 = VAR_1->cur;
 VAR_1->cur = &VAR_1->boot;
 FUNC_1(VAR_0, VAR_2);
}
