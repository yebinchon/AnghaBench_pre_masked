
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int clock; int private_flags; scalar_t__ hsync_start; scalar_t__ hdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {int gen; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_display_mode*,int ) ;

__attribute__((used)) static bool FUNC_4(struct drm_crtc *VAR_2,
      const struct drm_display_mode *VAR_3,
      struct drm_display_mode *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;

 if (FUNC_0(VAR_5)) {

  if (VAR_3->clock * 3 > VAR_1 * 4)
   return 0;
 }




 if (!(VAR_4->private_flags & VAR_0))
  FUNC_3(VAR_4, 0);




 if ((FUNC_1(VAR_5)->gen > 4 || FUNC_2(VAR_5)) &&
  VAR_4->hsync_start == VAR_4->hdisplay)
  return 0;

 return 1;
}
