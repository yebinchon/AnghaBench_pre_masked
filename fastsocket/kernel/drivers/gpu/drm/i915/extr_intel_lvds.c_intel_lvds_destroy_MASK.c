
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int panel; struct drm_connector* edid; } ;
struct TYPE_4__ {scalar_t__ notifier_call; } ;
struct intel_lvds_connector {TYPE_1__ base; TYPE_2__ lid_notifier; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_connector*) ;
 struct intel_lvds_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_7(struct drm_connector *VAR_0)
{
 struct intel_lvds_connector *VAR_1 =
  FUNC_6(VAR_0);

 if (VAR_1->lid_notifier.notifier_call)
  FUNC_1(&VAR_1->lid_notifier);

 if (!FUNC_0(VAR_1->base.edid))
  FUNC_5(VAR_1->base.edid);

 FUNC_4(&VAR_1->base.panel);

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0);
}
