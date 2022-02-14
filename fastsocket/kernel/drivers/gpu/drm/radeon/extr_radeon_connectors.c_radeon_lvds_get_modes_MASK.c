
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_connector {scalar_t__ ddc_bus; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int height_mm; int width_mm; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct radeon_connector*) ;
 int FUNC_4 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_display_mode* FUNC_5 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_6(VAR_0);
 struct drm_encoder *VAR_2;
 int VAR_3 = 0;
 struct drm_display_mode *VAR_4;

 if (VAR_1->ddc_bus) {
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3 > 0) {
   VAR_2 = FUNC_2(VAR_0);
   if (VAR_2) {
    FUNC_4(VAR_2, VAR_0);

    FUNC_1(VAR_2, VAR_0);
   }
   return VAR_3;
  }
 }

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return 0;


 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) {
  VAR_3 = 1;
  FUNC_0(VAR_0, VAR_4);

  VAR_0->display_info.width_mm = VAR_4->width_mm;
  VAR_0->display_info.height_mm = VAR_4->height_mm;

  FUNC_1(VAR_2, VAR_0);
 }

 return VAR_3;
}
