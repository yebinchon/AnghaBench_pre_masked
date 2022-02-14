
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {scalar_t__ rmx_type; struct drm_display_mode native_mode; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {scalar_t__ connector_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct drm_encoder* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct radeon_connector* FUNC_2 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_7,
      struct drm_display_mode *VAR_8)
{
 struct radeon_connector *VAR_9 = FUNC_2(VAR_7);
 struct radeon_connector_atom_dig *VAR_10 = VAR_9->con_priv;



 if ((VAR_7->connector_type == VAR_3) ||
     (VAR_7->connector_type == VAR_2)) {
  struct drm_encoder *VAR_11 = FUNC_0(VAR_7);

  if ((VAR_8->hdisplay < 320) || (VAR_8->vdisplay < 240))
   return VAR_5;

  if (VAR_11) {
   struct radeon_encoder *VAR_12 = FUNC_3(VAR_11);
   struct drm_display_mode *VAR_13 = &VAR_12->native_mode;




   if ((VAR_8->hdisplay > VAR_13->hdisplay) ||
       (VAR_8->vdisplay > VAR_13->vdisplay))
    return VAR_5;


   if (VAR_12->rmx_type == VAR_6) {
    if ((VAR_8->hdisplay != VAR_13->hdisplay) ||
        (VAR_8->vdisplay != VAR_13->vdisplay))
     return VAR_5;
   }
  }
  return VAR_4;
 } else {
  if ((VAR_10->dp_sink_type == VAR_0) ||
      (VAR_10->dp_sink_type == VAR_1))
   return FUNC_1(VAR_7, VAR_8);
  else
   return VAR_4;
 }
}
