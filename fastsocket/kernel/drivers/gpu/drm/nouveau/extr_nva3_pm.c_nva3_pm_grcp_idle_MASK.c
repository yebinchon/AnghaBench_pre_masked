
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;

__attribute__((used)) static bool
FUNC_2(void *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0;
 struct nouveau_device *VAR_2 = FUNC_0(VAR_1);

 if (!(FUNC_1(VAR_2, 0x400304) & 0x00000001))
  return 1;
 if (FUNC_1(VAR_2, 0x400308) == 0x0050001c)
  return 1;
 return 0;
}
