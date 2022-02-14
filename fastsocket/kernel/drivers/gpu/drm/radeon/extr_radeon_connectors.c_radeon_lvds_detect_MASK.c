
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {struct drm_display_mode native_mode; } ;
struct radeon_connector {scalar_t__ edid; TYPE_1__* ddc_bus; int base; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 struct drm_encoder* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,int) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_5(struct drm_connector *VAR_2, bool VAR_3)
{
 struct radeon_connector *VAR_4 = FUNC_3(VAR_2);
 struct drm_encoder *VAR_5 = FUNC_1(VAR_2);
 enum drm_connector_status VAR_6 = VAR_1;

 if (VAR_5) {
  struct radeon_encoder *VAR_7 = FUNC_4(VAR_5);
  struct drm_display_mode *VAR_8 = &VAR_7->native_mode;


  if (VAR_8->hdisplay >= 320 && VAR_8->vdisplay >= 240)
   VAR_6 = VAR_0;

 }


 if (VAR_4->edid)
  VAR_6 = VAR_0;
 else {
  if (VAR_4->ddc_bus) {
   VAR_4->edid = FUNC_0(&VAR_4->base,
             &VAR_4->ddc_bus->adapter);
   if (VAR_4->edid)
    VAR_6 = VAR_0;
  }
 }


 FUNC_2(VAR_2, VAR_6);
 return VAR_6;
}
