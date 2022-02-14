
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_overlay {TYPE_2__* crtc; } ;
struct drm_intel_overlay_put_image {scalar_t__ dst_x; scalar_t__ dst_width; scalar_t__ dst_y; scalar_t__ dst_height; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct TYPE_3__ {struct drm_display_mode mode; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct intel_overlay *VAR_1,
        struct drm_intel_overlay_put_image *VAR_2)
{
 struct drm_display_mode *VAR_3 = &VAR_1->crtc->base.mode;

 if (VAR_2->dst_x < VAR_3->hdisplay &&
     VAR_2->dst_x + VAR_2->dst_width <= VAR_3->hdisplay &&
     VAR_2->dst_y < VAR_3->vdisplay &&
     VAR_2->dst_y + VAR_2->dst_height <= VAR_3->vdisplay)
  return 0;
 else
  return -VAR_0;
}
