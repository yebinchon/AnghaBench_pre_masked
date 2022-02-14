
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int client; } ;
struct TYPE_2__ {scalar_t__ num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct nouveau_drm*) ;
 int FUNC_1 (struct nouveau_drm*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct nouveau_drm*) ;
 int FUNC_11 (struct nouveau_drm*) ;

__attribute__((used)) static int
FUNC_12(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_6(VAR_0);

 FUNC_7(VAR_0);
 FUNC_0(VAR_1);

 FUNC_9(VAR_0);

 if (VAR_0->mode_config.num_crtc)
  FUNC_5(VAR_0);
 FUNC_4(VAR_0);

 FUNC_8(VAR_0);
 FUNC_2(VAR_0);

 FUNC_10(VAR_1);
 FUNC_1(VAR_1);
 FUNC_11(VAR_1);

 FUNC_3(&VAR_1->client);
 return 0;
}
