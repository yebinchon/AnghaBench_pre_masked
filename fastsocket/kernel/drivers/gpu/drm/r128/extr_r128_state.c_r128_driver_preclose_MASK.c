
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ page_flipping; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 (struct drm_device*) ;

void FUNC_1(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 if (VAR_0->dev_private) {
  drm_r128_private_t *VAR_2 = VAR_0->dev_private;
  if (VAR_2->page_flipping)
   FUNC_0(VAR_0);
 }
}
