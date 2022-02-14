
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pixel_clock; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ clock; } ;
struct radeon_connector {scalar_t__ connector_object_id; scalar_t__ use_digital; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct drm_display_mode*,int) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_7,
      struct drm_display_mode *VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 struct radeon_connector *VAR_11 = FUNC_3(VAR_7);




 if (VAR_11->use_digital &&
     (VAR_10->family == VAR_0) &&
     (VAR_8->clock > 135000))
  return VAR_5;

 if (VAR_11->use_digital && (VAR_8->clock > 165000)) {
  if ((VAR_11->connector_object_id == VAR_2) ||
      (VAR_11->connector_object_id == VAR_1) ||
      (VAR_11->connector_object_id == VAR_4))
   return VAR_6;
  else if (VAR_11->connector_object_id == VAR_3) {
   if (FUNC_0(VAR_10)) {

    if (VAR_8->clock > 340000)
     return VAR_5;
    else
     return VAR_6;
   } else
    return VAR_5;
  } else
   return VAR_5;
 }


 if ((VAR_8->clock / 10) > VAR_10->clock.max_pixel_clock)
  return VAR_5;
 if (FUNC_1(VAR_10) && FUNC_2(VAR_8, 4) > 300) {
  return VAR_5;
 }

 return VAR_6;
}
