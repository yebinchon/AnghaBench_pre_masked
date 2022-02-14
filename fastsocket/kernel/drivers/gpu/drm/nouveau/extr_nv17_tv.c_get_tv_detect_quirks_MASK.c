
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_object {int dummy; } ;
struct nouveau_drm {struct nouveau_object* device; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct nouveau_object*,int,int,int) ;

__attribute__((used)) static bool
FUNC_2(struct drm_device *VAR_0, uint32_t *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_0);
 struct nouveau_object *VAR_3 = VAR_2->device;


 if (FUNC_1(VAR_3, 0x0322, 0x19da, 0x1035) ||
     FUNC_1(VAR_3, 0x0322, 0x19da, 0x2035)) {
  *VAR_1 = 0xc;
  return 0;
 }


 if (FUNC_1(VAR_3, 0x01f0, 0x1462, 0x5710)) {
  *VAR_1 = 0xc;
  return 0;
 }

 return 1;
}
