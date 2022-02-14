
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dp_extclk; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct drm_connector*) ;

bool FUNC_2(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct radeon_device *VAR_2 = VAR_1->dev_private;

 if (FUNC_0(VAR_2) &&
     (VAR_2->clock.dp_extclk >= 53900) &&
     FUNC_1(VAR_0)) {
  return 1;
 }

 return 0;
}
