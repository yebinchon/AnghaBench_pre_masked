
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_pm_level {int shader; int core; void* vdec; void* daemon; void* copy; void* hub01; void* hub06; void* hub07; void* rop; int memory; } ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (struct drm_device*) ;

int
FUNC_2(struct drm_device *VAR_0, struct nouveau_pm_level *VAR_1)
{
 VAR_1->shader = FUNC_0(VAR_0, 0x00);
 VAR_1->core = VAR_1->shader / 2;
 VAR_1->memory = FUNC_1(VAR_0);
 VAR_1->rop = FUNC_0(VAR_0, 0x01);
 VAR_1->hub07 = FUNC_0(VAR_0, 0x02);
 VAR_1->hub06 = FUNC_0(VAR_0, 0x07);
 VAR_1->hub01 = FUNC_0(VAR_0, 0x08);
 VAR_1->copy = FUNC_0(VAR_0, 0x09);
 VAR_1->daemon = FUNC_0(VAR_0, 0x0c);
 VAR_1->vdec = FUNC_0(VAR_0, 0x0e);
 return 0;
}
