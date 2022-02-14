
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pixel_clock; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_display_mode*,int) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_2,
      struct drm_display_mode *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;

 if ((VAR_3->clock / 10) > VAR_5->clock.max_pixel_clock)
  return VAR_0;
 if (FUNC_0(VAR_5) && FUNC_1(VAR_3, 4) > 300) {
  return VAR_0;
 }

 return VAR_1;
}
