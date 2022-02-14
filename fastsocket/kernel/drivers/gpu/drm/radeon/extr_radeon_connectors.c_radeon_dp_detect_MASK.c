
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {struct drm_display_mode native_mode; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; int edp_on; } ;
struct TYPE_2__ {int hpd; } ;
struct radeon_connector {TYPE_1__ hpd; scalar_t__ dac_load_detect; int * edid; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int status; scalar_t__ connector_type; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct drm_connector*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_connector*,int) ;
 scalar_t__ FUNC_7 (struct radeon_connector*,int) ;
 scalar_t__ FUNC_8 (struct radeon_connector*) ;
 scalar_t__ FUNC_9 (struct radeon_connector*) ;
 scalar_t__ FUNC_10 (struct radeon_device*,int ) ;
 int FUNC_11 (struct drm_encoder*,struct drm_connector*) ;
 struct radeon_connector* FUNC_12 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_13 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_14(struct drm_connector *VAR_8, bool VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_connector *VAR_12 = FUNC_12(VAR_8);
 enum drm_connector_status VAR_13 = VAR_7;
 struct radeon_connector_atom_dig *VAR_14 = VAR_12->con_priv;
 struct drm_encoder *VAR_15 = FUNC_3(VAR_8);

 if (!VAR_9 && FUNC_4(VAR_8))
  return VAR_8->status;

 if (VAR_12->edid) {
  FUNC_1(VAR_12->edid);
  VAR_12->edid = ((void*)0);
 }

 if ((VAR_8->connector_type == VAR_4) ||
     (VAR_8->connector_type == VAR_3)) {
  if (VAR_15) {
   struct radeon_encoder *VAR_16 = FUNC_13(VAR_15);
   struct drm_display_mode *VAR_17 = &VAR_16->native_mode;


   if (VAR_17->hdisplay >= 320 && VAR_17->vdisplay >= 240)
    VAR_13 = VAR_6;
  }

  VAR_14->dp_sink_type = VAR_2;
  if (!VAR_14->edp_on)
   FUNC_0(VAR_8,
           VAR_1);
  if (FUNC_8(VAR_12))
   VAR_13 = VAR_6;
  if (!VAR_14->edp_on)
   FUNC_0(VAR_8,
           VAR_0);
 } else if (FUNC_5(VAR_8) !=
     VAR_5) {

  VAR_14->dp_sink_type = VAR_2;

  FUNC_8(VAR_12);

  if (VAR_15) {

   FUNC_2(VAR_15);

   if (FUNC_7(VAR_12, 1))
    VAR_13 = VAR_6;
   else if (VAR_12->dac_load_detect) {
    struct drm_encoder_helper_funcs *VAR_18 = VAR_15->helper_private;
    VAR_13 = VAR_18->detect(VAR_15, VAR_8);
   }
  }
 } else {
  VAR_14->dp_sink_type = FUNC_9(VAR_12);
  if (FUNC_10(VAR_11, VAR_12->hpd.hpd)) {
   VAR_13 = VAR_6;
   if (VAR_14->dp_sink_type == VAR_2)
    FUNC_8(VAR_12);
  } else {
   if (VAR_14->dp_sink_type == VAR_2) {
    if (FUNC_8(VAR_12))
     VAR_13 = VAR_6;
   } else {

    if (FUNC_7(VAR_12, 0))
     VAR_13 = VAR_6;
   }
  }
 }

 FUNC_6(VAR_8, VAR_13);
 return VAR_13;
}
