
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_mode_state {int dummy; } ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_device*,int,struct nv04_mode_state*) ;
 int FUNC_4 (struct drm_device*,int,struct nv04_mode_state*) ;
 int FUNC_5 (struct drm_device*,int,struct nv04_mode_state*) ;
 int FUNC_6 (struct drm_device*,int,struct nv04_mode_state*) ;

void FUNC_7(struct drm_device *VAR_0, int VAR_1,
      struct nv04_mode_state *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_3->device)->chipset == 0x11)

  FUNC_1(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1, VAR_2);
 FUNC_6(VAR_0, VAR_1, VAR_2);
 FUNC_4(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_0, VAR_1, VAR_2);
}
