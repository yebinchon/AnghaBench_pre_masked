
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_dp {int color_range_auto; } ;
struct TYPE_5__ {int fitting_mode; } ;
struct intel_connector {TYPE_2__ panel; } ;
struct drm_connector {TYPE_3__* dev; int base; } ;
struct TYPE_4__ {int scaling_mode_property; } ;
struct TYPE_6__ {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (struct intel_dp*) ;
 struct intel_connector* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_6(struct intel_dp *VAR_1, struct drm_connector *VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_5(VAR_2);

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 VAR_1->color_range_auto = 1;

 if (FUNC_4(VAR_1)) {
  FUNC_0(VAR_2->dev);
  FUNC_1(
   &VAR_2->base,
   VAR_2->dev->mode_config.scaling_mode_property,
   VAR_0);
  VAR_3->panel.fitting_mode = VAR_0;
 }
}
