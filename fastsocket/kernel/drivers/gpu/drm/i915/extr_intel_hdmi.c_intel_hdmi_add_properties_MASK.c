
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {int color_range_auto; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_2(struct intel_hdmi *VAR_0, struct drm_connector *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 VAR_0->color_range_auto = 1;
}
