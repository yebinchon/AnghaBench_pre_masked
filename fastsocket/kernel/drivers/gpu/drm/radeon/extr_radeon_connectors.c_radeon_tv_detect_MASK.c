
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {int dac_load_detect; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_encoder* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*,int,int) ;
 int FUNC_2 (struct drm_connector*,int) ;
 int FUNC_3 (struct drm_encoder*,struct drm_connector*) ;
 struct radeon_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_5(struct drm_connector *VAR_2, bool VAR_3)
{
 struct drm_encoder *VAR_4;
 struct drm_encoder_helper_funcs *VAR_5;
 struct radeon_connector *VAR_6 = FUNC_4(VAR_2);
 enum drm_connector_status VAR_7 = VAR_1;

 if (!VAR_6->dac_load_detect)
  return VAR_7;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  VAR_7 = VAR_1;
 else {
  VAR_5 = VAR_4->helper_private;
  VAR_7 = VAR_5->detect(VAR_4, VAR_2);
 }
 if (VAR_7 == VAR_0)
  VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_7, 0);
 FUNC_2(VAR_2, VAR_7);
 return VAR_7;
}
