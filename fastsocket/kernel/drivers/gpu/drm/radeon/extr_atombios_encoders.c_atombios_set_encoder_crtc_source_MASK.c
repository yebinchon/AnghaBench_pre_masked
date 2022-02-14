
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ucCRTC; void* ucEncoderID; void* ucEncodeMode; } ;
struct TYPE_4__ {int ucCRTC; void* ucDevice; } ;
union crtc_source_param {TYPE_2__ v2; TYPE_1__ v1; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {int dig_encoder; } ;
struct radeon_encoder {int encoder_id; int devices; int active_device; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_6__ {int atom_context; } ;
struct radeon_device {TYPE_3__ mode_info; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int connector_type; } ;
typedef int args ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (struct radeon_device*) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int ,int ) ;
 int VAR_27 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int*,int*) ;
 void* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (union crtc_source_param*,int ,int) ;
 int FUNC_7 (struct drm_encoder*,int) ;
 int FUNC_8 (struct drm_encoder*) ;
 struct drm_connector* FUNC_9 (struct drm_encoder*) ;
 struct radeon_crtc* FUNC_10 (int ) ;
 struct radeon_encoder* FUNC_11 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_12(struct drm_encoder *VAR_28)
{
 struct drm_device *VAR_29 = VAR_28->dev;
 struct radeon_device *VAR_30 = VAR_29->dev_private;
 struct radeon_encoder *VAR_31 = FUNC_11(VAR_28);
 struct radeon_crtc *VAR_32 = FUNC_10(VAR_28->crtc);
 union crtc_source_param VAR_33;
 int VAR_34 = FUNC_2(VAR_23, VAR_27);
 uint8_t VAR_35, VAR_36;
 struct radeon_encoder_atom_dig *VAR_37;

 FUNC_6(&VAR_33, 0, sizeof(VAR_33));

 if (!FUNC_4(VAR_30->mode_info.atom_context, VAR_34, &VAR_35, &VAR_36))
  return;

 switch (VAR_35) {
 case 1:
  switch (VAR_36) {
  case 1:
  default:
   if (FUNC_0(VAR_30))
    VAR_33.v1.ucCRTC = VAR_32->crtc_id;
   else {
    if (VAR_31->encoder_id == 142) {
     VAR_33.v1.ucCRTC = VAR_32->crtc_id;
    } else {
     VAR_33.v1.ucCRTC = VAR_32->crtc_id << 2;
    }
   }
   switch (VAR_31->encoder_id) {
   case 131:
   case 134:
    VAR_33.v1.ucDevice = VAR_14;
    break;
   case 133:
   case 132:
    if (VAR_31->devices & VAR_18)
     VAR_33.v1.ucDevice = VAR_17;
    else
     VAR_33.v1.ucDevice = VAR_16;
    break;
   case 139:
   case 140:
   case 136:
    VAR_33.v1.ucDevice = VAR_15;
    break;
   case 142:
   case 138:
    if (VAR_31->active_device & (VAR_20))
     VAR_33.v1.ucDevice = VAR_19;
    else if (VAR_31->active_device & (VAR_13))
     VAR_33.v1.ucDevice = VAR_12;
    else
     VAR_33.v1.ucDevice = VAR_10;
    break;
   case 141:
   case 137:
    if (VAR_31->active_device & (VAR_20))
     VAR_33.v1.ucDevice = VAR_19;
    else if (VAR_31->active_device & (VAR_13))
     VAR_33.v1.ucDevice = VAR_12;
    else
     VAR_33.v1.ucDevice = VAR_11;
    break;
   }
   break;
  case 2:
   VAR_33.v2.ucCRTC = VAR_32->crtc_id;
   if (FUNC_8(VAR_28) != VAR_26) {
    struct drm_connector *VAR_38 = FUNC_9(VAR_28);

    if (VAR_38->connector_type == VAR_24)
     VAR_33.v2.ucEncodeMode = VAR_22;
    else if (VAR_38->connector_type == VAR_25)
     VAR_33.v2.ucEncodeMode = VAR_21;
    else
     VAR_33.v2.ucEncodeMode = FUNC_5(VAR_28);
   } else
    VAR_33.v2.ucEncodeMode = FUNC_5(VAR_28);
   switch (VAR_31->encoder_id) {
   case 130:
   case 129:
   case 128:
   case 135:
    VAR_37 = VAR_31->enc_priv;
    switch (VAR_37->dig_encoder) {
    case 0:
     VAR_33.v2.ucEncoderID = VAR_2;
     break;
    case 1:
     VAR_33.v2.ucEncoderID = VAR_3;
     break;
    case 2:
     VAR_33.v2.ucEncoderID = VAR_4;
     break;
    case 3:
     VAR_33.v2.ucEncoderID = VAR_5;
     break;
    case 4:
     VAR_33.v2.ucEncoderID = VAR_6;
     break;
    case 5:
     VAR_33.v2.ucEncoderID = VAR_7;
     break;
    }
    break;
   case 136:
    VAR_33.v2.ucEncoderID = VAR_8;
    break;
   case 138:
    if (VAR_31->active_device & (VAR_20))
     VAR_33.v2.ucEncoderID = VAR_9;
    else if (VAR_31->active_device & (VAR_13))
     VAR_33.v2.ucEncoderID = VAR_9;
    else
     VAR_33.v2.ucEncoderID = VAR_0;
    break;
   case 137:
    if (VAR_31->active_device & (VAR_20))
     VAR_33.v2.ucEncoderID = VAR_9;
    else if (VAR_31->active_device & (VAR_13))
     VAR_33.v2.ucEncoderID = VAR_9;
    else
     VAR_33.v2.ucEncoderID = VAR_1;
    break;
   }
   break;
  }
  break;
 default:
  FUNC_1("Unknown table version: %d, %d\n", VAR_35, VAR_36);
  return;
 }

 FUNC_3(VAR_30->mode_info.atom_context, VAR_34, (uint32_t *)&VAR_33);


 FUNC_7(VAR_28, VAR_32->crtc_id);
}
