
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; } ;
struct TYPE_2__ {scalar_t__ hpd; } ;
struct radeon_connector {TYPE_1__ hpd; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int status; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct radeon_device*,scalar_t__) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static bool FUNC_2(struct drm_connector *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_connector *VAR_7 = FUNC_1(VAR_4);
 enum drm_connector_status VAR_8;


 if (VAR_6->family >= VAR_0
   && VAR_7->hpd.hpd != VAR_1) {
  if (FUNC_0(VAR_6, VAR_7->hpd.hpd))
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_3;
  if (VAR_4->status == VAR_8)
   return 1;
 }

 return 0;
}
