
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_pm_level {void* dom6; void* vdec; void* memory; void* shader; void* core; } ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 TYPE_1__* FUNC_1 (int ) ;
 void* FUNC_2 (struct drm_device*,int ) ;

int
FUNC_3(struct drm_device *VAR_5, struct nouveau_pm_level *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_5);
 if (FUNC_1(VAR_7->device)->chipset == 0xaa ||
     FUNC_1(VAR_7->device)->chipset == 0xac)
  return 0;

 VAR_6->core = FUNC_2(VAR_5, VAR_2);
 VAR_6->shader = FUNC_2(VAR_5, VAR_3);
 VAR_6->memory = FUNC_2(VAR_5, VAR_1);
 if (FUNC_1(VAR_7->device)->chipset != 0x50) {
  VAR_6->vdec = FUNC_2(VAR_5, VAR_4);
  VAR_6->dom6 = FUNC_2(VAR_5, VAR_0);
 }

 return 0;
}
