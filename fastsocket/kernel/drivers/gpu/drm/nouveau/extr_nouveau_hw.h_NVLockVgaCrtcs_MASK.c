
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (struct drm_device*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static inline bool
FUNC_5(struct drm_device *VAR_3, bool VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_2(VAR_3);
 bool VAR_6 = !FUNC_0(VAR_3, 0, VAR_0);

 FUNC_1(VAR_3, 0, VAR_0,
         VAR_4 ? VAR_1 : VAR_2);

 if (FUNC_3(VAR_5->device)->chipset == 0x11 && !FUNC_4(VAR_3))
  FUNC_1(VAR_3, 1, VAR_0,
          VAR_4 ? VAR_1 :
          VAR_2);

 return VAR_6;
}
