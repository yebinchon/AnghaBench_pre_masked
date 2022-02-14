
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_pm_level {void* core; void* copy; void* daemon; void* vdec; void* unka0; void* memory; void* shader; } ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (struct drm_device*,int,int) ;
 void* FUNC_1 (struct drm_device*,int,int) ;

int
FUNC_2(struct drm_device *VAR_0, struct nouveau_pm_level *VAR_1)
{
 VAR_1->core = FUNC_1(VAR_0, 0x00, 0x4200);
 VAR_1->shader = FUNC_1(VAR_0, 0x01, 0x4220);
 VAR_1->memory = FUNC_1(VAR_0, 0x02, 0x4000);
 VAR_1->unka0 = FUNC_0(VAR_0, 0x20, 0);
 VAR_1->vdec = FUNC_0(VAR_0, 0x21, 0);
 VAR_1->daemon = FUNC_0(VAR_0, 0x25, 0);
 VAR_1->copy = VAR_1->core;
 return 0;
}
