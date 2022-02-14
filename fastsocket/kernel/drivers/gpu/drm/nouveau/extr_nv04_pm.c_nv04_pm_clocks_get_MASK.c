
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_pm_level {int core; int memory; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ) ;

int
FUNC_1(struct drm_device *VAR_2, struct nouveau_pm_level *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->core = VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->memory = VAR_4;

 return 0;
}
