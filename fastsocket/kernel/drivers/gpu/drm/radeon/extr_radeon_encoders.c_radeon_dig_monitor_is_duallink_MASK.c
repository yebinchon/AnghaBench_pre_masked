
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {int dp_sink_type; } ;
struct radeon_connector {int edid; struct radeon_connector_atom_dig* con_priv; int use_digital; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int connector_type; } ;


 int FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_1 (int ) ;
 struct drm_connector* FUNC_2 (struct drm_encoder*) ;
 struct drm_connector* FUNC_3 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_4 (struct drm_connector*) ;

bool FUNC_5(struct drm_encoder *VAR_2,
        u32 VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct drm_connector *VAR_6;
 struct radeon_connector *VAR_7;
 struct radeon_connector_atom_dig *VAR_8;

 VAR_6 = FUNC_2(VAR_2);



 if (!VAR_6)
  VAR_6 = FUNC_3(VAR_2);
 VAR_7 = FUNC_4(VAR_6);

 switch (VAR_6->connector_type) {
 case 131:
 case 128:
  if (VAR_7->use_digital) {

   if (FUNC_0(VAR_5) && FUNC_1(VAR_7->edid)) {
    if (VAR_3 > 340000)
     return 1;
    else
     return 0;
   } else {
    if (VAR_3 > 165000)
     return 1;
    else
     return 0;
   }
  } else
   return 0;
 case 132:
 case 129:
 case 130:
  VAR_8 = VAR_7->con_priv;
  if ((VAR_8->dp_sink_type == VAR_0) ||
      (VAR_8->dp_sink_type == VAR_1))
   return 0;
  else {

   if (FUNC_0(VAR_5) && FUNC_1(VAR_7->edid)) {
    if (VAR_3 > 340000)
     return 1;
    else
     return 0;
   } else {
    if (VAR_3 > 165000)
     return 1;
    else
     return 0;
   }
  }
 default:
  return 0;
 }
}
