
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int support; } ;
struct drm_i915_private {int render_reclock_avail; TYPE_1__ edp; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct bdb_header {int dummy; } ;
struct bdb_driver_features {scalar_t__ lvds_config; scalar_t__ dual_frequency; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 struct bdb_driver_features* FUNC_1 (struct bdb_header*,int ) ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_private *VAR_2,
         struct bdb_header *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct bdb_driver_features *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_5)
  return;

 if (FUNC_0(VAR_4) &&
     VAR_5->lvds_config == VAR_1)
  VAR_2->edp.support = 1;

 if (VAR_5->dual_frequency)
  VAR_2->render_reclock_avail = 1;
}
