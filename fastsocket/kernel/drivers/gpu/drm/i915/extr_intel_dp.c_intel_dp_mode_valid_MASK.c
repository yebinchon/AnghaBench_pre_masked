
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_2__ {struct drm_display_mode* fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; int clock; int flags; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_dp* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct intel_dp*,struct drm_display_mode*,int) ;
 scalar_t__ FUNC_2 (struct intel_dp*) ;
 struct intel_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_6,
      struct drm_display_mode *VAR_7)
{
 struct intel_dp *VAR_8 = FUNC_0(VAR_6);
 struct intel_connector *VAR_9 = FUNC_3(VAR_6);
 struct drm_display_mode *VAR_10 = VAR_9->panel.fixed_mode;

 if (FUNC_2(VAR_8) && VAR_10) {
  if (VAR_7->hdisplay > VAR_10->hdisplay)
   return VAR_5;

  if (VAR_7->vdisplay > VAR_10->vdisplay)
   return VAR_5;
 }

 if (!FUNC_1(VAR_8, VAR_7, 0))
  return VAR_1;

 if (VAR_7->clock < 10000)
  return VAR_2;

 if (VAR_7->flags & VAR_0)
  return VAR_3;

 return VAR_4;
}
