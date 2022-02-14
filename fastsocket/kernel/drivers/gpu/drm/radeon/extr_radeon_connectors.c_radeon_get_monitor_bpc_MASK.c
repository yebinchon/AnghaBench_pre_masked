
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {int lcd_misc; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {int dp_sink_type; } ;
struct radeon_connector {int edid; struct radeon_connector_atom_dig* con_priv; int use_digital; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct TYPE_2__ {int bpc; } ;
struct drm_connector {int connector_type; struct drm_connector_helper_funcs* helper_private; TYPE_1__ display_info; struct drm_device* dev; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_2 (int ) ;
 struct drm_encoder* FUNC_3 (struct drm_connector*) ;
 struct radeon_connector* FUNC_4 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

int FUNC_6(struct drm_connector *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_connector *VAR_7 = FUNC_4(VAR_4);
 struct radeon_connector_atom_dig *VAR_8;
 int VAR_9 = 8;

 switch (VAR_4->connector_type) {
 case 133:
 case 130:
  if (VAR_7->use_digital) {
   if (FUNC_2(VAR_7->edid)) {
    if (VAR_4->display_info.bpc)
     VAR_9 = VAR_4->display_info.bpc;
   }
  }
  break;
 case 134:
 case 131:
  if (FUNC_2(VAR_7->edid)) {
   if (VAR_4->display_info.bpc)
    VAR_9 = VAR_4->display_info.bpc;
  }
  break;
 case 132:
  VAR_8 = VAR_7->con_priv;
  if ((VAR_8->dp_sink_type == VAR_2) ||
      (VAR_8->dp_sink_type == VAR_3) ||
      FUNC_2(VAR_7->edid)) {
   if (VAR_4->display_info.bpc)
    VAR_9 = VAR_4->display_info.bpc;
  }
  break;
 case 128:
 case 129:
  if (VAR_4->display_info.bpc)
   VAR_9 = VAR_4->display_info.bpc;
  else if (FUNC_0(VAR_6) || FUNC_1(VAR_6)) {
   struct drm_connector_helper_funcs *VAR_10 =
    VAR_4->helper_private;
   struct drm_encoder *VAR_11 = VAR_10->best_encoder(VAR_4);
   struct radeon_encoder *VAR_12 = FUNC_5(VAR_11);
   struct radeon_encoder_atom_dig *VAR_13 = VAR_12->enc_priv;

   if (VAR_13->lcd_misc & VAR_0)
    VAR_9 = 6;
   else if (VAR_13->lcd_misc & VAR_1)
    VAR_9 = 8;
  }
  break;
 }
 return VAR_9;
}
