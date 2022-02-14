
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int adapter; } ;
struct TYPE_2__ {scalar_t__ fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,scalar_t__) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct intel_dp* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 scalar_t__ FUNC_4 (struct intel_dp*) ;
 struct intel_connector* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_0)
{
 struct intel_dp *VAR_1 = FUNC_2(VAR_0);
 struct intel_connector *VAR_2 = FUNC_5(VAR_0);
 struct drm_device *VAR_3 = VAR_0->dev;
 int VAR_4;




 VAR_4 = FUNC_3(VAR_0, &VAR_1->adapter);
 if (VAR_4)
  return VAR_4;


 if (FUNC_4(VAR_1) && VAR_2->panel.fixed_mode) {
  struct drm_display_mode *VAR_5;
  VAR_5 = FUNC_0(VAR_3,
       VAR_2->panel.fixed_mode);
  if (VAR_5) {
   FUNC_1(VAR_0, VAR_5);
   return 1;
  }
 }
 return 0;
}
