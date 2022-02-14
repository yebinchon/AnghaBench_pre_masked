
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {scalar_t__ encoder_id; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {int dp_sink_type; } ;
struct radeon_connector {int edid; struct radeon_connector_atom_dig* con_priv; int use_digital; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int connector_type; } ;


 int FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 struct drm_connector* FUNC_3 (struct drm_encoder*) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_5 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

int
FUNC_7(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct radeon_device *VAR_15 = VAR_14->dev_private;
 struct radeon_encoder *VAR_16 = FUNC_6(VAR_13);
 struct drm_connector *VAR_17;
 struct radeon_connector *VAR_18;
 struct radeon_connector_atom_dig *VAR_19;


 if (FUNC_2(VAR_13) != VAR_11)
  return VAR_1;


 if ((VAR_16->encoder_id == VAR_9) ||
     (VAR_16->encoder_id == VAR_10))
  return VAR_3;

 VAR_17 = FUNC_3(VAR_13);



 if (!VAR_17)
  VAR_17 = FUNC_4(VAR_13);
 VAR_18 = FUNC_5(VAR_17);

 switch (VAR_17->connector_type) {
 case 135:
 case 132:
  if (FUNC_1(VAR_18->edid) &&
      VAR_12 &&
      !FUNC_0(VAR_15))
   return VAR_4;
  else if (VAR_18->use_digital)
   return VAR_2;
  else
   return VAR_0;
  break;
 case 136:
 case 133:
 default:
  if (FUNC_1(VAR_18->edid) &&
      VAR_12 &&
      !FUNC_0(VAR_15))
   return VAR_4;
  else
   return VAR_2;
  break;
 case 131:
  return VAR_5;
  break;
 case 134:
  VAR_19 = VAR_18->con_priv;
  if ((VAR_19->dp_sink_type == VAR_7) ||
      (VAR_19->dp_sink_type == VAR_8))
   return VAR_1;
  else if (FUNC_1(VAR_18->edid) &&
    VAR_12 &&
    !FUNC_0(VAR_15))
   return VAR_4;
  else
   return VAR_2;
  break;
 case 128:
  return VAR_1;
 case 137:
 case 129:
  return VAR_0;
  break;
 case 138:
 case 130:
 case 139:

  return VAR_6;

  break;
 }
}
