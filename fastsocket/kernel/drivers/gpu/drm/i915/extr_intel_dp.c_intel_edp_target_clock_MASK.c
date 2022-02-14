
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct intel_dp {struct intel_connector* attached_connector; } ;
struct TYPE_4__ {TYPE_1__* fixed_mode; } ;
struct intel_connector {TYPE_2__ panel; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_3__ {int clock; } ;


 struct intel_dp* FUNC_0 (int *) ;

int
FUNC_1(struct intel_encoder *VAR_0,
         struct drm_display_mode *VAR_1)
{
 struct intel_dp *VAR_2 = FUNC_0(&VAR_0->base);
 struct intel_connector *VAR_3 = VAR_2->attached_connector;

 if (VAR_3->panel.fixed_mode)
  return VAR_3->panel.fixed_mode->clock;
 else
  return VAR_1->clock;
}
