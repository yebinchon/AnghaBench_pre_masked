
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_display_mode* fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_1(struct drm_connector *VAR_2,
     struct drm_display_mode *VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_0(VAR_2);
 struct drm_display_mode *VAR_5 = VAR_4->panel.fixed_mode;

 if (VAR_3->hdisplay > VAR_5->hdisplay)
  return VAR_1;
 if (VAR_3->vdisplay > VAR_5->vdisplay)
  return VAR_1;

 return VAR_0;
}
