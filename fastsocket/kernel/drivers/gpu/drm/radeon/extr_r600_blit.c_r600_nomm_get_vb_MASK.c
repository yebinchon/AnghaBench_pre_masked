
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int blit_vb; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1)
{
 drm_radeon_private_t *VAR_2 = VAR_1->dev_private;
 VAR_2->blit_vb = FUNC_1(VAR_1);
 if (!VAR_2->blit_vb) {
  FUNC_0("Unable to allocate vertex buffer for blit\n");
  return -VAR_0;
 }
 return 0;
}
