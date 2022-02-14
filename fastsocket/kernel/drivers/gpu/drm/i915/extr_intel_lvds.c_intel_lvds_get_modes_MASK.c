
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fixed_mode; } ;
struct TYPE_4__ {TYPE_1__ panel; int edid; } ;
struct intel_lvds_connector {TYPE_2__ base; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_connector*,int ) ;
 struct drm_display_mode* FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 struct intel_lvds_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct intel_lvds_connector *VAR_1 = FUNC_4(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;
 struct drm_display_mode *VAR_3;


 if (!FUNC_0(VAR_1->base.edid))
  return FUNC_1(VAR_0, VAR_1->base.edid);

 VAR_3 = FUNC_2(VAR_2, VAR_1->base.panel.fixed_mode);
 if (VAR_3 == ((void*)0))
  return 0;

 FUNC_3(VAR_0, VAR_3);
 return 1;
}
