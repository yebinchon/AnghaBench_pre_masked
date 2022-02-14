
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_connector {int panel; struct drm_connector* edid; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 struct intel_dp* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct drm_connector*) ;
 struct intel_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_8(struct drm_connector *VAR_0)
{
 struct intel_dp *VAR_1 = FUNC_3(VAR_0);
 struct intel_connector *VAR_2 = FUNC_7(VAR_0);

 if (!FUNC_0(VAR_2->edid))
  FUNC_6(VAR_2->edid);

 if (FUNC_5(VAR_1))
  FUNC_4(&VAR_2->panel);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_6(VAR_0);
}
