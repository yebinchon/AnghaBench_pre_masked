
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int fbcon; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int ) ;

void FUNC_2(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1->fbcon);
}
