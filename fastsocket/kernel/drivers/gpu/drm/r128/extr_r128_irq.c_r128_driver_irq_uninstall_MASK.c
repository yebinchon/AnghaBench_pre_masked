
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_r128_private_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct drm_device *VAR_1)
{
 drm_r128_private_t *VAR_2 = (drm_r128_private_t *) VAR_1->dev_private;
 if (!VAR_2)
  return;


 FUNC_0(VAR_0, 0);
}
