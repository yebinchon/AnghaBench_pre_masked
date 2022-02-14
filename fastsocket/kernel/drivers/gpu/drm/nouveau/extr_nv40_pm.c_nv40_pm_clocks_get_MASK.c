
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_pm_level {int memory; void* shader; void* core; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 void* FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*,int) ;

int
FUNC_4(struct drm_device *VAR_0, struct nouveau_pm_level *VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2, 0x00c040);

 VAR_1->core = FUNC_2(VAR_0, (VAR_3 & 0x00000003) >> 0);
 VAR_1->shader = FUNC_2(VAR_0, (VAR_3 & 0x00000030) >> 4);
 VAR_1->memory = FUNC_3(VAR_0, 0x4020);
 return 0;
}
