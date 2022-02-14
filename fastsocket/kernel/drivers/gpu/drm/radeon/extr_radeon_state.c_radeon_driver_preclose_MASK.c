
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {int fb_heap; int gart_heap; scalar_t__ page_flipping; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_file*,TYPE_1__*) ;

void FUNC_2(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 if (VAR_0->dev_private) {
  drm_radeon_private_t *VAR_2 = VAR_0->dev_private;
  VAR_2->page_flipping = 0;
  FUNC_0(VAR_1, VAR_2->gart_heap);
  FUNC_0(VAR_1, VAR_2->fb_heap);
  FUNC_1(VAR_1, VAR_2);
 }
}
