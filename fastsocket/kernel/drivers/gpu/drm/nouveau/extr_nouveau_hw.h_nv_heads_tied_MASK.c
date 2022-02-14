
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (struct drm_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct nouveau_device*,int ) ;

__attribute__((used)) static inline bool
FUNC_5(struct drm_device *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_1(VAR_2);
 struct nouveau_drm *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_4->device)->chipset == 0x11)
  return !!(FUNC_4(VAR_3, VAR_1) & (1 << 28));

 return FUNC_0(VAR_2, 0, VAR_0) & 0x4;
}
